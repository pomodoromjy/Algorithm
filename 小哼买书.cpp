#include<iostream>
using namespace std;
int main() {
    int i,j = 0,t,n,book[1001];
    for(i = 0;i < 1001;i++) {
        book[i] = 0;
    }
    while(cin>>n) {
        for(i  = 0;i < n;i++) {
            cin>>t;
            book[t]++;
        }
        for(i = 0;i < 1001;i++)
        if(book[i] != 0) {
            j++;
        }
        cout<<j<<endl;
        for(i = 0;i < 1001;i++) {
            if(book[i] != 0) {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}
