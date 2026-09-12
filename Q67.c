#include<stdio.h>
int main(){
 int n,p,x;
 scanf("%d",&n); int a[n+1];
 for(int i=0;i<n;i++) scanf("%d",&a[i]);
 scanf("%d%d",&p,&x);
 for(int i=n;i>p;i--) a[i]=a[i-1];
 a[p]=x;
 for(int i=0;i<=n;i++) printf("%d ",a[i]);
}