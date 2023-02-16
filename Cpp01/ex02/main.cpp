#include <iostream>
#include <string>
int main() {
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;
  std::string &stringREF = str;
  
  std::cout << "String variable address: " << &str << std::endl;
  std::cout << "Address pointed by stringPTR: " << stringPTR << std::endl;
  std::cout << "Address referred by stringREF: " << &stringREF << std::endl;
  std::cout << "String value: " << str << std::endl;
  std::cout << "Value pointed by stringPTR: " << *stringPTR << std::endl;
  std::cout << "Value referred by stringREF: " << stringREF << std::endl;
  return 0;
}