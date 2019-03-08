#include <random>
#include <iostream>
#include <chrono>
#include <vector>

int main(int argc, char** argv){
  std::mt19937 gen;
  gen.seed(std::chrono::high_resolution_clock::now().time_since_epoch().count());
  std::vector<int> my_vector (10,0);
  std::uniform_int_distribution<int> dis(0,my_vector.size()-1);
  for (int i = 0; i < 10000; ++i){
      my_vector[dis(gen)]++;
  }

  for( int e : my_vector){
    std::cout << e << std::endl;
  }

    return 0;
}
