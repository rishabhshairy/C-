#include <iostream>
using namespace std;
template <class X> void  swap(X *a,X *b){
  X *temp;

  *temp=*a;
  *a=*b;
  *b=*temp;

}
int main(){
  int i=10,j=20;
  swap(i,j);

  std::cout << "i  =" << i<< '\n';
  std::cout << "j  =" << j<< '\n';
}
