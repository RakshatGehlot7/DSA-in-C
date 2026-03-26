#include<stdio.h>
int main() {
    int a[100], n, i, min;

    printf("enter number of element :\n");
    scanf("%d", &n);

    printf("enter element :\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    
    min = a[0];

    for(i=1;i<n;i++){
        if(a[i] < min)
        min = a[i];
    }

    printf("Minimum element = %d", min);
    return 0;
}