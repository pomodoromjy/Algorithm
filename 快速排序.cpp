#include<iostream>
using namespace std;
int a[101],n;
void quicksort(int left,int right) {
if(left > right) return;
int temp = a[left];
int i = left;
int j = right;
while(i != j) {
    while(a[j] >= temp && i < j)
        j--;
    while(a[i] <= temp && i < j)
        i++;
    if(i < j) {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
}
a[left] = a[i];
a[i] = temp;
quicksort(left,i-1);
quicksort(i+1,right);
return;
}
int main()
{
    while(cin>>n) {
        for(int i = 0;i < n;i++) {
            cin>>a[i];
        }
        quicksort(0,n-1);
        for(int i = 0;i < n;i++) {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
