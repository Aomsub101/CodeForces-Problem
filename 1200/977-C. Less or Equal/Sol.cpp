//977-C. Less or Equal
//headerfile
#include<iostream>
#include<vector>
#include<algorithm>

//namespace
using namespace std;

//functions
int main(){
    //write your code here
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int &it : v)
        cin >> it;
    sort(v.begin(),v.end());
    if(k==0){
        if(v[0]-1 == 0){
            cout << "-1";
            return 0;
        }
        else{
            cout << v[0]-1;
            return 0;
        }
    }
    if(v[k-1] != v[k] && v[k-1] != 0)
        cout << v[k-1];
    else
        cout << "-1";
    return 0;
}