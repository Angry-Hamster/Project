// g++ main.cpp -o project.exe
// ./project.exe
#include <iostream>
using namespace std;
#define SIZE 10

int main()
{
    int masiv[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout << "[" << i << "]" << ": ";
        cin >> masiv[i];
    }
    cout << "\nMasiv: ";

    for (int i = 0; i < SIZE; i++)
    {
        cout << masiv[i] << " ";
    }

    cout << endl;

    return 0;
}
