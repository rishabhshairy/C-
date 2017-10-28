#include <iostream>
using namespace std;
class abc{
  int i;
public:
  void set_i(int n){
    i=n;
  }
  int get_i(){
    return i;
  }
};
int main(){
  abc o1,o2;
  o1.set_i(99);
  o2=o1;
  std::cout << o2.get_i() << '\n';
}
