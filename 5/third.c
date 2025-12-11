/*
Iterative Control Instruction
1) while
2) do while
3) for

while(condition)
{
    //code
}

do
{
    //code
} while(condition);

for(initialization ; condition ; flow )
{
    //code
}

*/

#include <stdio.h>

int main() {
          int i = 1;

    while (i <= 10)
    {
        printf("%d\n", i);
        if (i == 7)
        {
            break;
        }
        i++;
    }
    printf("\n");
    return 0;
}
