#include <stdio.h>

int main(void) {
  int number1,number2,copy1,copy2,number3=0,number4=0,digit=1;
  printf("enter the number1: ");
  scanf("%d",&number1);
  printf("enter the number2:");
  scanf("%d",&number2);
  copy1 = number1;
  copy2 = number2;
  while(copy1>0&&copy2>0)
    {
      if(copy1%10 != copy2%10)
      {
        if(copy1%10<copy2%10)
        {
          number3 += copy1%10*digit;
          number4 += copy2%10*digit;
            
        }
        else
        {
          number3 += copy2%10*digit;
          number4 += copy1%10*digit;
        }
        digit*= 10;
      }
      copy1/=10;
      copy2/=10;
    }
  printf("your number3 is : %d",number3);
  printf("your number4 is : %d",number4);





  
  return 0;
}