#include <iostream>
using namespace std;
int main()
{   
    int a,b,factorial=1;
    cout<<"Ingrese un número:";
    cin>>a;
    cout<<"Ingrese otro número:";
    cin>>b;
    cout<<"Ciclo for:"<<endl;
    for(int i=a;i<=b;i++){
        cout<<i<<endl;
        factorial=factorial*i;
    }
     cout<<"La Factorial es:"<<factorial<<endl;
    return 0;
}