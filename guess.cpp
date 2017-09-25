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
   /*
   generate secret number: between 1 and 10. Change the 10 to a different value to generate random numbers up to that maximum value
   */
   randomNumber= rand() % 10 + 1;
   int guessedNumber; // this variable will hold the player's guessed number
   int answer; // this variable will hold the answer to the question if the player want to play again


   do {
   cout << "Guess the computer's number between 1-10." << endl;      
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
