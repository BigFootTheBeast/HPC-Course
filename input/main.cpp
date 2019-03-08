#include <iostream>
#include <fstream>

void analysis(){
  std::cout << "implement the super complicated analysis code here" << std::endl;
}

int main(int argc, char** argv){
  std::ifstream in("run_analysis.txt");
  bool end = in.eof();
  while (end == false){
      end = in.eof();
      std::cout << "end = " <<  end << std::endl;
      double number1 = 0, number2 = 0;
      in >> number1;
      in >> number2;
      double result = number1 * number2;
      std::cout << "Result = " << result << std::endl;
      end = in.eof();
  }

    return 0;
}
