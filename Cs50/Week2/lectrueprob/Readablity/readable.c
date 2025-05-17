#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>




int main(void){
    char text[10000];
    printf("Enter your text ? \n");
     fgets(text,sizeof(text),stdin);
     int L=0;
     int S=0;
     int W=1;
    for(int i=0; i< strlen(text);i++){
        if(isalpha(text[i]) ){
            L++;
        }if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            S++;
        }if (text[i] == ' ') {
            W++;
        }

    }

    float L_avg = (float) L / W * 100;
    float S_avg = (float) S / W * 100;


    
    float index = 0.0588 * L_avg - 0.296 * S_avg - 15.8;
    int grade =(int) round(index);
    if(grade<1){
        printf("before grade 1");

    }else if(grade >16){
        printf("Grade 16+");
    }else{
        printf("grade is %d\n", grade);
    }
}