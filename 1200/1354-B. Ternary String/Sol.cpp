//1354 - B. Ternary String
//headerfile
#include<iostream>
#include<vector>
#include<algorithm>

//namespace
using namespace std;

//functions
int main(){
    ios::sync_with_stdio(false);
    cin.tie();
    //write your code here

    //answer
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int ans = INT_MAX;
        vector<pair<char, int>> v;
        for(auto a : s){
            if(v.empty() || v.back().first != a)
                v.push_back(make_pair(a, 1));
            else
                v.back().second++;
        }
        int m = v.size();
        for(int i = 1;i < m-1; i++){
            if(v[i-1].first != v[i+1].first)
                ans = min(ans, v[i].second + 2);
        }
        if(ans > n)
            ans = 0;
        cout << ans << endl;
    }
    return 0;
}