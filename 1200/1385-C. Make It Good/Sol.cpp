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
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = n-1;i >= 0;i--){
            cin >> arr[i];
        }
        bool start = false;
        bool flag = false;
        for(int i = 0;i < n-1;i++){
            if(arr[i]< arr[i+1]){
                start = true;
                break;
            }
            else if(arr[i] > arr[i+1]){
                start = false;
                break;
            }
        }
        //else it either = or less
        int ans = 0;
        for(int i = 1;i < n-1;i++){
            if(start){
                if(!flag){
                    if(arr[i] <= arr[i+1]){
                        continue;
                    }
                    else if(arr[i] > arr[i+1]){
                        flag = true;
                    }
                }
                else if(flag){
                    if(arr[i] >= arr[i+1]){
                        continue;
                    }
                    else if(arr[i] < arr[i+1]){
                        ans = n-i-1;
                        break;
                    }
                }
            }
            else{
                if(!flag){
                    if(arr[i] >= arr[i+1]){
                        continue;
                    }
                    else if(arr[i] < arr[i+1]){
                        flag = true;
                        ans = n-i-1;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}