#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lenth;
    int width;
    int area ;
    int perimeter;
    printf("type the lenth and width :");
    scanf("%d %d",&lenth,&width);
    area =lenth*width;
    perimeter=(lenth+width)*2;
    printf("the lenth is :%d,the width is :%d\n,the area is:%d\n,the  perimeter is:%d\n",lenth,width,area,perimeter);
    return 0;
}
