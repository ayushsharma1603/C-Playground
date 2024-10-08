#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    printf("\n\n***************     Welcome to Number Guessing game     ***************\n\n");
    // generating a random number between 1 to 100 using rand() function
    srand(time(NULL));
    int Random_number = rand() % 100+1;
    int guess,count=0;
    do
    {
        /* Guessing Numbers */
        printf("\n\nPlease enter your number between (1 to 100) :      ");
        scanf("%d",&guess);
        count++;
        if(guess==Random_number) printf("\n\nCongratulations !!! You have guessed the number in %d attempts.\n\n",count);
        else if(guess<Random_number) printf("\n\nGuess a larger number.\n\n");
        else printf("\n\nGuess a smaller number.\n\n");
    } while (guess!=Random_number);
    printf("\nThanks for playing.\n");
    printf("\nDeveloped by Github :- @ayushsharma1603\n\n");
    return 0;
}