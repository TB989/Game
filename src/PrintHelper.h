#ifndef PRINTHELPER_H_INCLUDED
#define PRINTHELPER_H_INCLUDED

#include <string>

void startHeader(std::string locationName);
void finishHeader(std::string locationName);

void printChoices(std::string option1);
void printChoices(std::string option1,std::string option2);
void printChoices(std::string option1,std::string option2,std::string option3);
void printChoices(std::string option1,std::string option2,std::string option3,std::string option4);

int getChoice(int maxChoices);

#endif // PRINTHELPER_H_INCLUDED
