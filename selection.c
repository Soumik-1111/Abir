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
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("The sorted arrays are :\n");
    for(int i=0;i<n;i++){
     printf("%d",a[i]);
    }
    return 0;
}