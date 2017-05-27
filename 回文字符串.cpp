#include<iostream>
#include<string>
using namespace std;
int main() {
    string a,b;
    int top,next,len,mid;
    while(cin>>a) {
        len = a.length();
        mid = len / 2 - 1;
        top = 0;
        for(int i = 0;i <= mid;i++) {
            b[++top] = a[i];
        }
        if(len % 2 == 0)
            next = mid + 1;
        else
            next = mid + 2;
        for(int i = next;i < len;i++) {
            if(a[i] != b[top]) break;
            else
                top--;
        }
        if(top == 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
return 0;
}
