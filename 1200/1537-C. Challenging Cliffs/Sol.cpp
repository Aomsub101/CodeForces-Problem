//1537-C. Challenging Cliffs
//headerfile
#include<iostream>
#include <math.h>
#include <vector>
#include <algorithm>
//namespace
using namespace std;

//define
#define c_a_l_c ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

//functions
int main(){
    c_a_l_c;
    //write your code here
    //the idea is to find the shortest different height of a sort height of a mountain
    //let M(k) and M(k+1) be the shortest different
    //1 3 4 6 8 8 9
    //Only way to minimize the height different of first and last mountain is using the mountain
    //M(k), M(k+2), M(k+3), ..., M(n), M(0), M(1), ..., M(k-2), M(k-1), M(k+1)
    //
    //the out put in this case should be
    //3 6 8 8 9 2 4
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int &it : v)
            cin >> it;

        sort(v.begin(), v.end());

        if(n==2){
            cout << v[0] << ' ' << v[1] << endl;
            continue;
        }

        int h = INT_MAX, pos;
        for(int i = 1;i < n;i++){
            if(h > v[i]-v[i-1]){    
                h = v[i]-v[i-1];
                pos = i;
            }
        }
        for(int i = pos; i < n;i++){
            cout << v[i] << ' ';
        }
        for(int i = 0;i < pos; i++){
            cout << v[i] << ' ';
        }
        cout << endl;
        
    }
    return 0;
}