#include <string>
#include <iostream>

void startHeader(std::string locationName){
    std::cout << "**********" << locationName << "**********\n";
}

void finishHeader(std::string locationName){
    std::cout << "**********";
    for(unsigned int i=0;i<locationName.length();i++){
        std::cout << "*";
    }
    std::cout<<  "**********\n";
}

void printChoices(std::string option1){
    std::cout << "What do you want to do?\n";
    std::cout << "1: " << option1 << "\n";
}

void printChoices(std::string option1,std::string option2){
    std::cout << "What do you want to do?\n";
    std::cout << "1: " << option1 << "\n";
    std::cout << "2: " << option2 << "\n";
}

void printChoices(std::string option1,std::string option2,std::string option3){
    std::cout << "What do you want to do?\n";
    std::cout << "1: " << option1 << "\n";
    std::cout << "2: " << option2 << "\n";
    std::cout << "3: " << option3 << "\n";
}

void printChoices(std::string option1,std::string option2,std::string option3,std::string option4){
    std::cout << "What do you want to do?\n";
    std::cout << "1: " << option1 << "\n";
    std::cout << "2: " << option2 << "\n";
    std::cout << "3: " << option3 << "\n";
    std::cout << "4: " << option4 << "\n";
}

int getChoice(int maxChoices){
    int choice;
    while(true){
        std::cout << "Your choice: ";
        std::cin >> choice;
        std::cin.ignore(32767, '\n');

        if(!std::cin.fail()){
            if(choice==0){
                exit(0);
            }
            else if(0<choice&&choice<=maxChoices){
                return choice;
            }
            else{
                std::cin.clear();
                std::cin.ignore(32767, '\n');
                std::cout << "Invalid choice, try again!\n";
            }
        }
        else{
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Invalid choice, try again!\n";
        }
    }
}
