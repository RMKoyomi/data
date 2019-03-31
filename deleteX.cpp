#include <iostream>
#define arrsize elenum;
using namespace std;

template<class T>
struct LinkNode
{
    int data;
    T A[arraysize];
    bool delete(T& x);
    int i;
};

template<class T>
bool LinkNode<T>::delete(T& x)
{
    A=new T[arraysize];
    if(arraysize==-1)
    return false;
    for(i=0;i<arraysize;i++)
    {
        if(A[i]!=x)
        {A[i]=A[i+1];}
        else if(A[i]==x)
        {
        x=A[i-1];
        A[i-1]=A[i];
        }
        else
        return false;
    }
    arraysize--;
    return true;
}

int main()
{
    int A[i];
    for(int i=0;i<arrsize;i++)
    {
        cin >> A[i];
    }
    int x;
    cin>>x;
    delete(x);
    for(i=0;i<arrsize;i++)
    {
        cout<< A[i];
    }
}
