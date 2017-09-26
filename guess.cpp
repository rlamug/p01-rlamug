// Rodolfo Lamug
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main () {
   /*
    initialize random seed. Do this only once at the beginning of the main-funtion
   */
   srand (time(NULL));
   int randomNumber; // this variable will hold the random number
   int guessedNumber; // this variable will hold the player's guessed number
   int answer; // this variable will hold the answer to the question if the player want to play again
   char level; // this variable holds the difficulty level

   do {
   cout << "Choose a difficulty. E for Easy, M for Medium, or H for Hard." << endl;
   cin >> level;

   switch (level) { //player chooses difficulty level
   
      case 'E' :
         randomNumber= rand() % 2 + 1;
         cout << "Guess the computer's number between 1-2." << endl;
         break;
      case 'M' :
         randomNumber= rand() % 10 + 1;
         cout << "Guess the computer's number between 1-10." << endl;
         break;
      case 'H' :
         randomNumber= rand() % 100 + 1;
         cout << "Guess the computer's number between 1-100." << endl;
         break;
      default :
         cout << "Invalid difficulty. Error." << endl;
   }

   cin >> guessedNumber; //Player puts in guessed number

   if ( randomNumber == guessedNumber ) {
      cout << "You guessed correctly! You win!" << endl;
   } else {
      cout << "You were off by " << abs(randomNumber - guessedNumber) << ". Sorry, you lose." << endl;
   }
   cout << "Would you like to play again? Type in 1 to play again or type in any other number to quit." << endl;
   cin >> answer;

   } while (answer == 1 );
   
   cout << "Thanks for playing. Goodbye." << endl;

   return 0;
}
