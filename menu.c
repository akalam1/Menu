


#include <stdio.h>


int main(){

    // declaring the fooodiesss and prices so i can add them later...
    int chicken = 4, pizza = 2, burger = 5, soup = 1, eggs = 1, 
    gyro = 6, hotDogs = 4, salad = 2;

    // lets declare totoal amount that the user has to pay
    int total_Amount=0;
//From the bottom menu, you may choose 4 of the item
    printf( "You may Choose any four items from down below \n");

// giving user the list of option they can choose from
    printf(" 1 - Chicken $4\n");
    printf(" 2 - Pizza $2\n");
    printf(" 3 - Burger $5 \n");
    printf(" 4 - Soup $1\n");
    printf(" 5 - Eggs $1\n");
    printf(" 6 - Gyro $6 \n");
    printf(" 7 - Hot Dog $4 \n");
    printf(" 8 - Salad $2\n");

    // asking user to chose from the menu
    int user_Input;

    

   
// Giving user the promt to choose  
   

    int max_Number = 4;

    // using for loop to set the max 

    for (int i=0; i< max_Number; i++ ){



        printf("What would you like to eat?\n");

        scanf("%d", &user_Input);


    switch (user_Input){

        case 1: {
            printf("You chose Chicken \n", chicken );
        // lets declare a variable, so that we can store the price 
        
       total_Amount = total_Amount + chicken;

            break;
        }
        case 2: {
             printf("You chose  Pizza \n", pizza );
               total_Amount = total_Amount + pizza;

            break;
        }
        case 3: {
             printf("You chose Burger \n", burger);
               total_Amount = total_Amount + burger;

            break;
        }
        case 4: {
             printf("You chose Soup \n", soup);
               total_Amount = total_Amount + soup;

            break;
        }
        case 5: {
             printf("You chose Eggs  \n", eggs);
               total_Amount = total_Amount + eggs;

            break;
        }
        case 6: {
             printf("You chose Gyro\n", gyro);
               total_Amount = total_Amount + gyro;

            break;
        }
        case 7: {
             printf("You chose Hot Dog \n", hotDogs);

               total_Amount = total_Amount + hotDogs;

            break;
        }
        case 8: {
             printf("You chose Salad \n", salad);
               total_Amount = total_Amount + salad;

            break;
        }

    }
    }

    // Listing total amount, you chose so far

         printf("So the total amount due would be: %d$\n",total_Amount );

    
    

   

}

