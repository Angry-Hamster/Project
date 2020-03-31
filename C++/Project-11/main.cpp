// g++ main.cpp -o project.exe
// ./project.exe
#include <iostream>
using namespace std;

string chect_pass (string pass)
{   
    string pasword;
    cout << "Yor pass: ";
    cin >> pasword;
    if(pasword == pass){
        cout << "Доступ разрешен." << endl;
    }
    else
    {
        cout << "Неверный пароль!" << endl;
        chect_pass(pass);
    }
}

int main()
{
    chect_pass("qwer1234");

    return 0;
}
