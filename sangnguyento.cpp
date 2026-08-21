// memset(tenMang, giatri, sizeof(tenMang));

#include<bits/stdc++.h>
using namespace std;

const int N = 10000000;
bool arr[N+1];

void sangNguyenTo() {
    memset(arr, true, sizeof(arr));

    arr[0] = arr[1] = false;
    for (int i = 2; i <= sqrt(N);i++){
        if(arr[i]) {
            for (int j = i*i;j<=N;j+=i){
                arr[j] = false;
            }
        }
    }
}

int main()
{
    sangNguyenTo();
    for (int i = 1;i<=1202;i++){
        if(arr[i]){
            cout << i << " ";
        }
    }
    return 0;
}
