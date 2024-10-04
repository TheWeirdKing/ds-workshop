
#include <iostream>

int main(int argc, char* argv[]){

  for(unsigned int i = 1; i < argc; i++){
    for(int j = 0; j < 2; j++) { 
      std::cout << argv[i] << std::endl;
    }
  }
}