
#include <iostream>

int main(int argc, char* argv[]){

  for(unsigned int i = 1; i < argc; i++){
    std::cout << argv[i] << std::endl;
  }
}