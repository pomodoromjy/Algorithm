#include<stdio.h>
int main() {
    int i,j,n,t,book[101];
    for(i = 0;i < 101;i++) {
        book[i] = 0;
    }
    while(~scanf("%d",&n)) {
        for(i = 0;i < n;i++) {
            scanf("%d",&t);
            book[t]++;
        }
        for(i = 100;i >= 0;i--) {
            for(j = 1;j <= book[i];j++) {
                printf("%d ",i);
            }
        }
        printf("\n");
        system("pause");
    }
return 0;
}
