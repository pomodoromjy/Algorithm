#include<iostream>
using namespace std;
int main() {
    int i,j,n,t,book[101];
    for(i = 0;i < 101;i++) {
        book[i] = 0;
    }
    cin>>n;
        for(i = 0;i < n;i++) {
            cin>>t;
            book[t]++;
        }
        for(i = 100;i >= 0;i--) {
            for(j = 1;j <= book[i];j++) {
                cout<<i<<" ";
            }
        }
        cout<<endl;
return 0;
}
