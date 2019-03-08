#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

void analysis(){
  std::cout << "implement the super complicated analysis code here" << std::endl;
}

int main(int argc, char** argv){
/*  std::ifstream in("run_analysis.txt");
  while (1){
      double number1 = 0, number2 = 0;
      if( !(in>>number1) ) break;
      if( !(in>>number2) ) break;
      double result = number1 * number2;
      std::cout << "Result = " << result << std::endl;
  }
*/
  std::ifstream in2("run_analysis.txt");
  std::vector<std::vector<double>> in_cont;
  while (true){
    std::string line;
    if( !(std::getline(in2,line)) ) break;
    std::stringstream ss(line) ;
    double number1 = 0, number2 = 0;
    if( !(ss>>number1)) break;
    if( !(ss>>number2)) break;
    std::vector<double> numbers;
    numbers.push_back(number1);
    numbers.push_back(number2); 

    in_cont.push_back(numbers);

  }

  std::vector<double> out_cont;
  for( int i = 0; i < in_cont.size(); i ++){
    double result = in_cont[i][0] * in_cont[i][1];
    out_cont.push_back(result);
  }

  std::ofstream out("results.txt");
  for( double& e : out_cont){
    out << e << std::endl;
  }
    return 0;
}
