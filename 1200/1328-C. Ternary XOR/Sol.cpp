//1328-C. Ternary XOR
//headerfile
#include<iostream>
#include<string.h>

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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string str1 = "1";//max one
        string str2 = "1";//less one
        int cnt = 0;
        bool check = false;
        for(int i = 1;i < n;i++){
            if(s[i] == '1'){
                str1 += "1";
                str2 += "0";
                cnt = i+1;
                check = true;
                break;
            }
            if(s[i] == '0'){
                str1+="0";
                str2+="0";
            }
            else{
                str1+="1";
                str2+="1";
            }
        }   
        if(check)
            for(int i = cnt;i < n;i++){
                str1 += "0";
                str2 += s[i];
            }
        cout << str1 << endl;
        cout << str2 << endl;
    }
    return 0;
}