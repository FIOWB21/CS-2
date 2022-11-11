#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    const int size = 8;
    static int a[size];
    int* arr = new int [size] {};
    cout << "Before: " << "\n\n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 - 1;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n\n" << "After: " << "\n\n";

    int temp;

    for (int i = size / 2; i < size; i++) {
        for (int j = size / 2; j < size - 1; j++) {
            if (arr[j] < arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;

}