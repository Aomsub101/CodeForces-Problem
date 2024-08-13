//433-B. Kuriyama Mirai's Stones
//headerfile
#include<iostream>
#include<vector>
#include<algorithm>

//namespace
using namespace std;
//typedef
typedef long long int ll;

//functions
int main(){
    //write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    cin >> n;
    vector<ll> sum(n+1, 0), sortSum(n+1, 0);
    for(int i = 1;i <= n;i++){
        ll temp;
        cin >> temp;
        sum[i] = temp;
        sortSum[i] = temp;
    }
    sort(sortSum.begin(), sortSum.end());
    for(int i = 1; i <= n;i++){
        sum[i]+=sum[i-1];//sum of the unsorting number
        sortSum[i]+=sortSum[i-1];//sum of the sorting number
    }
    // for(auto i : sum) cout << i << ' ';
    // cout << endl;
    // for(auto i : sortSum) cout << i << ' ';
    int t; cin >> t; //test case
    while(t--){
        int type, l ,r;
        cin >> type >> l >> r;
        if(type==1)
            cout << sum[r] - sum[l-1] << endl;
        else 
            cout << sortSum[r] - sortSum[l-1] << endl;
    }
    
    return 0;
}