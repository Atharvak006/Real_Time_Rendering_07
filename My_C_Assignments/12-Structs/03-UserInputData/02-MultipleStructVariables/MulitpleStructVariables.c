#include<stdio.h>

struct MyPoint
{
    int x;
    int y;
};


int main(void)
{   
    struct MyPoint point_A, point_B, point_C, point_D, point_E;

    printf("\n");
    printf("Enter x coordinates for point A: ");
    scanf("%d",&point_A.x);
    printf("Enter y coordinates for point A: ");
    scanf("%d",&point_A.y);

    printf("\n");
    printf("Enter x coordinates for point B: ");
    scanf("%d",&point_B.x);
    printf("Enter y coordinates for point B: ");
    scanf("%d",&point_B.y);

    printf("\n");
    printf("Enter x coordinates for point C: ");
    scanf("%d",&point_C.x);
    printf("Enter y coordinates for point C: ");
    scanf("%d",&point_C.y);

    printf("\n");
    printf("Enter x coordinates for point D: ");
    scanf("%d",&point_D.x);
    printf("Enter y coordinatesc for point D: ");
    scanf("%d",&point_D.y);

    printf("\n");
    printf("Enter x coordinates for point E: ");
    scanf("%d",&point_E.x);
    printf("Enter y coordinates for point E: ");
    scanf("%d",&point_E.y);

    printf("Co-ordinates (x,y) of point 'A' are: (%d, %d)\n",point_A.x, point_A.y);
    printf("Co-ordinates (x,y) of point 'B' are: (%d, %d)\n",point_B.x, point_B.y);
    printf("Co-ordinates (x,y) of point 'C' are: (%d, %d)\n",point_C.x, point_C.y);
    printf("Co-ordinates (x,y) of point 'D' are: (%d, %d)\n",point_D.x, point_D.y);
    printf("Co-ordinates (x,y) of point 'E' are: (%d, %d)\n",point_E.x, point_E.y);

    return 0;
}