//headerfile
#include<iostream>

//namespace
using namespace std;

//functions
int b_search(int locate, int par_sum[], int end){
    int st = 0;
    int mid = 0;
    while(true){
        mid = (st+end)/2;
        if(locate <= par_sum[mid]){
        //have a nested condition to check if
        //there are no lower piles that contains this juicy worms
            if(locate > par_sum[mid-1] || mid-1 < 0)
                break;
            else
                end = mid;
        }
        else if(locate > par_sum[mid])
            st = mid+1;
        else
            end = mid;
    }

    return mid+1;
}

int main(){
    //write your code here
    //This code works but it take too long
/* 
    int piles;
    cin >> piles;
    int a_worms[piles];
    for(int i = 0; i < piles;i++){
        cin >> a_worms[i];
    }
    int juicy;
    cin >> juicy;
    int locate[juicy];
    for(int i = 0;i < juicy;i++){
        cin >> locate[i];
    }
    
    int p = 1;
    int cnt = a_worms[0];
    int pos[juicy] = {0};
    int p_juicy = 0;
    while(true){
        if(locate[p_juicy] <= cnt-a_worms[p-1]){
            p--;
            cnt -= a_worms[p];
        }
        else if(locate[p_juicy] <= cnt){
            pos[p_juicy] = p;
            p_juicy++;
        }
        else{
            p++;
            cnt+= a_worms[p-1];
        }
        if(p_juicy == juicy)
            break;
    }
    for(int n : pos){
        cout << n << endl;
    }
*/

    // here is the optimal one

    int piles;
    cin >> piles;
    int a_worms[piles];
    for(int i = 0; i < piles;i++){
        cin >> a_worms[i];
    }
    int juicy;
    cin >> juicy;
    int locate[juicy];
    for(int i = 0;i < juicy;i++){
        cin >> locate[i];
    }
    //create a partial sum of each pile of worms
    int par_sum[piles];
    int sum = 0;
    for(int i = 0;i < piles;i++){
        sum += a_worms[i];
        par_sum[i] = sum;
        //cout << par_sum[i] << endl;
    }
    

    //do some binary search
    for(int i = 0;i < juicy;i++){
        cout << b_search(locate[i], par_sum, piles-1) << endl;
    }

    return 0;
}