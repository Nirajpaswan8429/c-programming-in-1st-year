
#include <stdio.h>

int main()
{
    int std = 150, prim = 200, yes = 80, no = 0;
    int sum = 0, a, b;

    printf("Enter 1 for Standard Seat or 2 for Premium: ");
    scanf("%d", &a);

    if (a == 1)
    {
        sum = sum + std;
    }
    else if (a == 2)
    {
        sum = sum + prim;
    }
    else
    {
        printf("Invalid seat selection\n");
        return 0;
    }

    printf("If you want snacks combo, enter 1 for Yes or 0 for No: ");
    scanf("%d", &b);

    if (b == 1)
    {
        sum = sum + yes;
    }
    else if (b == 0)
    {
        sum = sum + no;
    }
    else
    {
        printf("Invalid snacks selection\n");
        return 0;
    }

    printf("Total amount = Rs. %d\n", sum);

    return 0;
}
