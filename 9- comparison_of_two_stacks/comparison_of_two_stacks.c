#include <stdio.h>

void main()
{
    int stack1[5];
    int stack2[5];
    int top1 = -1;
    int top2 = -1;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter element for stack1: ");
        scanf("%d", &stack1[++top1]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element for stack2: ");
        scanf("%d", &stack2[++top2]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (stack1[i] == stack2[i])
        {
            printf("Element %d is equal in both stacks\n", stack1[i]);
        }
        else
        {
            printf("Element %d in stack1 is not equal to element %d in stack2\n", stack1[i], stack2[i]);
        }
    }
    
}

/*
Output:
PS E:\lvl100\data structures\report>  & 'c:\Users\Ahmed Azzam\.vscode\extensions\ms-vscode.cpptools-1.25.2-win32-x64\debugAdapters\bin\WindowsDebugLauncher.exe' '--stdin=Microsoft-MIEngine-In-0pxvjfqf.fh3' '--stdout=Microsoft-MIEngine-Out-h112uxxv.ywk' '--stderr=Microsoft-MIEngine-Error-eoowfwzz.xl0' '--pid=Microsoft-MIEngine-Pid-ww415p51.qsh' '--dbgExe=C:\msys64\ucrt64\bin\gdb.exe' '--interpreter=mi' 
Enter element for stack1: 1
Enter element for stack1: 2
Enter element for stack1: 3
Enter element for stack1: 4
Enter element for stack1: 5
Enter element for stack2: 1
Enter element for stack2: 2
Enter element for stack2: 3
Enter element for stack2: 4
Enter element for stack2: 5
Element 1 is equal in both stacks
Element 2 is equal in both stacks
Element 3 is equal in both stacks
Element 4 is equal in both stacks
Element 5 is equal in both stacks
*/