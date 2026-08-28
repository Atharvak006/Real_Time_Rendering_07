#include<stdio.h>

int main(void)
{
    int iArray[] = {2,4,5,7,8,87,98,423,4,5465};
    float fArray[] = {9.5f,3.4f,3.5f,6.4f,4.6f};
    double dArray[] = {1.3333,2.344434,5.443445};
    char cArray[] = {'A','T','H','A','R','V','A','\0'};

    printf("\n\n");
    printf("Integer Array Elements And the addresses they occupy are as follows: \n\n");
    printf("iArray[0] = %d \t at address: %p\n",*(iArray + 0), (iArray + 0));
    printf("iArray[1] = %d \t at address: %p\n",*(iArray + 1), (iArray + 1));
    printf("iArray[2] = %d \t at address: %p\n",*(iArray + 2), (iArray + 2));
    printf("iArray[3] = %d \t at address: %p\n",*(iArray + 3), (iArray + 3));
    printf("iArray[4] = %d \t at address: %p\n",*(iArray + 4), (iArray + 4));
    printf("iArray[5] = %d \t at address: %p\n",*(iArray + 5), (iArray + 5));
    printf("iArray[6] = %d \t at address: %p\n",*(iArray + 6), (iArray + 6));
    printf("iArray[7] = %d \t at address: %p\n",*(iArray + 7), (iArray + 7));
    printf("iArray[8] = %d \t at address: %p\n",*(iArray + 8), (iArray + 8));
    printf("iArray[9] = %d \t at address: %p\n",*(iArray + 9), (iArray + 9));

    printf("\n\n");

    printf("Float array elements and there addresses they occupy are as follows: \n\n");
    printf("fArray[0] = %f \t At Address: %p\n",*(fArray + 0), (fArray + 0));
    printf("fArray[1] = %f \t At Address: %p\n",*(fArray + 1), (fArray + 1));
    printf("fArray[2] = %f \t At Address: %p\n",*(fArray + 2), (fArray + 2));
    printf("fArray[3] = %f \t At Address: %p\n",*(fArray + 3), (fArray + 3));
    printf("fArray[4] = %f \t At Address: %p\n",*(fArray + 4), (fArray + 4));

    printf("\n\n");
    printf("Double Array Elements and the addresses they occupy are as follows: \n\n");
    printf("dArray[0] = %lf \t at address: %p\n",*(dArray + 0), (dArray + 0));
    printf("dArray[1] = %lf \t at address: %p\n",*(dArray + 1), (dArray + 1));
    printf("dArray[2] = %lf \t at address: %p\n",*(dArray + 2), (dArray + 2));
    

    printf("\n\n");
    printf("Character Array Elements and the addresses they occupy are as follows: \n");
    printf("cArray[0] = %c \t At address: %p\n",*(cArray + 0), (cArray + 0));
    printf("cArray[1] = %c \t At address: %p\n",*(cArray + 1), (cArray + 1));
    printf("cArray[2] = %c \t At address: %p\n",*(cArray + 2), (cArray + 2));
    printf("cArray[3] = %c \t At address: %p\n",*(cArray + 3), (cArray + 3));
    printf("cArray[4] = %c \t At address: %p\n",*(cArray + 4), (cArray + 4));
    printf("cArray[5] = %c \t At address: %p\n",*(cArray + 5), (cArray + 5));
    printf("cArray[6] = %c \t At address: %p\n",*(cArray + 6), (cArray + 6));
    
    return 0;
}