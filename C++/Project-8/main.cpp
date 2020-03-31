// g++ main.cpp -o project.exe
// ./project.exe

#define SIZE 10
#include <iostream>
#include <ctime>

#include <algorithm>

using namespace std;

int main(){
    int masiv[SIZE];

    srand (time(NULL));

    for(int i = 0; i < SIZE; i++)
    {
        masiv[i] = rand() % 100;
    }
    for(int i = 0; i < SIZE; i++) cout << masiv[i] << " ";
    cout << endl;
    
    sort(begin(masiv), end(masiv));
    
    for(int i = 0; i < SIZE; i++) cout << masiv[i] << " ";
    cout << endl;

    return 0;
}
