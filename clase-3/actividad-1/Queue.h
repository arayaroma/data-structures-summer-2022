#include <string>
#include "Node.h"

class Queue : public Node{
private:
  std::string data;
public:
  void insert_word(std::string);
  void print(char);
};
