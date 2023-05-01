// PAT1
// Write a C program to check whether a number is prime, armstrong, perfect number or not using functions.

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum1=0;
    int sum2=1;
    for (int i=2;i<=n/2;i++){
        if ( n%i==0){
            sum1++;
            sum2=sum2+i;
        }
    }
    int num=n;
    int originalNum, remainder;
    float result = 0.0;
    originalNum = num;
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0){
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if (sum1>0){
        printf("%d is not a prime number.\n",num);
    } else{
        printf("%d is a prime number.\n",num);
    }
    if ((int)result == num){
        printf("%d is an Armstrong number.\n", num);
    }else{
        printf("%d is not an Armstrong number.\n", num);
    }
    if (sum2!=n){
        printf("%d is not a perfect number.\n",num);
    } else{
        printf("%d is a perfect number.\n",num);
    }
    return 0;
}