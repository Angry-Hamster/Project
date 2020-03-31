// g++ main.cpp -o project.exe
// ./project.exe
#include <iostream>
using namespace std;

int main() 
{ 
    int a, b;
    cout << "Введите первое число: "; 
    cin >> a; 

    cout << "Введите второе число: "; 
    cin >> b; 

    if(a==0 || b==0)
    {
        cout << "One of them 0\nError" << endl;
        return 0;
    }
    if(a>b){
            cout << a%b << endl;
        }

        else
        {
            cout << b%a << endl;
        } 

    return 0; 
}