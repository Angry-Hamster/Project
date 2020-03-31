// g++ main.cpp -o project.exe
// ./project.exe
#include <iostream>

using namespace std;

int main(){
    int masiv[] = {45, 43 ,67, 14, 86, 76, 9, 0, 15};
    int size = (sizeof (masiv))/sizeof(masiv[0]);

    for(int i = 0; i < size; i++)
    {
        cout << masiv[i] << " ";
    }
cout << endl;
    return 0;
}

