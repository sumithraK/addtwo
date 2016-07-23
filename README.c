#include<stdio.h>
int main(){
    int n,m;
scanf("%d",&m);
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==m)
            printf("%d+%d=%d",a[i],a[j],m);
        }
    }
    return 0;
}
