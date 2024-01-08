#include <iostream>
#include "teste.h"

int main(){
   
    std::cout << "a" << std::endl;
    std::cout << "test" << std::endl;

    Test novo;
    novo.sum(1,2);
     
    std::cout << "novo: " << novo.c << std::endl;


    std::cout << "test" << std::endl;
}


