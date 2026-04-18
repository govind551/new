#include<stdio.h>
float force(float mass){
    return mass*9.8;
}
int main(){
    float mass;
    printf("enter mass");
    scanf("%f",&mass);
    printf("coversion%f\n",force(mass));
    return 0;
}