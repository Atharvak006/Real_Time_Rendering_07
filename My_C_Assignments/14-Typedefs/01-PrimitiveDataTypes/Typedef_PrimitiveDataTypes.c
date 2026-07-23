#include<stdio.h>

typedef int MY_INT;

int main(void)
{
    MY_INT Add(MY_INT,MY_INT);

    typedef int MY_INT;

    typedef float ARK_FLOAT;

    typedef char CHARACTER;

    typedef double MY_DOUBLE;

    typedef unsigned int UINT;
    typedef UINT HANDLE;
    typedef HANDLE HWND;
    typedef HANDLE HINSTANCE;

    MY_INT a = 10, i;
    MY_INT iArray[] = {9,18,27,36,45,54,63,72,81,90};

    ARK_FLOAT f_ark = 30.8f;
    const ARK_FLOAT f_ark_pi = 3.14f;

    CHARACTER ch = '*';
    CHARACTER chArray_01[] = "Hello";
    CHARACTER chArray_02[][10] = {"RTR","BATCH", "2026-27"};

    MY_DOUBLE d = 8.041196;
    
    UINT uint = 3456;
    HANDLE handle = 987;
    HWND hwnd = 9876;
    HINSTANCE hinstance = 14666;

    printf("\n\n");
    printf("Type MY_INT variable a = %d\n",a);

    printf("\n\n");

    for(i = 0; i < (sizeof(iArray)/sizeof(int)); i++)
    {
        printf("Type MY_INT array variable iArray[%d] = %d\n",i,iArray[i]);
    }

    printf("\n\n");

    printf("Type ARK_FLOAT variable f = %f\n",f_ark);
    printf("Type ARK_FLOAT constanct f_ark_pi = %f\n",f_ark_pi);

    printf("\n\n");
    printf("Type MY_DOUBLE variable d = %lf\n",d);

    printf("\n\n");
    printf("Type character variable ch = %c \n",ch);

    printf("\n\n");
    printf("Type character array chArray_01 = %s \n",chArray_01);

    printf("\n\n\n\n");

    printf("Type UINT variable = %u\n\n",uint);
    printf("Type HANDLE variable = %u\n\n",handle);
    printf("Type HWND variable = %u\n\n",hwnd);
    printf("Type HINSTANCE variable = %u\n\n",hinstance);

    printf("\n\n");

    MY_INT x = 90;
    MY_INT y = 30;
    MY_INT ret;

    ret = Add(x,y);
    printf("ret = %d\n\n",ret);

    return 0;
}

MY_INT Add(MY_INT a, MY_INT b)
{
    MY_INT c;
    c = a+b;
    return c;
}