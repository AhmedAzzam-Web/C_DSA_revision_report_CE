#include <stdio.h>

int recursive_function(int M, int N)
{
    if (M == 0 || M >= N && N >= 1)
    {
        return 1;
    }
    return recursive_function(M - 1, N) + recursive_function(M - 1, N - 1);
}

int main()
{
    int M, N;
    printf("Enter the values of M and N: ");
    scanf("%d %d", &M, &N);
    int result = recursive_function(M, N);
    printf("Result: %d\n", result);

    return 0;
}
/*
Output:
PS E:\lvl100\data structures\report>  & 'c:\Users\Ahmed Azzam\.vscode\extensions\ms-vscode.cpptools-1.25.2-win32-x64\debugAdapters\bin\WindowsDebugLauncher.exe' '--stdin=Microsoft-MIEngine-In-t00huuf0.as0' '--stdout=Microsoft-MIEngine-Out-bu1gzkgw.hpt' '--stderr=Microsoft-MIEngine-Error-njqqymgo.jan' '--pid=Microsoft-MIEngine-Pid-swvz51kk.nyn' '--dbgExe=C:\msys64\ucrt64\bin\gdb.exe' '--interpreter=mi'
Enter the values of M and N: 6 5
Result: 1
*/