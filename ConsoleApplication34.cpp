#include <iostream>
#include <time.h>
using namespace std;

void Shell_sort(int* a, int n)
{
    cout << endl << "After: \n";
    int step = n / 2;
    while (step > 0)
    {
        for (int i = 0; i < n - step; i++)
        {
            int j = i;
            while (j >= 0 && a[j] > a[j + step])
            {
                int temp = a[j];
                a[j] = a[j + step];
                a[j + step] = temp;
                j--;
            }
        }
        step = step / 2;
    }
}

int main()
{
    srand(time(NULL));

    const int size = 72;
    int* arr = new int[size];
    int k = 0;
    cout << endl << "Before: \n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 - 1;
    }
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    Shell_sort(arr, size);

    for (int i = 0; i < size; i++)
        if (arr[i] != 0) arr[k++] = arr[i];

    for (int i = k; i < size; i++)
        arr[i] = 0;

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "\n";
    system("pause");
    return 0;
}