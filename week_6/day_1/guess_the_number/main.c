#include <stdio.h>

int main()
{
    int number_to_guess = 0;
    int user_inpt = 0;
    int user_inpt_cntr = 0;
    printf("type in a number.");
    scanf("%d", &number_to_guess);
    printf("Guess the number \n");
    while(number_to_guess != user_inpt){

        scanf("%d", &user_inpt);
        if(user_inpt == number_to_guess){
            printf("You guessed the number: %d", number_to_guess);
        } else if(user_inpt < number_to_guess){
            printf("The stored number is higher than %d", user_inpt);
            user_inpt_cntr++;
        } else {
            printf("The stored number is lower than %d", user_inpt);
            user_inpt_cntr++;
        }
    }
    return 0;
}