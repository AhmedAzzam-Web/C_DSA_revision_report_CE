#include <stdio.h>

void main()
{
    int arr[5][3];
    int odd[15];
    int even[15];
    int odd_count = 0, even_count = 0;

    // Input 5 rows and 3 columns
    printf("Enter 5 rows and 3 columns: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);

            if (arr[i][j] % 2 == 0)
            {
                even[even_count++] = arr[i][j];
            }
            else
            {
                odd[odd_count++] = arr[i][j];
            }
        }
    }

    printf("\nOdd elements:\n");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }

    printf("\n\nEven elements:\n");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }

}

/*
PS E:\lvl100\data structures\report>  & 'c:\Users\Ahmed Azzam\.vscode\extensions\ms-vscode.cpptools-1.25.1-win32-x64\debugAdapters\bin\WindowsDebugLauncher.exe' '--stdin=Microsoft-MIEngine-In-lnfqchzv.g5a' '--stdout=Microsoft-MIEngine-Out-4iqpz5jh.hli' '--stderr=Microsoft-MIEngine-Error-fdkacejt.ycj' '--pid=Microsoft-MIEngine-Pid-sar50kzm.hhn' '--dbgExe=C:\msys64\ucrt64\bin\gdb.exe' '--interpreter=mi' 
Enter 5 rows and 3 columns: 
Enter element [0][0]: 1
Enter element [0][1]: 2
Enter element [0][2]: 3
Enter element [1][0]: 4
Enter element [1][1]: 5
Enter element [1][2]: 6
Enter element [2][0]: 7
Enter element [2][1]: 8
Enter element [2][2]: 9
Enter element [3][0]: 10
Enter element [1][1]: 5
Enter element [1][2]: 6
Enter element [2][0]: 7
Enter element [2][1]: 8
Enter element [2][2]: 9
Enter element [3][0]: 10
Enter element [2][0]: 7
Enter element [2][1]: 8
Enter element [2][2]: 9
Enter element [3][0]: 10
Enter element [2][1]: 8
Enter element [2][2]: 9
Enter element [3][0]: 10
Enter element [3][0]: 10
Enter element [3][1]: 11
Enter element [3][2]: 12
Enter element [4][0]: 13
Enter element [4][1]: 14
Enter element [3][2]: 12
Enter element [4][0]: 13
Enter element [4][1]: 14
Enter element [4][0]: 13
Enter element [4][1]: 14
Enter element [4][1]: 14
Enter element [4][2]: 15

Odd elements:
1 3 5 7 9 11 13 15

Even elements:
2 4 6 8 10 12 14
*/