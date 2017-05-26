#include<stdio.h>
struct student {
char name[21];
int score;
};
int main() {
     struct student a[100],t;
     int i,j,n;
     while(~scanf("%d",&n)) {
        for(i = 0;i < n;i++) {
            scanf("%s %d",&a[i].name,&a[i].score);
        }
        for(i = 1;i <= n-1;i++) {
         for(j = 0;j < n-i;j++) {
            if(a[j].score < a[j+1].score) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
         }
        }
         for(i = 0;i < n;i++) {
            printf("%s ",a[i].name);
        }
        printf("%\n");
     }
return 0;
}
