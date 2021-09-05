#include<iostream>

using namespace std;

void PyramidPattern1(int n) {
  for (int i = 1; i <= n; i++) {
    for (int k = n - i; k > 0; k--) {
      cout << " ";
    }
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}


int main() {
  int num;
  cout << "Enter number of levels of the pattern :" << endl;
  cin >> num;
  PyramidPattern1(num);
 

  return 0;
}
