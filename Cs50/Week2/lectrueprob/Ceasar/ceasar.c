#include <stdio.h>
#include <string.h>




int main(){
    int num;
    char cypher[100];
    char store[100];

    
    printf ("number to shift\n");
    scanf("%d",&num);

    
    
    
    if(num > 26){
        return 1;
    }else{
        
        printf ("cypher text\n");
        scanf("%99s",cypher);
        
        int len = strlen(cypher);

    for(int i=0; i<len;i++){
       store[i]= cypher[i]+num;
    }

    store[len]= '\0';

    printf("cypger text is %s\n",store);


    return 0;
}

}