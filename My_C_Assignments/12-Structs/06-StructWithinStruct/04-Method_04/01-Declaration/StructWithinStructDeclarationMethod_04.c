#include <stdio.h>


int main(void)
{
    int length, breadth, area;
    
    struct MyPoint
    {
        int x;
        int y;
    };
    struct Rectangle
    {
        struct MyPoint point_01,point_02;
    };

    struct Rectangle rect;

    printf("\n\n");
    printf("Enter leftmost X-Coordinate of rectangle: ");
    scanf("%d",&rect.point_01.x);

    printf("\n\n");
    printf("Enter Bottommost Y-coordinate of rectangle: ");
    scanf("%d",&rect.point_01.y);

    printf("\n\n");
    printf("Enter rightmost X-coordinate of rectangle: ");
    scanf("%d",&rect.point_02.x);

    printf("\n\n");
    printf("Enter top most y coordinate of rectangle: ");
    scanf("%d",&rect.point_02.y);

    length = rect.point_02.y - rect.point_01.y;

    if(length < 0)
    {
        length = length * -1;
    }

    breadth = rect.point_02.x - rect.point_01.x;

    if(breadth < 0)
    {
        breadth = breadth * -1;
    }

    area = length * breadth;

    printf("\n\n");
    printf("Length of rectangle = %d\n\n",length);
    printf("Breadth of rectangle = %d\n\n",breadth);
    printf("Area of rectangle = %d\n\n",area);
    
    return 0;
}