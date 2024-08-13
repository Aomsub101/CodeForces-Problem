//1343-C. Alternating Subsequence
//headerfile
#include<iostream>
#include<vector>
#include<algorithm>
//namespace
using namespace std;

//functions
//use for checking if the number are in the same sign or not
bool check(int x){
    if(x > 0)
        return true;
    return false;
}
int main(){
    //write your code here
    int t;
    cin >> t; //test case

    while(t--){
        int n;
        cin >> n;
        long long int sum = 0;
        vector<int> a(n); //vector a that has n members
        //for every members in vector a,as a reference. Input a number.
        for(auto &in : a)
            cin >> in; 
        //main job
        //the idea is  For example, if the array is [1,1,2,−1,−5,2,1,−3]
        //we can seperate these segments as [1,1,2], [−1,−5], [2,1]and [−3]
        //and these segments are the maximum lenght of the sequence
        //select the maximum value from each segments then add it to the sum
        for(int i = 0;i < n;++i){
            int j = i; 
            int cur = INT_MIN;//the maximum numbers in the segment

            //selecting maximumnumbers in the segments
            while(j < n && check(a[i]) == check(a[j])){
                cur = max(cur,a[j]);
                ++j;
            }
            sum += cur; //Then add it to sum
            i = j-1; //starting index now change to j-1
        }
        cout << sum << endl;//output the answer
    }
    return 0;
}