#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100+1;//generates a random number between 1 and 100
    //printf("The number is %d\n", number);
    //keep running the loop until the number is gussed
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("lower number please!\n");
        }
        else if(guess<number){//else if are written separate
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;

    }while(guess!=number);
    
    return 0;
}