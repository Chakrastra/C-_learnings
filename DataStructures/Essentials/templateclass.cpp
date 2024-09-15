#include<iostream>
using namespace std;

template<class T>
class Arithmatic
{
private:
    T a;
    T b;
public:
    Arithmatic(T a,T b);
    T add();
    T sub();

};
   template<class T>
    Arithmatic<T>::Arithmatic(T a,T b){
        this->a=a;
        this->b=b;
    }
    template<class T>
    T Arithmatic<T>::add(){
        return a+b;
    }
    template<class T>
    T Arithmatic<T>::sub(){
        return a-b;
    }


int main()
{   
    Arithmatic<int> ar(10,5);

    cout<<"Add "<<ar.add()<<endl;
    cout<<"Sub "<<ar.sub()<<endl;

    Arithmatic<float> ar1(10.88,5.9);

    cout<<"Add "<<ar1.add()<<endl;
    cout<<"Sub "<<ar1.sub()<<endl;



    return 0;
}