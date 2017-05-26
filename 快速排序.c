#include<iostream>
using namespace std;
int a[100],n;
    quicksort(int left,int right) {
        if(left > right)
            return;
    int temp = a[left];
    int i = left;
    int j = right;
    while(i != j) {
        while(a[j] >= temp && i <j)
            j--;
        while(a[i] <= temp && i < j)
            i++;
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    t = a[i];
    a[i] = a[temp];
    a[temp] = a[i];
    quicksort(1,i-1);
    quicksort(i,n);
    return;
    }
int main() {
int i;
while(cin>>n) {
    for(i = 0;i < n;i++) {
        cin>>a[i];
    }
    quicksort(1,n);
    for(i = 0;i < n;i++) {
       cout<<a[i];
    }
    cout<<endl;
}

return 0;
}
