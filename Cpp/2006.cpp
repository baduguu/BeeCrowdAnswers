#include <stdio.h>

using namespace std;

int main()
{
    int x;
    int r[5];
    int rr = 0;

    scanf("%d", &x);

    scanf("%d %d %d %d %d", &r[0], &r[1], &r[2], &r[3], &r[4]);

    for (int i : r)
    {
        if (i == x)
        {
            rr++;
        }
    }

    printf("%d\n", rr);

    return 0;
}