// g++ main.cpp -o project.exe
// ./project.exe
#include <iostream>
#define SIZE 10
using namespace std;

int main()
{
int masiv[SIZE];

    srand (time(NULL));

    for(int i = 0; i < SIZE; i++)
    {
        masiv[i] = rand() % 100;
    }
    for(int i = 0; i < SIZE; i++) cout << masiv[i] << " ";
    cout << endl;

    int maxm = 0, minm = 100;
    for(int i = 0; i < SIZE; i++)
    {
        if(maxm < masiv[i]){
            maxm = masiv[i];
        }
        else{}

        if(minm > masiv[i]){
            minm = masiv[i];
        }
        else{}
    }
    cout << maxm << " " <<  minm << endl;

    return 0;
}