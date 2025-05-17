#include <stdio.h>

int main (void){
     int height, row, column, space,normal,gap;
    do{
       printf("enter your num for starts ");
       if( scanf("%d",&height) != 1){
        printf("input a number please");
        while (getchar() != '\n');
       }else if (height<= 0) {
        printf("Please enter a positive number.\n");
      } else {
        break;  // Valid number received
      }
    
       
    }while(height <=0);
     
    for( row =0 ;row < height; row++){
        for(space =0;space< height - row-1;space++){
            printf(" ");
        }
        for(column =0; column <= row; column++){
            printf("#");
        }
        for(gap=0; gap <2;gap++){
            printf(" ");
        }
        
        for( normal=0; normal<= row; normal++){
            printf("#");
        }
        printf("\n");
    }

    return 0;
}