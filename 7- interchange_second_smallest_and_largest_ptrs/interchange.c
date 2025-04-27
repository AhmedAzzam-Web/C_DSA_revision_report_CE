#include <stdio.h>

/*
Brain storming: First we sort the array in ascending order. Then we can easily find the second smallest and second largest elements.
*/

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Bubble_Sort(int *arr)
{
    int i, j, temp;
    for (i = 0; i < 10 - 1; i++)
    {
        for (j = 0; j < 10 - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                swap((arr + j), (arr + j + 1));
            }
        }
    }
}

void main()
{
    int arr[10], i, *smallest, *largest;
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    Bubble_Sort(arr);

    smallest = &arr[1]; // Second smallest
    largest = &arr[8];  // Second largest

    swap(smallest, largest);
    printf("Smallest: %d\n", *smallest);
    printf("Largest: %d\n", *largest);

    printf("After swapping:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*
PS E:\lvl100\data structures\report>  & 'c:\Users\Ahmed Azzam\.vscode\extensions\ms-vscode.cpptools-1.25.2-win32-x64\debugAdapters\bin\WindowsDebugLauncher.exe' '--stdin=Microsoft-MIEngine-In-wbesl15j.15q' '--stdout=Microsoft-MIEngine-Out-q0wotp42.sq2' '--stderr=Microsoft-MIEngine-Error-01hnsfwz.snd' '--pid=Microsoft-MIEngine-Pid-daq0hghh.geg' '--dbgExe=C:\msys64\ucrt64\bin\gdb.exe' '--interpreter=mi'
Enter 10 integers:
1
2
3
4
8
13
9
6
14
15
Smallest: 14
Largest: 2
After swapping:
1 14 3 4 6 8 9 13 2 15
*/