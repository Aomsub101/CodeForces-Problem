//Boredom 455A//

#include <iostream>
#include <algorithm>
using namespace std;

typedef long long int ln;

ln cnt[100005] = {0};
ln max_point[100005];

int main(){
    int n,max_val = 0; cin>>n ;
    for(int i = 0;i < n; i++){
        int x;
        cin >> x;
        cnt[x]++;
        max_val = max(max_val,x);
    }
    max_point[0] = 0;
    max_point[1] = cnt[1];
    for(int i = 2;i <= max_val; i++){
        max_point[i] = max(max_point[i-1], max_point[i-2] + i*cnt[i]);
    }

    cout << max_point[max_val];
}