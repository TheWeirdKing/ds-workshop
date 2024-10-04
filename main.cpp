
#include <iostream>

int main(int argc, char* argv[]){

  for(int i = 1; i < argc; i++){ 
    std::cout << std::atoi(argv[i]) * 2 << std::endl;
  }
}