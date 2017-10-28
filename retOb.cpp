#include <iostream>
using namespace std;
class myClass{
  int i;
public:
  void set_i(int n){i=n;}
  int get_i(){return i;}
};
myClass f(); //return object of type  myClass

int main(){
  myClass o;
  o=f();
  std::cout << o.get_i() << '\n';
  return 0;
}

myClass f(){
  myClass x;
  x.set_i(2);
  return x;
}
