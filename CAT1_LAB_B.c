// Write a cprogram to get the employee information name,age,position and Date of joining. Print the employee list based on Alphabaetical order. Display the order of the employees based on date of joining.

#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
struct employee{
    char name[50];
    //int age;
    //char position[50];
    int day;
    int month;
    int year;
};
int check(char str1[],char str2[],int i){
    if (str1[i]>str2[i]){
        return 1;
    } else if (str1[i]==str2[i]){
        check(str1,str2,i++);
    } else{
        return 0;
    }
}
int check2(int x,int y,int z,int m,int n,int k){
    if (z>k){
        return 1;
    }else{
        if (y>n){
            return 1;
        } else{
            if (x>m){
                return 1;
            } else{
                return 0;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d\n",&n);
    struct employee s1[n];
    for (int i=0;i<n;i++){
        scanf("%s\n",s1[i].name);
        // scanf("%d\n",&s1[i].age);
        //scanf("%s\n",s1[i].position);
        scanf("%d/%d/%d\n",&s1[i].day,&s1[i].month,&s1[i].year);
    }
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=i;
    }
    int i, j, temp;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            int m=check(s1[j].name,s1[j+1].name,0);
            if (m==1){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("employee short accorrding to name\n");
    printf("\n");
    printf("\n");
    for (int i=0;i<n;i++){
        printf("%s\n",s1[arr[i]].name);
        printf("%d\n",s1[arr[i]].age);
        printf("%s\n",s1[arr[i]].position);
        printf("%d/%d/%d\n",s1[arr[i]].day,s1[arr[i]].month,s1[arr[i]].year);
    }
    printf("employee short accorrding to date of joining \n");
    return 0;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            int m=check2(s1[j].day,s1[j].month,s1[j].year,s1[j+1].day,s1[j+1].month,s1[j+1].year);
            if (m==1){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i=0;i<n;i++){
        printf("%s\n",s1[arr[i]].name);
        printf("%d\n",s1[arr[i]].age);
        printf("%s\n",s1[arr[i]].position);
        printf("%d/%d/%d\n",s1[arr[i]].day,s1[arr[i]].month,s1[arr[i]].year);
    }
    return 0;
}
