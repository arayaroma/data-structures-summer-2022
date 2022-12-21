
class Node{
protected:
  char data;
  Node* next;
public:
  Node();
  Node(char);
  ~Node();
  char get_data();
  Node* get_next();
};
