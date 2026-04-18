int main(){
    float income,tax;
    printf("enter your income");
    scanf("%f",&income);
    if (income<250000){
      printf("no tax need to be paid");
    }
    else if(income>=250000 && income<500000){
    tax=0.05*income;
    
    printf("tax paid:%f",tax);}
    else if(income>=500000 && income<1000000){
    tax=0.05*500000+0.2*(income-500000);
    printf("tax paid:%f",tax);}
    else if(income>1000000 ){
    tax=0.05*500000+0.2*1000000+0.3*(income-1000000);
    printf("tax paid:%f",tax);
}
    return 0;


    
}