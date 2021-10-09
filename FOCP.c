#include<stdio.h>
 int main(){
    //  int x,y,i=1;
    //  int power=1;
    //  printf("Enter the two numbers\n");
    //  scanf("%d %d",&x,&y);
    //  while(i<=y)
    //  {
    //      power *= x;
    //      i++;
    //  }
    //  printf("%d to the power %d is %d\n",x,y,power);
    // int i,j;
    // for(i=1;i<=3;i++)
    // {
    //     for(j=1;j<=6;j++)
    //     {
    //         if(j==4 || j==5)
    //             continue;
    //             else
    //             printf("%d %d\n",i,j);
            
    //     }
    // }
    int num,x,y,sum=0,i=0;
    printf("Enter an integer number:\n");
    scanf("%d",&num);
    x=num;
    do
    {
        y=num%10;
        sum=sum+y;
        i=i*10+y;
        num=num/10;

    } 
    while (num!=0);
    printf("The sum of digits of the number is: %d\n",sum);
    printf("The reverse of the number is :%d\n",i);
    if(x==i)
        printf("The number is a palindrome\n");
        else 
            printf("The number is not a palindrome\n");

    
     return 0;
 }