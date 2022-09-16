//
//  main.cpp
//  CTCI_1_1
//
//  Created by eric hayes on 9/16/22.
//

#include <iostream>
#include <string>

bool isUnique(std::string s) {
  sort(s.begin(), s.end()); // O(n Log n) sort
  
  for (int i = 1; i < s.size(); ++i) {
    if (s[i] == s[i - 1]) { return false; }
  }
  return true;
}

bool isUn(std::string s) {
  int checker = 0;
  for (int i = 0; i < s.size(); ++i) {
    int val = s[i] - 'a';
    if ((checker & (1 << val)) > 0) { return false; }
    checker |= (1 << val);
    
  }
  return true;
}

int main(int argc, const char * argv[]) {
  // insert code here...
  std::string demo = "abcdefghijklmnop";
  std::cout << isUn(demo) << std::endl;
  
  return 0;
}
