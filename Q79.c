#include <stdio.h>

int main() {
    int a[10][10], n, i, j;

    scanf("%d", &n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<2*n-1;i++) {
        if(i%2==0) {
            for(j=0;j<=i;j++)
                if(j<n && i-j<n)
                    printf("%d ",a[j][i-j]);
        } else {
            for(j=0;j<=i;j++)
                if(j<n && i-j<n)
                    printf("%d ",a[i-j][j]);
        }
    }

    return 0;
}