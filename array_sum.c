#include<stdio.h>
#include<conio.h>

void main(){
    int n,sum=0;
    printf("Enter the array size :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array :");
    for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("the sum is %d", sum);
    getch();
}

