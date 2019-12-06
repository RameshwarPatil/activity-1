#include<stdio.h>
  
int main()
 {
 
int n=10;   
unsigned long long factorial=1;
    
printf("enter ab integer:");
scanf("%d",&n);
    
if(n<0)
            
printf("error! factorial of a negative number dorsn't exist.");

   
 else
    
{
       

 for(int i=1;i<n;++i)
       
 {
            factorial*=i;
            printf("factorial is %d\n",factorial);

        }

}

        return 0;

}
