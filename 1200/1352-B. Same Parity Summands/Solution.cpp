//1352-B. Same Parity Summands
//headerfile
#include<iostream>

//namespace
using namespace std;

//functions
int main(){
    //write your code here
    ios::sync_with_stdio(false);
    cin.tie();

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        if(k > n)
            cout << "NO" << endl;
        else if(k==1){
            cout << "YES" << endl;
            cout << n << endl;
        }
        else if(n==k){
            cout << "YES" << endl;
            for(int i = 0; i < n;i++)
                cout << '1' << ' ';
            cout << endl;
        }
        else if(n%2 == 1 && k % 2 == 0)
            cout << "NO" << endl;
        else if(n%2 == 1 && k%2 == 1){
            cout << "YES" << endl;
            for(int i = 1; i < k;i++)
                cout << '1' << ' ';
            cout << n-k+1 << endl;
        }
        else if(n%2 == 0 && k%2 == 1){
            if(n/2 < k)
                cout << "NO" << endl;
            else{
                cout << "YES" << endl;
                for(int i = 1; i < k;i++)
                    cout << 2 << ' ';
                cout << n-((k-1)*2) << endl;
            }
        }
        else{
            if(n/2 < k){
                cout << "YES" << endl;
                for(int i = 1;i < k;i++)
                    cout << '1' << ' ';
                cout << n-k+1 << endl;
            }
            else{
                cout << "YES" << endl;
                for(int i = 1;i < k;i++)
                    cout << '2' << ' ';
                cout << n-(k-1)*2 << endl;
            }
        }
    }
    return 0;
}