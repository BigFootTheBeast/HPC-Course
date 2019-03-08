#include <iostream>

void print_hello_world(){
  std::cout << "Hello World" << std::endl;
  } 

double multiply(double a, double b){
  return a*b;
}

int main(){
    double a=0, b=0;
    std::cout << "Write your numbers" << std::endl;
    std::cin >> a >> b;

    print_hello_world();
    std::cout << multiply(a,b) << std::endl;
}
	
