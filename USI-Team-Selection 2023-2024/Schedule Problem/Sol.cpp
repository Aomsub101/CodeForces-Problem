//headerfile
#include<iostream>
#include<algorithm>

//namespace
using namespace std;

//functions
int main(){
    //write your code here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int mx_st = INT_MIN;
        int mn_en = INT_MAX;
        for(int i = 0;i < n;i++){
            int st, end;
            cin >> st >> end;
            mx_st = max(mx_st, st);
            mn_en = min(mn_en, end);
        }
        if(mx_st <= mn_en)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }
    return 0;
}