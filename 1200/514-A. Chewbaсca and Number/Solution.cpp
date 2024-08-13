//headerfile
#include<iostream>
#include<string>

//namespace
using namespace std;

//typedef
typedef long long int ll;

//functions
int main(){
    //write your code here
    //1-->8 2-->7 3-->6 4-->5 5-->4

    string s;
    cin >> s;
    /* unfortunately this does not work on codeforece's compiler
    char a;
    if(s[0] == '9'){
        a = '9';
        s = s.substr(1);
        //substr(int) --> copy string from int index
        //substr(int a, int b)--> copy b characters start at index a
    }
    */
    bool check = false; //So i came up with other solutions
    if(s[0]=='9'){
        check = true;
    }
    for(char &a : s){//use for each loop to change a character using reference
        int num = a - '0';//convert char to int using ASCII number
        int temp = min(num, 9-num);//can write like this too
        /*
        int temp = num;
        if(num > 4){
            temp = 9 - num;
        }
        */
        a = temp + '0'; //convert int to char (back to original)
    }
    //when print the output there has to be some conditions
    if(check && s.size()!=1)
        cout << '9'+ s.substr(1);
        //substr(int) --> copy string from int index
        //substr(int a, int b)--> copy b characters start at index a
    else if(check && s.size() == 1)
        cout << '9';
    else
        cout << s;
    return 0;
}