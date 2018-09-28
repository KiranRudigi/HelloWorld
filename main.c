#include <stdio.h>
 int sum(int a,int b)
{
    int add;
    add=a+b;
    return(add);
}
int main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("The Addition is : %d",c);


    return 0;
}
