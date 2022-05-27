#include<stdio.h>

// LCM
/*
int main(){
    int a,b,L;
    printf("Enter a & b :");
    scanf("%d %d", &a,&b);
    for (L=a>b?a:b; L<=a*b; L++)
    {
        if(L%a==0 && L%b==0){
            break;
        }
    }
    printf("LCM is %d", L);
    return 0;
    
}
*/
// HCF

int main(){
    int a,b,H;
    printf("Enter a & b : ");
    scanf("%d %d", &a, &b);
    for(H=a<b?a:b;H>=1;H--){
        if(a%H==0 && b%H == 0)
        break;
    }
    printf("The HCF is = %d", H );
    return 0;
}