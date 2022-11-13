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

void insertSort(int* a, int n)
{
   
    cout << "---- Insert sort ---- \n" << "Before: \n";
    {
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }

    cout << "\n\nAfter: \n";
    int tmp;
    for (int i = 1, j; i < n; ++i) 
    {
        tmp = a[i];
        for (j = i - 1; j >= 0 && a[j] > tmp; --j) 
            a[j + 1] = a[j];    
        a[j + 1] = tmp;    
    }
    for (int i = 0; i < n; i++)
          cout << a[i] << " ";

}

int main()
{
    srand(time(NULL));

    const int size = 72;
    int* arr = new int[size];
    int k = 0;
    cout << "---- Shell sort ---- \n" << "Before: \n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
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
    cout << "\n\n";
    
    
    insertSort(arr, size);

    cout << endl;

    
    return 0;
}