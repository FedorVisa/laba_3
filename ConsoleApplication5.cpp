#include <stdio.h>


int mod_(int dat) {
    if (dat < 0) {
        return dat * -1;
    }
    return dat;
}


int minimum( int* d, int len)
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
    int min = 1000000;
    int len = 0;
    scanf("%d", &len);

    for (int j = 0; j < len; j++) {
        scanf("%d", &j[d]);
    }
    printf("min element: %d", minimum(d,len));
        return 0;
}






