int main(){
    int a,b,c;
    printf("enter the marks of 3 subject");
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b+c)/3>=40 && a>=33 && b>=33 && c>=33){
    printf("pass");
    }
    else{
    printf("fail");
    }
    return 0;
}
