#include<iostream>


void printMenu() {
 std::cout<<"1: Print Help" <<std::endl;
    std::cout<<"2: Print Exchange Stats" <<std::endl;
    std::cout<<"3: Make an offer" <<std::endl;
    std::cout<<"4: Make a bid" <<std::endl;
    std::cout<<"5: Print Wallet" <<std::endl;
    std::cout<<"6: Continue" <<std::endl;

    std::cout<< "================"<<std::endl;



}

int getUserOption() {
    int userOption;
    std::cout<< "Type in 1-6"<< std::endl;
    std::cin>>userOption;
    std::cout<< "You chose: "<<userOption<<std::endl;
    return userOption;
}


void processUserOption(int userOption) {

    if(userOption > 6 || userOption < 1){
        std::cout<<"Invalid Option"<<std::endl;
        return 1;
    }


    if(userOption == 1) {
        std::cout<<"Help - Your aim is to make money. Analyse the market"<<std::endl;
    }

        if(userOption == 2) {
        std::cout<<"Market Looks Good"<<std::endl;
    }

        if(userOption == 3) {
        std::cout<<"Mark and offer - Enter the amount"<<std::endl;
    }

        if(userOption == 4) {
        std::cout<<"Make a bid - enter the amount"<<std::endl;
    }

        if(userOption == 5) {
        std::cout<<"Your wallet is empty"<<std::endl;
    }

        if(userOption == 6) {
        std::cout<<"Going to next time frame"<<std::endl;
    }
}

int main() {
   
    while(true) {
        printMenu();
        int userOption = getUserOption();
        processUserOption(userOption);
    }
    return 0;
}