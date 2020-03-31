// g++ main.cpp -o project.exe
// ./project.exe

#define SIZE 10
#include <iostream>
#include <ctime>

using namespace std;

int main(){
    srand (time(NULL));

    for(int i = 0; i < SIZE; i++)
    {
        cout << rand() % 100 << " ";
    }
    cout << endl;
    return 0;
}
