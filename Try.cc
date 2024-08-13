//headerfile
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
//namespace
using namespace std;
//typedef
typedef long long int ll;

//functions
int main(){
    //write your code here
    int sum = 0;
    for(int i = 0;i <= 7;i++){
        sum += pow(2,i);
    }
    cout << sum;
    return 0;
}