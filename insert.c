#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int (a[n]);
    printf("Enter the arrays: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++){
        int j=i-1;
        int temp=a[i];
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("The sorted arrays are :\n");
    for(int i=0;i<n;i++){
     printf("%d ",a[i]);
    }
    return 0;
}