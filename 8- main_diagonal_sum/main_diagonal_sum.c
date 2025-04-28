#include <stdio.h>

void main()
{
    int size, i, j, sum = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);
    int matrix[size][size];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            scanf("%d", &matrix[i][j]);
    }
    for (i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i < j)
            {
                sum += matrix[i][j];
            }
        }
        }
    printf("Sum of the main diagonal elements: %d\n", sum);
}
/*
Output:
PS E:\lvl100\data structures\report>  & 'c:\Users\Ahmed Azzam\.vscode\extensions\ms-vscode.cpptools-1.25.2-win32-x64\debugAdapters\bin\WindoPS E:\lvl100\data structures\report>  & 'c:\Users\Ahmed Azzam\.vscode\extensions\ms-vscode.cpptools-1.25.2-win32-x64\debugAdapters\bin\WindowsDebugLauncher.exe' '--stdin=Microsoft-MIEngine-In-4hldz2rv.bfs' '--stdout=Microsoft-MIEngine-Out-yyftqd02.yfi' '--stderr=Microsoft-MIEngine-Error-dhwzdii5.cvh' '--pid=Microsoft-MIEngine-Pid-op2mzvmu.yrp' '--dbgExe=C:\msys64\ucrt64\bin\gdb.exe'e-Error-dhwzdii5.cvh' '--pid=Microsoft-MIEngine-Pid-op2mzvmu.yrp' '--dbgExe=C:\msys64\ucrt64\bin\gdb.exe' '--interpreter=mi'
e-Error-dhwzdii5.cvh' '--pid=Microsoft-MIEngine-Pid-op2mzvmu.yrp' '--dbgExe=C:\msys64\ucrt64\bin\gdb.exe' '--interpreter=mi'
Enter the size of the square matrix: 3
Enter the elements of the matrix:
1
2
3
4
5
6
7
8
9
Sum of the main diagonal elements: 11
*/