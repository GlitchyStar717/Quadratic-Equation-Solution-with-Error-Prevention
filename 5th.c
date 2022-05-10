#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,r1,r2,w,tmp,runLoop;
tmp = 0.717;
a=tmp;
b=tmp;
c=tmp;

runLoop = 1;
printf("Enter the coefficients of the  quadratic equations : \n");
while(runLoop == 1) // To make sure that the input number lies in the range of 1-7
{
    scanf("%f %f %f", &a, &b, &c);
    
    if(a != 0){
        if(a == tmp){
            printf("Enter a number not a string.");
        }
        else {
            runLoop =0;
        }
    }
    else{
        printf("Enter valid coefficients. (a should be a non zero number) \n");
    }
}

d = b * b - 4 * a * c;
if (d == 0){
    r1 = -b/(2*a);
    printf("Roots are equal to each  other and the value is %f", r1);
}
else if (d > 0){
    r1 = -b/(2*a) + sqrt(d)/(2*a);
    r2 = -b/(2*a) - sqrt(d)/(2*a);
    printf("Roots value are : %f, %f", r1, r2);
}
else {
    d *= -1;
    w = sqrt(d)/(2*a);
    r1 = -b/(2*a); 
    printf("Roots value are : %f + %fi and %f - %fi", r1, w, r1, w);
}

}