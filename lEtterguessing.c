#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //  Generate a random number
    srand(time(0)); // Seed the random number generator with the current time
    int random_number = rand() % 100 + 1; // Generate a random number between 1 and 100

    int attempts = 0,max_attempts = 10;
    int is_correct = 0,choice;
    
    do{
        printf("MENU\n1.PLAY\n2.EXIT\n");
    scanf("%d",&choice);

    
        switch(choice){
         
         case 1:{while (attempts < max_attempts) {
        int guess;
        printf("Guess the number (between 1 and 100): ");
        scanf("%d", &guess);
        attempts++;

        if (guess < random_number) {
            printf("Too low!\n");
        } else if (guess > random_number) {
            printf("Too high!\n");
        } else {
            is_correct = 1;
            break;
        }
    }

   
    if (is_correct) {
        printf("Congratulations! You guessed the number %d in %d attempts.\n", random_number, attempts);
    } else {
        printf("Sorry, you've exceeded the maximum number of attempts. The correct number was %d.\n", random_number);
    }
        }break;
    case 2:printf("EXIT");break;
    default :printf("wrong input");
    }
    }while(choice!=2);
    return 0;
}
