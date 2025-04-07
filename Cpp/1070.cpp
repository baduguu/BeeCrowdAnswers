#include <stdio.h>

using namespace std;
 
int main() {
    int x;
    scanf ("%d",&x);
    
    if(x%2 == 1){
        printf("%d\n", x);
    } else {
        x++;
        printf("%d\n", x);
    }
    
    for(int i = 1; i< 6; i++){
        printf("%d\n", x+ (2*i));
    }
    return 0;
}