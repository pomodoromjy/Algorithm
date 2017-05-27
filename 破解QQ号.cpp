#include<iostream>
using namespace std;
int main()
{
    int a[100],head,tail,n;
    while(cin>>n) {
        for(int i = 0;i < n;i++) {
            cin>>a[i];
        }
        head = 0;
        tail = n;
        while(head < tail) {
            cout<<a[head]<<" ";
            head++;
            a[tail] = a[head];
            tail++;
            head++;
        }
    }
    return 0;
}
