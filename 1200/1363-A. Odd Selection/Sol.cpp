//1363-A. Odd Selection
//headerfile
#include<iostream>

//namespace
using namespace std;

//functions
int main(){
    //write your code here
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int cntOdd = 0, cntEven = 0;

        for(int i = 0;i < n;i++){
            int temp;
            cin >> temp;
            if(temp%2 == 0)
                cntEven += 1;
            else
                cntOdd += 1;
        }
        if(x == n){
            if(n%2 == 1){//n is odd
                if(cntOdd%2 == 1)//there has to be odd amount of odd number
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else{//n is even
                if(cntEven %2 == 1)//there has to be odd amount of even number
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
        else if(x != n){
            if(n%2 == 1){//n is odd
                if(x%2 == 1){//x is odd
                    if(cntOdd > 0)
                        cout << "YES" << endl;
                    else
                        cout << "NO" << endl;
                }
                else{//x is even
                    if(cntEven > 0 && cntOdd > 0)
                        cout << "YES" << endl;
                    else
                        cout << "NO" << endl;
                }
            }
            else{//n is even
                if(x%2 == 1){//x is odd
                    if(cntOdd > 0)
                        cout << "YES" << endl;
                    else
                        cout << "NO" << endl;
                }
                else{//x is even
                    if(cntEven > 0 && cntOdd > 0)
                        cout << "YES" << endl;
                    else
                        cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}