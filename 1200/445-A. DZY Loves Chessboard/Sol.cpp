//445-A. DZY Loves Chessboard
//headerfile
#include<iostream>

//namespace
using namespace std;

//define
#define c_a_l_c ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

//functions
int main(){
    c_a_l_c;
    //write your code here
    int n, m;
    cin >> n >> m;
    string s;
    int len = n*m;
    for(int i = 0;i < n;i++){
        string t;
        cin >> t;
        s += t;
    }
    if(n == 1 && m == 1){
        if(s == ".") cout << 'B';
        else cout << '-';
        return 0;
    }

    if(m%2 != 0){
        int cnt = 0;
        bool flag = false;
        for(int i = 0;i < len;i++){
            if(!flag){
                if(cnt%2==0){
                    if(s[i] == '.')
                        cout << 'W';
                    else
                        cout << '-';
                    cnt++;
                }
                else{
                    if(s[i] == '.')
                        cout << 'B';
                    else
                        cout << '-';
                        cnt++;
                }
            }
            else{
                if(cnt%2==0){
                    if(s[i] == '.')
                        cout << 'B';
                    else
                        cout << '-';
                    cnt++;
                }
                else{
                    if(s[i] == '.')
                        cout << 'W';
                    else
                        cout << '-';
                        cnt++;
                }
            }
            if(cnt == m){
                cnt = 0;
                flag = !flag;
                cout << endl;
            }
        }
    }
    else{
        int cnt = 0;
        bool flag = false;
        for(int i = 0;i < len;i++){
            if(!flag){
                if(cnt%2==0){
                    if(s[i] == '.')
                        cout << 'B';
                    else
                        cout << '-';
                    cnt++;
                }
                else{
                    if(s[i] == '.')
                        cout << 'W';
                    else
                        cout << '-';
                        cnt++;
                }
            }
            else{
                if(cnt%2==0){
                    if(s[i] == '.')
                        cout << 'W';
                    else
                        cout << '-';
                    cnt++;
                }
                else{
                    if(s[i] == '.')
                        cout << 'B';
                    else
                        cout << '-';
                        cnt++;
                }
            }
            if(cnt == m){
                cnt = 0;
                flag = !flag;
                cout << endl;
            }
        }
    }

    return 0;
}