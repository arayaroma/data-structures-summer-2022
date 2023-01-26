#include <iostream>
#include <string>
#define log(x) std::cout << x << std::endl;
using std::string;

bool isPalindrome(const string &word, int start, int end) {
  
  if (start >= end)
    return true;

  if (word[start] != word[end])
    return false;

  return isPalindrome(word, ++start, --end);
}

void palindromeMessage(bool palindrome) {
  if (palindrome) {
    log("It's a palindrome!"); 
  }
  else
    log("It's not a palindrome :(");
}

int main() {
  string palindrome = "reconocer";
  string notPalindrome = "nope";

  log("First: " << palindrome);
  palindromeMessage(isPalindrome(palindrome, 0, palindrome.length() - 1));
 
  log("Second: " << notPalindrome);
  palindromeMessage(isPalindrome(notPalindrome, 0, notPalindrome.length() - 1));

  return 0;
}
