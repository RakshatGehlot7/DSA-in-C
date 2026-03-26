#include<stdio.h>
int main() {
    int a[100], n, i, max;

    printf("enter number of element :\n");
    scanf("%d", &n);

    printf("enter element :\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    
    max = a[0];

    for(i=1;i<n;i++){
        if(a[i] > max)
        max = a[i];
    }

    printf("Maxi    mum element = %d", max);
    return 0;
}