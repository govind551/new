#include <stdio.h>
int main(){
    int a ;
    printf("enter sub 1 marks " );
    scanf("%d",&a);
    int b ;
    printf("enter sub 2 marks " );
    scanf("%d",&b);
    int c ;
    printf("enter sub 3 marks " );
    scanf("%d",&c);
    int d=(a+b+c)/3;
    if(a>33){
        if (b>33){
            if (c>33){
                if (d>40){
                    printf("pass");
            }
            else{
        printf("fail ");
    }
        }

    }}
       
    else{
        printf("fail ");
    }
    return 0;


}