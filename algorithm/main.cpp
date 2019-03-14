#include <algorithm>
#include <vector>
#include <random>
#include <iostream>

int main(int argc, char** argv){
  std::vector<int> v(1000);

  std::mt19937 gen;
  std::uniform_int_distribution<> dis(0, 10);
  auto rand = [&](){
    return dis(gen);
  };

  // put a random number in each element of the container
  std::generate( std::begin(v), std::end(v), rand );

  std::cout << "random vector:" << std::endl;  
  for( int& e : v ){
    std::cout << e << std::endl;
  }

  // sort the vector  
  int equal2 = std::count_if( begin(v), end(v), [](int i){return i ==2;} ) ;
  std::cout << "numbers equal 2 :" << equal2 <<std::endl;  

  int less5 = std::count_if( begin(v), end(v), [](int i){return i <5;} ) ;

  std::cout << "numbers less 5: " << less5 <<std::endl;  

  return 0;
}
