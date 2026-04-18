#include <stdio.h>
int main(){
    float a;
    printf("enter amt");
    scanf("%f",&a);
    if (a>250000 && a<500000){
        printf("income tax = %f",(5.0/100)*a);
    }
    else if (a>500000 && a<1000000){
        printf("income tax = %f",(20.0/100)*a);
    }
    else if (a>1000000 ){
        printf("income tax = %f",(30.0/100)*a);
    }
    else {
        printf("no income tax" );
    }
    return 0;


}