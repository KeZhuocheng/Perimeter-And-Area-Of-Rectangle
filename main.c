#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lenth;
    int w;
    int area ;
    int z;
    printf("type the lenth and w :");
    scanf("%d %d",&lenth,&w);
    area =lenth*w;
    z=(lenth+w)*2;
    printf("the lenth is :%d,the w is :%d\n,the area is:%d\n,the z is:%d\n",lenth,w,area,z);
    return 0;
}
