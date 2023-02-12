#include <iostream>
 
int main(){
  const int y = 2;
  std::string x;
  std::cout << "What is your name?\n";
  std::cin >> x;
  std::cout << "Hello, " << x <<  " nice to meet you!\n";
  
  std::string name = "John";
  std::string* ptr = nullptr;

  ptr = &name;
  return 0;
}
