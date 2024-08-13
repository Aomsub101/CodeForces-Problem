//headerfile
#include<iostream>
#include<vector>
#include<algorithm>

//namespace
using namespace std;

//functions

int sol(vector<int>& g, vector<int>& ng, vector<pair<int,int>>& p, int n, int sum){
    //1 1 1 4 4 5
    //2 2 2 5 5 6
    int mxg = p[n-1].first;//getting max grade value
    int posMc = 0;
    int posMc_sum = 0;
    int mxc = p[0].second-p[0].first;
    int mxc_sum = 0;
    for(int i = 1;i < n-1;i++){
        if(p[posMc].second >= mxg || p[i].second-p[i].first >= mxg){
            posMc = max(posMc, i);
            return sum + mxg - p[posMc].first;
        }
        int change = p[i].second-p[i].first;
        if(change > mxc_sum){
            mxc_sum = change;
            posMc_sum = i;
        }
    }

    if(mxc <= mxc_sum)
        return sum+mxc_sum;
    else{//mxc > mxc_sum
        if(posMc_sum != 1){
            if(sum+mxc_sum >= sum-p[1].first+p[0].second)
                return sum+mxc_sum;
            else
                return sum-p[1].first+p[0].second;
        }
        else{
            if(sum+mxc_sum >= sum-p[2].first+p[0].second)
                return sum+mxc_sum;
            else
                return sum-p[2].first+p[0].second;
        }
    }
    return 0;
}

int main(){
    //write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        
        //input grade and new grade
        vector<int> g(n), ng(n);
        for(auto &i : g){//sample : 1 1 4 5 1 4
            cin >> i;
            sum += i;
        }
        for(auto &i : ng)//sample : 2 2 5 6 2 5
            cin >> i;
        
        vector<pair<int,int>> p;

        for(int i = 0;i < n;i++){
            p.push_back(make_pair(g[i], ng[i]));//making pair
        }
        //1 1 1 4 4 5
        //2 2 2 5 5 6
        sort(p.begin(), p.end()); //sorting pair reference to grade
        sum-=p[0].first+p[n-1].first;

        int res = sol(g, ng, p, n, sum);
        cout << res << endl;

    }
    return 0;
}