#include <iostream>
#include <fstream>
#include <string>
#include "TextsHelper.h"

std::string getNextToken(std::ifstream &file,char delim){
    std::string token;
    while(true){
        char ch;
        file.get(ch);
        if(ch==delim){
            break;
        }
        else{
            token+=ch;
        }
    }
    return token;
}

void readTexts(){
    std::ifstream texts;
    texts.open("Texts.txt",std::ios::in);

    Text text;

    std::string temp;
    temp=getNextToken(texts,'#');
    std::cout << temp << "\n";

    temp=getNextToken(texts,'#');
    std::cout << temp << "\n";
}
