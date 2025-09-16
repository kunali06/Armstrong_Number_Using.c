# Armstrong_Number_Using.c
void main(){
int a,b,c,d,e,result;

printf("enter number to check armstrong number\n");
scanf("%d",&a);

b=a%10;
c=a/10;
d=c%10;
e=c/10;

result=(b*b*b)+(d*d*d)+(e*e*e);

if(result==a)
{
    printf("%d is an armstrong number\n",a);
}
else
{
    printf("%d is not an armstrong number\n",a);
}
getch();
}
