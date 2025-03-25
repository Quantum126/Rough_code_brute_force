#include<iostream>
using namespace std;
template <class X> X big(X a, X b)
{
    if (a > b)
    return a;
    else
    return b;
}
int main()
{
    cout<<big(4,5);
    cout<<" checking for double value ";
    cout<<big(4.5,5.6);
    return 0;
}