#include <stdio.h>

int checkIfHalloIsHallo(char[]);

int main(){
    if(checkIfHalloIsHallo("Hallo Welt!") == 1)printf("Hallo Welt!");
}

int checkIfHalloIsHallo(char cWord[]){
    if(cWord == "Hallo Welt!")return 1;
    if(cWord != "Hallo Welt!")return 0;
}
