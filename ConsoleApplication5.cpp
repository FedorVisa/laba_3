#include <stdio.h>

int mod_(int dat) {
    if (dat < 0) {
        return dat * -1;
    }
    return dat;
}

int findingMinimum( int* d, int len)
{
    int min = d[0];
    for (int i = 0; i < len; i++) {
        if (mod_(min)>mod_(d[i])) {
            min = d[i];
       }
    }
    return min;
}

int main()
{
    int d[10];
    int n = 10; 
    int len = 0;
    int c;
    int flag;
    printf("enter numder of elements: ");
    c=scanf("%d", &len);
    if (c != 1) {
        flag = 1;
        return printf("not a number");
    }
    if (len<0)  return printf("ne polozitelnoe chislo");
    printf("enter elements: ");
    for (int j = 0; j < len; j++) {
        scanf("%d", &j[d]);
    }
    printf("min element: %d", findingMinimum(d,len));
    return 0;
}






