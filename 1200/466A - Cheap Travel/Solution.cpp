//466A - Cheap Travel

//headerfile
#include<iostream>

//namespace
using namespace std;

//functions
int main(){
    //write your code here
    //find minimum of cost
    int n, sp, costSingle, costSp; //10 2 1 1 --> 5
    cin >> n >> sp >> costSingle >> costSp;
    int minimum = 0;
    
    //take n rides in total
    //compared sp ticket with single rides ticket whcih one is better 
    if(costSingle <= float(float(costSp)/float(sp)))//compared one ride which ticket cost less
        cout << n*costSingle;
    else{
        int left_over_ride = n%sp;
        minimum += (n/sp)*costSp;//cost of using multiple ride

        //check that if left over rides what ticket should we use
        if(left_over_ride*costSingle < costSp)
            minimum += left_over_ride*costSingle;
        else
            minimum += costSp;

        cout << minimum;
    }
    return 0;
}