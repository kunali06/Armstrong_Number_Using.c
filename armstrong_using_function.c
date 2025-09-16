armstrong(int x){
int b,c,d,e,result;

b=x%10;
c=x/10;
d=c%10;
e=c/10;

result=(b*b*b)+(d*d*d)+(e*e*e);
if(result==x)
{
    printf("%d is armstrong number.\n",x);
}
else
{
    printf("%d is not armstrong number",x);
}
}

void main(){
int a;
printf("enter number:\n");
scanf("%d",&a);

armstrong(a);
getch();
}
