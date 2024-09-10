#include<stdio.h>
#include <TXLib.h>

int main()
{
    printf("Дарова");
    int t[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &t[i][j]);
        }

    }
    printf("%d", t[0][0] + t[1][1] + t[2][2]);



}
