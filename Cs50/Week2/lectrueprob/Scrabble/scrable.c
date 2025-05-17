
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char str[]);
int main(void){
    char name[100];
    char name2[100];
    printf("player 1 Name? \n");
    scanf("%s",name);
    printf("player 2 Name? \n");
    scanf("%s",name2);

    int player_one = compute_score(name);
    int player_two = compute_score(name2);

    if(player_one > player_two){
        printf("player one wins");
    }else if(player_two > player_one){
        printf("player two wins");
    }else{
        printf("its a tie");
    }
    
}

int compute_score(char str[]){
     int score=0;
    for(int i=0; i < strlen(str); i++){
        if(str[i] >='A' && str[i] <='Z'){

            score+= POINTS[str[i] - 'A'];
        }else if(str[i] >='a' && str[i] <='z'){
            
            score+= POINTS[str[i] - 'a'];
        }
    }
     return score;

}