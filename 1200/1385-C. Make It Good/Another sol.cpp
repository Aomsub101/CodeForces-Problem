//1385-C. Make It Good
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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(auto  &i : arr)
            cin >> i;

        int pos = n-1;
        while(pos > 0 && arr[pos-1] >= arr[pos]) --pos;
        while(pos > 0 && arr[pos-1] <= arr[pos]) --pos;
        cout << pos << endl;
    }
    return 0;
}