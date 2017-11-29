#include <iostream>
using namespace std;
template <class X> void swap(X *a,X *b)
{
    X temp=*a;
    *a=*b;
    *b=temp;
}
template <class Y> void sort(Y *a,int n)
{
    Y *temp;
    temp=a;

     for (int i = 0; i < n-1; ++i)
     {
         /* code */
         for (int j = 0; j < n-1-i; ++j)
         {
             /* code */
             if (temp[j]>temp[j+1])
             {
                 swap(&temp[j],&temp[j+1]);
             }
         }
     }
}
int main()
{
    int a[5];
    for (int i = 0; i < 5; ++i)
    {
        /* code */
        std::cin >> a[i];
    }
    sort(a,5);
    for (int i = 0; i < 5; ++i)
    {
        /* code */
        std::cout << a[i] << "\n";
    }
    return 0;
}
