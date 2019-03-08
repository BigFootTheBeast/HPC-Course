#include <iostream>

void print_hello_world(){
  std::cout << "Hello World" << std::endl;
  } 

int multiply(double a, double b){
  return a*b;
}

int main(){
    print_hello_world();
    std::cout << multiply(3,2) << std::endl;
}
	
