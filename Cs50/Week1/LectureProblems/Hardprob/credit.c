#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool checksum( const char num[]){
      int sum=0;
      bool shoulddouble=false;

      for(int i= strlen(num)-1;i>=0;i--){
        int digit= num[i]-'0';

        if(shoulddouble){
          digit*=2;
          if(digit > 9){
            digit -=9;
          }
        }
        sum+= digit;
        shoulddouble = !shoulddouble;
      }

      return sum % 10 ==0;
}


int main(){
    char number[20];
    printf("enter your number\n");
    scanf("%19s",number);

    checksum(number);
   if (checksum(number)) {
        printf("Valid number!\n");
    } else {
        printf("Invalid number!\n");
    }

    return 0;

}
