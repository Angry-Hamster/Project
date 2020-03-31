// g++ main.cpp -o project.exe
// ./project.exe
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {2, 4, 5, 1, 10};
    const int SIZE = 5;
    for(int i = SIZE - 1; i > 0; --i)
    {
        for (int j = 1; j < i; j++)
        {
            if(arr[j-1]>arr[j])
            {
                int tmp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tmp;
            }
        }
    }
    for(int i = 0; i < SIZE; ++i) cout << arr[i] << " ";
    cout << endl;
    return 0;
}

// #include <algorithm>
// #include <vector>
// int main()
// {
//     vector<int> arr = {2, 4, 5, 1, 10};

//     // сортування масива
//     sort(arr.begin(), arr.end());
//     // reverse(arr.begin(), arr.end());

//     // вивод масіва
//     for(auto tmp:arr) cout << tmp << " ";
//     cout << endl;
//     return 0;
// }