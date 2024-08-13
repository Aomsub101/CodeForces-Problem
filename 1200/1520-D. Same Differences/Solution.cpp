//headerfile
#include<iostream>
#include<map>

//namespace
using namespace std;

//functions
int main(){
    //write your code here
    int t;
    cin >> t;
    while(t--){
    /* This code works but it takes O(n^2) times to run which is not good
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
            int cnt = 0;
            for(int i = n-1; i >= 0; i--){
                for(int j = i-1; j >= 0; j--){
                    if(arr[i] - arr[j] == i-j)
                        cnt++;
                }
            }
            cout << cnt << endl;
        */
        //here is the answer and the optimal one which takes O(n)
        int n;
        cin >> n;
        map<int, int> m; //initialize the map name m
        long long int res = 0;
        for(int i = 0; i < n;i++){
            int temp;
            cin >> temp;
            //we know that ai - aj = i - j
            //--> ai - i = aj - j 
            //changes ai - i to bi
            //changes aj - j to bj
            //we have to find the most amount of bi = bj
            temp-=i; // follow the concept that ai - i = bi
            res += m[temp]; //map value is 0 when initialize
            m[temp]++;//so we increment it in this line. So, if there are similar bi
            //we will add that to res (result)
        }
        cout << res << endl;
        
    }
    
   
    
    return 0;
}