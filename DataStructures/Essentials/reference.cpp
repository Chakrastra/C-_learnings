#include<iostream>
using namespace std;

int main()
{
    int n=10;
    int &r = n;
    cout << r << endl<<n<<endl; // Output: 10
    
    return 0;
}