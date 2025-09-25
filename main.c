#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int time, x, y;
    
    printf("input the second :");
    scanf("%i", &time);
    
    x= time/60;
    y= time%60;
    printf("the time is %i : %i\n",x,y);
    
    system("PAUSE");	
    return 0;
}
