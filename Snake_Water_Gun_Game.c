#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakewatergun(char computer, char me){
     // return 1 if you win -1 if you loss 0 when it is draw 
     
    if(me==computer){
        return 0;
    }
    if(me=='s' && computer=='w'){
        return 1;
        
    }
    else if (me=='w' && computer=='s'){
        return -1;
    }

    if(me=='s' && computer=='g'){
        return -1;
        
    }
    else if(me=='g' && computer=='s'){
        return 1;
    }

    if(me=='s' && computer=='w'){
        return 1;
        
    }
    else if (me=='w' && computer=='s'){
        return -1;
    }
    if(me=='g' && computer=='w'){
        return -1;
        
    }
    else if (me=='w' && computer=='g'){
        return 1;
    }
}
int main(){
    char  computer,me;
    int number;
    srand(time(0));
    number=rand()%100+1; 
    if(number<33){
        computer='s';
    }
    else if(number>33 && number <66){
        computer='w';
        
        
    }
    else{
        computer='g';
    }
    printf("Enter s for  snake,w for water and g for gun \n");
    scanf("%c\n",&me);
    int result= snakewatergun(computer,me); // it is function 
   if(result==0){
       printf("Game is drawn\n");
       
   }
   else if(result==1){
       printf("You won the game\n");
   }
   else{
       printf("You loose the game\n");
   }
   return 0;
}
