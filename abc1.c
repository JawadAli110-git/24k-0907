//practice code
#include<stdio.h>
int main(void){
    int age=10, marks=90;
    float approx_marks = 89.9;
    char gender[2] = "M";
    printf("age= %d\nmarks= %d\ngender= %s\napprox_marks= %.1f\nsize_age=%lu",age, marks, gender, approx_marks, sizeof(age));
    return 0;
}
