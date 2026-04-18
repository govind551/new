int main()
{
    int a,b,c,d;
    printf("enter the 4 number:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (a>b && a>c && a>d){
        printf("a is greatest of all");
    }
    if (a<b && b>c && b>d){
        printf("b is greatest of all");
    }

    if (c>b && a<c && c>d){
        printf("c is greatest of all");
    }
    if (d>b && d>c && a<d){
        printf("%d is greatest of all",d);
    }
    return 0;




}