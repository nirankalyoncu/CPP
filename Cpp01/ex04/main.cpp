#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main(int argc, char** argv) {
  std::ifstream input_file;
  std::ofstream output_file;
  std::string line;
  std::string s1;
  std::string s2;
  std::string before_occurrence;
  std::string after_occurrence;
  std::size_t found;

  if (argc != 4) {
    std::cout << "Error: Invalid number of arguments." << std::endl;
    return 1;
  }

  input_file.open(argv[1]);
  s1 = argv[2];
  s2 = argv[3];

  if (!input_file.is_open()) {
    std::cout << "Error: The file couldn't be opened." << std::endl;
    return 1;
  }
  output_file.open(std::string(argv[1]) + ".replace");

  while (std::getline(input_file, line)) {
    found = line.find(s1);
    while (found != std::string::npos) {
      before_occurrence = line.substr(0, found);
      after_occurrence = line.substr(found + s1.size(), line.size());
      line = before_occurrence + s2 + after_occurrence;
      found = line.find(s1);
    }
    output_file << line << std::endl;
  }
  input_file.close();
  output_file.close();

  return 0;
}