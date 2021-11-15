#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void){

  string a = "Sam";

  string* b = &a;

  cout << b << " "<<*b;

  return 0;
}