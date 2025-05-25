#include <stdio.h>
#include <string.h>

#define MAX 9

typedef struct{

    char name[100];
    int vote;

} candidate;

candidate candidates[MAX];

int candidate_count;

int vote(char *name );
void print_winner();

int main(int arg, char *argv[])
{
          if(arg <2){
            printf("invalid should be atleast 2\n");
            return 1;
          }
          candidate_count = arg-1;

          if(candidate_count > MAX){
            printf("too much peopel to vote only 9\n");
            return 2;
          }
          for(int i=0;i<candidate_count;i++){
           strcpy(candidates[i].name,argv[i+1]);
           candidates[i].vote =0;
          }
          int voters;
          printf("number of voter?");
          scanf("%d",&voters);

          for(int i=0;i<voters;i++){
             
                char name[100];
                printf("Vote: ");
                scanf("%s", name);

                   if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

            print_winner();
              return 0;
           
          

}


int vote(char *name )
{
    for(int i=0;i<candidate_count;i++)
   if(strcmp(candidates[i].name,name)==0){
    candidates[i].vote++;
    return 1;
   }

}

void print_winner()
{      
    int maxvote=0;
      for(int i=0;i<candidate_count;i++){
          if(candidates[i].vote > maxvote){
            maxvote= candidates[i].vote;
          }
      }

      for(int i=0; i<candidate_count;i++){
        if(candidates[i].vote == maxvote){
              printf("the winner is %s\n",candidates[i].name);
        }
      }

}



