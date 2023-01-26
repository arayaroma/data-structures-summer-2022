#include <iostream>
#define log(x) std::cout << x << std::endl;

int fibonacci(int n) {
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;

  return (fibonacci(n-1) + fibonacci(n-2));
}


int main() {
  
  int number, n = 10;
  number = fibonacci(n);
  log(n << "'th element: " << number);

  return 0;
}
