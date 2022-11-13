#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    const int size = 88;
    static int a[size];
    int* arr = new int [size] {};
    cout << "---- Bubble sort ---- \n" << "Before: " << "\n\n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
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
/////////////////////////////////////////////////////////////////////////

    cout << "\n\n" << "---- Selection sort ---- \n" << "Before: " << "\n\n";
    int* arr2 = arr;
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << "\n\n" << "After: \n\n";
    for (int i = size / 2; i < size; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr2[j] > arr2[min])
                min = j;
        }
        int tmp = arr2[min];
        arr2[min] = arr2[i];
        arr2[i] = tmp;
    }
    for (int i = 0; i < size; ++i)
        cout << arr2[i] << ' ';
    cout << endl;
    

    return 0;

}