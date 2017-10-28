
#include <iostream>
using namespace std;

class powers{
  int x;
public:
  powers(){x=0;}
  powers(int n){
    x=n;
  }
  int get_i(){return x;}
  void  set_i(int n){
    x=n;
  }
};

int main(){
  powers ofTwo[]={1,2,4,8,16};
  powers ofThree[5];
  powers *p;
  int i;
  for(i=0;i<5;i++){
    std::cout << ofTwo[i].get_i() << '\n';
  }
  std::cout << "\n" << '\n';
  ofThree[0].set_i(1);
  ofThree[1].set_i(3);
  ofThree[2].set_i(9);
  ofThree[3].set_i(27);
  ofThree[4].set_i(81);

  for(i=0;i<5;i++){
    std::cout << ofThree[i].get_i() << '\n';
  }

  //dynamically allcate memory
  try{
    p=new powers[5];
  }catch(bad_alloc xa){
    std::cout << "Allocation failure" << '\n';
    return 1;
  }
  for(i=0;i<5;i++){
    p[i].set_i(ofTwo[i].get_i());
  }

  std::cout << "Powers of two" << '\n';

    for ( i = 0; i <5; i++) {
      /* code */
      std::cout << p[i].get_i() << '\n';

    }

    delete [] p;
    return 0;
}
