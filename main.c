#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int n, r, number_of_guesses=0;

    // Initialize random seed
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    r= randomNumber;
    

   // Print the generated number
    while (n!=r)
    {
    printf("enter your number: ");
    scanf("%d",&n);

    if(n==r){
        printf("correct guessing\n");
    }
    else if(n>r){
        printf("your guess is greater!\n");
    }
    else if(n<r){
        printf("your guess is smaller\n");
    }
    else{
        printf("something went rong!\n");
    }

    number_of_guesses ++;

    }
    
    printf("you guess your number in %d chances!\n", number_of_guesses);

    return 0;
}
