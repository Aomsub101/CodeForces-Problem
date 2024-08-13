//1364-A. XXXXX
//headerfile
#include<iostream>
#include <algorithm>
//namespace
using namespace std;

//define
#define c_a_l_c ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

//functions
int main(){
    c_a_l_c;
    //write your code here
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int sum = 0;
        int l=-1,r;
        for(int i = 0;i < n;i++){
            int a;
            cin >> a;
            if(a%x){
                if(l == -1)
                    l = i;  
                r = i;
            }
            sum += a;
        }
        if(sum%x){
            cout << n << endl;
        }
        else if(l == -1){
            cout << "-1" << endl;
        }
        else{
            cout << n -min(l+1, n-r) << endl;
        }
    }

    return 0;
}