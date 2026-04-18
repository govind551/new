#include<stdio.h>
float average(int a,int b,int c){
    return (a+b+c)/3;
}
int main(){
    int a=1,b=2,c=3;
    printf("avg is :%f",average(a,b,c));

}