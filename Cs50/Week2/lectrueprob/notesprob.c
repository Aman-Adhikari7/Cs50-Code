#include <stdio.h>

// // int main(){
// //     int n;
// //     printf("what the number you want ?");
// //     scanf("%d",&n);
// //     printf(" the num is %i", n);
// // }

// const int N=3;

// float average(int length, int array[]);
// int main(void)
// {
//     int score[3];
//      for(int i=0;i< 3;i++){
//         int j;
//         printf("score");
//         scanf("%d",&j);
//         score[i]= j;
//      }

//     printf("Average : %f\n", average(N,score));
// }

// float average(int length, int array[]){
//     int sum=0;
//     for(int i=0;i< length;i++){
//         sum+= array[i];
//     }
//     return sum/(float)length;
// }





//Strings 

// int main(void)
// {
//    char *word[2];
     
//    word[0]="HI";
//    word[1]="Bye";

//    printf("%s\n",word[0]);
//    printf("%s",word[1]);

   
// }


// int main(void){
//     char string[100];
//     printf("your name ? ");
//      scanf("%s",string);

//      int n=0;
//      while(string[n] != '\0'){
//         n++;
//      }
//      printf("%i\n", n);
    
// }

// int string_length(char[]);
// int main(void)
// {
//     char string[100];
//     printf(" Your name \n");
//     scanf("%s",string);
//     int length = string_length(string);
//     printf("%i",length);
// }

// int string_length(char str[]){
//       int n =0;
//       while(str[n] != '\0'){
//         n++;
//       }
//       return n;
//  }



// int main(void)
// {      
//     char str[100];
//     printf("What's your name? ");
//     scanf("%s",str);
//     printf("hello, %s\n", str);
// }


#include <string.h>

// int main(void)
// {
//     // Prompt for user's name
//       char name[100];
//        printf("Name: ");
//        scanf("%s",name);
//     int length = strlen(name);
//     printf("%i\n", length);
// }


int main()
{
    char s[100];
    printf("your name before \n");
    scanf("%s",s);
    printf("After ");
    for(int i=0 ;i< strlen(s);i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            printf("%c", s[i]- 32);
        }else {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}

