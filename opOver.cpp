#include <iostream>
using namespace std;
class loc{
    int longitude,lati;
  public:
    loc(){}
    loc(int lg,int lt){
      longitude=lg;
      lati=lt;
    }
    void show(){
      std::cout <<"longitude is "<< longitude << '\n';
      std::cout << "Latitude is "<<lati  << '\n';
    }

    loc operator+(loc op2);
};

loc loc::operator+(loc op2){
  loc temp;
  temp.longitude  =longitude+op2.longitude;
  temp.lati=        lati+op2.lati;


  return temp;
}

int main(){
  loc ob1(10,20),ob2(30,40);
  ob1.show();
  ob2.show();

  ob1=ob1+ob2;

  ob1.show();

  return 0;
}
