#include<stdio.h>
int main() {
int a[100], n, i, sum=0;
float avg;

printf("enter no. of elements");
scanf("%d", &n);

printf("enter elements: \n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
sum = sum + a[i];

avg = sum/n;

printf("sum = %d\n", sum);
printf("average = %.2f", avg);

return 0;

}