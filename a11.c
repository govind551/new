#include<stdio.h>
int main(){
    int j,prod=1,i=1;
    printf("write the number");
    scanf("%d",&j);
    while(i<=j){
        prod=prod*i;
        i++;
    }
    printf("%d",prod);
    return 0;
}