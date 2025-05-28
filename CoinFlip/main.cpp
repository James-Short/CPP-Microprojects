#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

    std::srand(time(NULL));

    int countGoal = 500000;
    int tails = 0;
    int heads = 0;
    int i;

    for(i = 0; i < countGoal; i++){
        int random_number = (std::rand() % 2) + 1;
        (random_number == 1) ? heads++ : tails++;
    }

    double percentageTails = (double)tails / countGoal * 100;
    double percentageHeads = (double)heads / countGoal * 100;

    std::cout << heads << "\n" << tails << "\n";
    std::cout << percentageHeads << "%" << "\n" << percentageTails << "%" << "\n";

    return 0;
}
