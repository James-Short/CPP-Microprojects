#include <iostream>
#include <vector>

using namespace std;

int main() {
    srand(time(NULL));

    int num = (rand() % 100) + 1;
    int guess;

    cout << "Please guess a number 1 through 100: \n";
    cin >> guess;

    while(guess != num){
        if(guess > num){
            cout << "Your guess is higher than my number! \n";
        }
        else if(guess < num){
            cout << "Your guess is lower than my number! \n";
        }

        cout << "Try again: ";
        
        cin >> guess;
    }

    cout << "Correct, my number is " << num << "!";
    

    

    return 0;
}
