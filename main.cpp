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


void printHelp() {
    std::cout<<"Help - Your aim is to make money. Analyse the market"<<std::endl;
}

void printMarketStats() {
 std::cout<<"Market Looks Good"<<std::endl;
}

void enterOffer() {
  std::cout<<"Mark and offer - Enter the amount"<<std::endl;
}


void enterBid() {
  std::cout<<"Make a bid - enter the amount"<<std::endl;
}

void printWallet() {
     std::cout<<"Your wallet is empty"<<std::endl;
}

void nextFrame() {
       std::cout<<"Going to next time frame"<<std::endl;
}

void processUserOption(int userOption) {

    if(userOption > 6 || userOption < 1){
        std::cout<<"Invalid Option"<<std::endl;
        return 1;
    }


    if(userOption == 1) {
        printHelp();
    }

        if(userOption == 2) {
       printMarketStats();
    }

        if(userOption == 3) {
      enterOffer();
    }

        if(userOption == 4) {
      enterBid();
    }

        if(userOption == 5) {
       printWallet();
    }

        if(userOption == 6) {
     nextFrame();
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