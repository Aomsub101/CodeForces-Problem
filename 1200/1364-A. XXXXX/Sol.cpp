//1364-A. XXXXX
//headerfile
#include<iostream>
#include<vector>
#include <algorithm>
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
        int n,x;
        cin >> n >> x;
        //
        vector<int> v(n);
        int sum = 0;
        for(auto &it : v){
            cin >> it;
            sum += it;
        }
        if(sum%x != 0){
            cout << n << endl;
            continue;
        }
        int len = -1;
        int cnt = 1;
        int ptr1 = v[0];//0
        int ptr2 = v[n-1];//6
        bool flag = false;

        for(int i = 1;i < n;i++){
            if((sum - ptr1) % x != 0){
                len = n-cnt;
                flag = true;
            }
            else{
                ptr1 += v[i];
            }
            if((sum - ptr2) % x != 0){
                len = n - cnt;
                flag = true;
            }
            else{
                ptr2 += v[n-i-1];
            }
            if(flag)
                break;
            cnt++;
        }
        if(len == n-1){
            cout << len << endl;
            continue;
        }
        ptr1 = v[1];//2
        ptr2 = v[n-2];//2
        flag = false;
        for(int i = 2;i <= n/2 +1;i++){
            //delete from the back then delete the front
            if((sum - ptr2) % x != 0 || (sum - ptr1) % x != 0){
                len = max(len,n-i-1);
                flag = true;
            }
            else{
                sum -= ptr1+ptr2;
                if(sum % x != 0){
                    len = n-i;
                    flag = true;
                }
                ptr1 = v[i];
                ptr2 = v[n-i-1];
            }
            if(flag)
                break;
        }
        cout << len << endl;
    }

    return 0;
}