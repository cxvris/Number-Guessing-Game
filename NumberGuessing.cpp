#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;

    int guess;
    int attempts = 0;

    std::cout << "Welcome to Guess the Number Game!\n";
    std::cout << "I have selected a number between 1 and 100. Try to guess it.\n";

    do {
        // Get player's guess
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        // Check if the guess is correct, too high, or too low
        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Too low! Try again.\n";
        }

        // Increment the number of attempts
        attempts++;

    } while (guess != secretNumber);

    return 0;
}
