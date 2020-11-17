#include <stdio.h>

float findGarmonic( int* d,int* weight, int len)
{
    float sum =0;
    float c;
    for (int i = 0; i < len; i++) {
        c =  (float) (weight[i]) / (d[i]);
        sum =sum + c; 
    }
    return sum;
}

int findWeight(int* weight, int len){
    int sum = 0;
    for (int i = 0; i < len; i++) {
       
        sum = sum + (weight[i]);
    }
    return sum;
}
int main()
{
    int d[10];
    int weight[10];
    int n = 10; 
    int len = 0;
    int c;
    int flag;
    float mid;
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
    printf("enter elements weight: ");
    for (int i = 0; i < len; i++) {
        scanf("%d", &i[weight]);
    }
    mid = findWeight(weight, len) / findGarmonic(d,weight, len);
    printf("mid garmonic: %f", mid);
    return 0;
}






