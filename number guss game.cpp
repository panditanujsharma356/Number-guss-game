
#include <iostream>
#include <cstdlib>
#include <ctime>

void numberGuessingGame() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I have selected a number between 1 and 100. Can you guess it?\n";

    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess > number) {
            std::cout << "Too high!\n";
        } else if (guess < number) {
            std::cout << "Too low!\n";
        } else {
            std::cout << "Congratulations! You've guessed the correct number.\n";
            break;
        }
    }
}

int main() {
    numberGuessingGame();
    return 0;
}
