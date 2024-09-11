#include<iostream>
using namespace std;

int main()
{
    int amount;
    cout<<"Enter Bill Amount: ";
    cin>>amount;

    if(amount<100){
        int discounted_amount = amount;
        cout<<"Discounted amount: "<<discounted_amount<<endl;
    }
    else if(amount>=100 && amount < 500){
        int discounted_amount= amount-(amount*10/100);
        cout<<"Discounted amount: "<<discounted_amount<<endl;
    }
    else{
        int discounted_amount= amount-(amount*20/100);
        cout<<"Discounted amount: "<<discounted_amount<<endl;
    }
    return 0;
}