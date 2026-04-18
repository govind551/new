#include<stdio.h>
float temp(float cel){
    return (cel*1.8)+32;
}
int main(){
    float cel;
    printf("enter temp");
    scanf("%f",&cel);
    printf("coversion%f",temp(cel));
    return 0;
}