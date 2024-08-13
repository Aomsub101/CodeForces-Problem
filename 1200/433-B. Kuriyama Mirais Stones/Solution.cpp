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
    int n;
    cin >> n;

    vector<ll> sum(n+1,0);
    vector<ll> sortSum(n+1);
    vector<ll> num(n);

    sum[0] = 0;
    sortSum[0] = 0;

    for(int i = 0;i < n;i++){
        ll temp;
        cin >> temp;
        num[i] = temp;
        if(i == 0){
            sum[1] = temp;
            continue;
        }
        sum[i+1] = sum[i] + temp;
    }

    sort(num.begin(), num.end());
    for(int i = 1;i <= n;i++){
        sortSum[i] = sortSum[i-1]+num[i-1];
    }
    
    //for(auto i : sum) cout << i << ' ' << endl;
    //for(auto i : sortSum) cout << i << ' ' << endl;
    int t;
    cin >> t;
    while(t--){
        ll type,l,r;
        cin >> type >> l >> r;
        if(type == 1){
            cout << sum[r] - sum[l-1] << endl;
        }
        else{
            cout << sortSum[r] - sortSum[l-1] << endl;
        }

    }
    return 0;
}