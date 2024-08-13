//1352C. K-th Not Divisible by n

//headerfile
#include<iostream>

//namespace
using namespace std;

//functions
//note that this take O(n) and not good(it's not passed the submission)
/*
int main(){ 
    //write your code here
    //test case:
    int t;
    cin >> t;
    while(t != 0){
        int n, k;
        cin >> n >> k;
        int result = 0;
        int cnt = 0;
        if(k == 1){
            cout << k;
            --t;
        }
        else{
            while(true){//the number that is favorable is the number that %n != 0
                if((result+1) % n != 0) //check if the nect number is divisible by n or not
                    result++;
                else
                    result += 2;
                cnt++;
                if(cnt == k)
                    break;
            }
            cout << result << endl;
            --t;
        }
    }
    return 0;
}
*/

//here is another solution (answer) which is in the link I will paste in credit
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int need = (k-1)/(n-1);//each multiplier will shift the answer by 1
        cout << k + need << endl;
    }
    return 0;
}
