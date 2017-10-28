#include<iostream>
using namespace std;
int myfun(int i);
double myfun(double i);
int main(){
  std::cout << myfun(10) << '\n';
  std::cout << myfun(5.4) << '\n';
  return 0;
}

int myfun(int i){
  return i;
}
double myfun(double i){
  return i;
}
