#include<stdio.h>
int main(){
    int j,prod=1;
    printf("write the number");
    scanf("%d",&j);
    for(int i=1;i<=j;i++){
        prod=prod*i;
    }
    printf("%d",prod);
    return 0;
}