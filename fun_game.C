#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int secret_num, guess, attam;
    printf("\n========== Number Guessing Game =========\n");
    printf("Guess the number between 1 and 100.\n\n");
    int mx_attam = 7;
    int again = 1;
    while(again){
        secret_num = rand() % 100 + 1;
        attam = 0;
        while(attam < mx_attam){
            printf("Attempt %d/%d - Your guess: ", attam + 1, mx_attam);
            scanf("%d", &guess);
            attam++;
            if(guess > secret_num){
                printf("too high..! try lower\n");
            }
            else if(guess < secret_num){
                printf("too low..! try high\n");
            }
            else{
                printf("Correct! You guessed it in %d attempts\n", attam);
                break;
        }
        }
        if(guess != secret_num){
            printf("Out of attempts! The number was %d.\n", secret_num);
        }
        printf("Wanna play again? (1 = yes/ 0 = no): ");
        scanf("%d", &again);
    }
    printf("thank you for playing our game!!\n");
    return 0;
}
