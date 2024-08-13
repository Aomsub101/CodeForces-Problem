//327-A. Flipping Game
//headerfile
#include<iostream>
#include<algorithm>
//namespace
using namespace std;

//functions
int main(){
    //write your code here
    int n;
    cin >> n;
    bool check = false;
    int sum = 0, cnt = 0, maximum = 0;
    for(int i = 0; i < n; i++){//iterate through the input
        int num;
        cin >> num;
        if(n == 1){  //if there is only 1 number then flip it and break the loop
            cout << 1 - num;
            check = true; //check to see that is the input has only 1 or not
            break;
        }    
        if(num == 0)//if we input 0 then flipping it increase the sum by 1
            sum++;
        else{//if we input 1 then flipping it decrease the sum by 1
            if(sum!=0) //lowest sum is 0 then if it is 0, its stay 0
                sum--;
            cnt++;//count how many 1s has been input
        }
        maximum = max(maximum, sum); //use for store a maximum 1s after flipping an interval+
    }
    if(cnt != n && !check) 
        cout << cnt+maximum;
    else if(!check)    //if all of the input is 1 but we need to flip 1 time so that will be -1
        cout << cnt-1;
    return 0;
}