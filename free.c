#include<stdio.h>

int reverse(int num){
    int rev=0,rem;
    while (num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    return rev;
}

int main(){
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    int rev=reverse(num);
    printf("The reversed number is %d",rev);



    return 0;
}