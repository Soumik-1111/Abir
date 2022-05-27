#include<stdio.h>

int main(){
    int n,r=-1;
    printf("Enter the array size :");
    scanf("%d",&n);
    int a[n];
    printf("enter the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]==5){
            r=i;
            break;
        }
    }
    if(r!=-1){
        printf("The index is %d",r);
    }
    else
    printf("not found");
    return 0;
}