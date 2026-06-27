#include<stdio.h>
int main()
{
    int binary_checker=0,sum=0,counter=0,b=0;
    long long num,a;

    printf("Enter a binary number : ");
    scanf("%lld",&num);

    for(a=num;a>0;a=a/10)
    {
        if (a%10 !=1 && a%10 !=0)
            binary_checker=1;
           // if (binary_checker==1)
           //     break;
    }

    if (binary_checker==1)
        printf("The number is not binary. Enter valid number. \n");
    else
    {
        printf("The number is binary.calculating the equivalent decimal number........\n");

        for(int a=num;a>0;a=a/10)
        {
            if(a%10==1)
            {
                sum=sum+(1 << counter);
            }
            counter++;
            

        }
        printf("The binary number is : %d",sum);
    }


    return 0;
}