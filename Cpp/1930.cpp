#include <stdio.h>

using namespace std;
 
int main() {
    int x1,x2,x3,x4;
    scanf ("%d %d %d %d",&x1, &x2, &x3, &x4);
    
    int r = x1 + x2 + x3 + x4 - 3;

    printf("%d\n",r);
 
    return 0;
}