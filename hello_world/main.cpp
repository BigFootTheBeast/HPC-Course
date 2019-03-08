#include <iostream>

void print_hello_world(){
  std::cout << "Hello World" << std::endl;
  } 

double multiply(double a, double b){
  return a*b;
}

int main(){
/*   
    double a=0, b=0;
    std::cout << "Write your numbers" << std::endl;
    std::cin >> a >> b;
    std::cout << multiply(a,b) << std::endl;
*/
    std::cout << "hello world or meow? h|m" << std::endl;
    char answer;
    std::cin >> answer;
    if ( answer == 'h'){
      print_hello_world();
    }else if ( answer == 'm'){
      std::cout << "meow" << std::endl;
    }else{
      std::cout << "h and m are valid options" << std::endl;
    }
    return 0;
}
	
