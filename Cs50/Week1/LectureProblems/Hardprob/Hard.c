#include <stdio.h>

int main (void)
{
    
    int height, row, col, space,new ,gap;
    do{
        printf("Enter height of pyramid ");
        scanf("%d",&height);

    }while(height <=0 || height >8);

    for( row=0; row < height; row++){

          for(space=0; space<height-row-1;space++){
            printf(" ");
          }
          for(col=0; col <= row; col++){
                printf("#");
          }
          for(gap =0; gap< 2; gap++){
            printf(" ");
          }

          for(new=0; new <= row;new++){
               printf("#");
          }
          printf("\n");
    }
}



