#include <iostream>
using namespace std;
#define MAX 50
template<class Stacktype> class Stack
{
    Stacktype arr[MAX];
    int tos;
public:
    Stack(){
        tos=-1;
    }
    void push(Stacktype ob)
    {
        if(tos==MAX)
        {
            std::cout << "Overflow" << "\n";
        }
        else{
            tos++;
            arr[tos]=ob;
        }
    }
    void pop()
    {
        if(tos==-1)
        {
            std::cout << "UnderFlow" << "\n";
        }
        else
        {
            std::cout << arr[tos] << "\n";
            tos--;
        }
    }
};
int main()
{
    Stack<int> st1;
    st1.push(3);
    Stack<char> st2;
    st2.push('s');
    st1.pop();
    st2.pop();
    return 0;
}
