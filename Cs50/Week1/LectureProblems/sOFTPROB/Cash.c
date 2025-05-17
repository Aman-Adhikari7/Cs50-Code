#include <stdio.h>
#include <math.h>


int main()
{
    float dollor;

      do{
        printf("enter your amount ");
        scanf("%f",&dollor);

      }while( dollor <=0);



      int cents= round(dollor*100);
      int count;

      while(cents >= 25){
        cents -=25;
        count++;
      }
      while(cents >=10){
        cents -=10;
        count++;
      }
      while(cents >=5){
        cents -=5;
        count++;
      }
      while(cents >=1){
        cents -=1;
        count++;
      }

      printf("total number of coins u need is %i",count);
}

