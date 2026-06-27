#include<stdio.h>
//#include<math.h>

int main(){
    int num,ini=0,nin;
    printf ("Enter the number(4 digit) : ");
    scanf("%i",&num);
    printf("the number is %d \n",num);
    int a,b,paw;
    if(num>9999 ||num<0 )
        printf("enter number within supported range");
    else
    {
        printf("the binary number is :");
        if (num==0)
            printf("0");
            
        for(a=13 ;a>=0 ;a-- )
        {
            //int paw =(int)pow(2,a);(risky.....)
            int paw = 1 << a;

            if (num>paw){
                num=num-paw;
                printf("1");
                ini=1;
            }
            else if (num==paw){
                num=num-paw;
                printf("1");
                for(b=a-1;b>=0;b--)
                    printf("0");
                
                break;
            }
            else if(num<paw){
                if (ini == 1)
                    printf("0");
            }
        }
       
    }
    return 0;
}