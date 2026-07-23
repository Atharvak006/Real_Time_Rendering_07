#include<stdio.h>
#include<string.h>

struct MyPoint
{
    int x;
    int y;
};

struct MyPointProperties
{
    int quadrant;
    char axis_location[10];
};

int main(void)
{
    struct MyPoint point;

    struct MyPointProperties point_properties;
    
    printf("\n\n");
    printf("Enter X-Coordinate for A point: ");
    scanf("%d",&point.x);

    printf("Enter Y-coordinate for a point: ");
    scanf("%d",&point.y);

    printf("\n\n");
    printf("Point co-ordinates (x,y) Are: (%d, %d) !!!\n\n",point.x, point.y);

    if(point.x == 0 && point.y == 0)
    {
        printf("The point is the origin (%d, %d) !!!\n",point.x,point.y);
    }
    else
    {
        if(point.x == 0)
        {
            if(point.y < 0)
            {
                strcpy(point_properties.axis_location, "Negative Y");
            }
            if(point.y > 0)
            {
                strcpy(point_properties.axis_location,"Positive Y");
            }

            point_properties.quadrant = 0;

            printf("The point lies on the %s Axis !!!\n\n",point_properties.axis_location);
        }
        else if(point.y == 0)
        {
            if(point.x < 0)
            {
                strcpy(point_properties.axis_location, "Negative X");
            }
            
            if(point.x > 0)
            {
                strcpy(point_properties.axis_location, "Positive X");
            }

            point_properties.quadrant = 0;

            printf("The point Lies on the %s Axis !!!\n\n",point_properties.axis_location);
        }
        else
        {
            point_properties.axis_location[0] = '\0';

            if(point.x  && point.y > 0)
            {
                point_properties.quadrant = 1;
            }
            else if(point.x < 0 && point.y > 0)
            {
                point_properties.quadrant = 2;
            }
            else if(point.x < 0 && point.y < 0)
            {
                point_properties.quadrant = 3;
            }
            else
            {
                point_properties.quadrant = 4;
            }

            printf("The point lies in quadrant number %d !!!\n\n",point_properties.quadrant);
        }
    }
    return 0;
}