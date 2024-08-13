//1399-C. Boats Competition
//headerfile
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
//namespace
using namespace std;

#define c_a_l_c ios::sync_with_stdio(false); cin.tie();

//functions
int main(){

    c_a_l_c;
    //write your code here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;

        bool check[n+1] = {false};//Note : I stuck at this prooblem cuz I declare a check as check[n] so when
                             //check with the same n value it exceed the array so it return false
        map<int,int> cnt;
        //input the number and count the occurence of hte numbers
        while(n--){
            int i;
            cin >> i;
            if(check[i] == false){
                v.push_back(i);
                check[i] = true;
            }//count the total number of people with same weight
            cnt[i]++;
        }
        //sort the vector or not would give the same result which is more faster
        //sort(v.begin(), v.end());
        int size = v.size();
        //count all sum possible and stores in map
        map<int, int> m;
        int sum = 0;
        //brute force for all the possible sum
        for(int i = 0;i < size; i++){
            for(int j = i;j < size;j++){
                if(v[i] == v[j]){
                    sum = v[i]*2;
                    m[sum]+=cnt[v[i]]/2;
                    continue;
                }
                sum = v[i]+v[j];
                m[sum]+= min(cnt[v[i]], cnt[v[j]]);
            }    
            
        }
        
        int ans = 0;
        map<int,int>::iterator it;
        for(it = m.begin();it != m.end(); it++){
            ans = max(ans, it->second);
        }
        cout << ans << "\n";    
    }   
    return 0;
}