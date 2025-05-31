#include <iostream>
#include <vector>
#include <conio.h>

int main(){
    std::vector<std::string> tasks = {"Buy milk", "Do homework", "Walk dog"};
    int choice;
    std::string taskName;
    int taskNum;
    char enter;

    while(true){
        std::cout << "---Task Manager--- \n";
        std::cout << "Select an option \n";
        std::cout << "1. View my tasks \n";
        std::cout << "2. Add a task \n";
        std::cout << "3. Delete a task \n";
        std::cout << "4. Quit \n";
        std::cout << "------------------- \n";
        std::cin >> choice;

        switch(choice){
            case 1:
                std::cout << "---Tasks--- \n"; 
                for(int i = 0; i < tasks.size(); i++) {     
                    std::cout << i + 1 << ". ";
                    std::cout << tasks[i] << "\n";
                    
                }
                std::cout << "---------- \n";
                break;
            case 2:
                std::cout << "What would you like to name your task: \n";
                std::cin.ignore();
                std::getline(std::cin, taskName);
                tasks.push_back(taskName);
                std::cout << "Added task" << "\n" << "-----------" << "\n";
                for(int i = 0; i < tasks.size(); i++){
                    std::cout << i + 1 << ". ";
                    std::cout << tasks[i] << "\n";
                }
                break;
            case 3:
                std::cout << "What number task would you like to delete? \n";
                std::cin >> taskNum;

                taskNum -= 1;
                
                if(taskNum < 0 || taskNum > tasks.size()){
                    std::cout << "Task number does not exist. \n";
                }
                else{
                    tasks.erase(tasks.begin() + taskNum);
                    std::cout << "Deleted task number " << taskNum + 1 << "\n";
                }
                break;
                
        }
         std::cout << "Press Enter to continue \n";
         std::cin.ignore();
         std::cin.get();
    }

    


    return 0;
}
