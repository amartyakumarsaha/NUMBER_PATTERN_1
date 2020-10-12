#include <stdio.h>
#define ROW 5
#define COLUMN 5
int main() {
   int i,j,array[ROW][COLUMN];
    for(i=ROW;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
