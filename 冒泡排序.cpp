#include<iostream>
using namespace std;
int main() {
    int i,j,a[100],n,t;
    while(cin>>n) {
    for(i = 0;i < n;i++) {
    cin>>a[i];
    }
    for(i = 1;i <= n-1;i++)
        for(j = 0;j < n-i;j++) {
            if(a[j] < a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    for(i = 0;i < n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    }
return 0;
}
