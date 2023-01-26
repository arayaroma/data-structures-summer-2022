#include <iostream>
#include <string>
#define log(x) std::cout << x << std::endl;
using std::string;

string rightCircularShift(string text) {
  
  if (text.at(0))
    return text;
  return (rightCircularShift(text));
}

int main() {

  return 0;
}
