/*
 *topic: input a decimal number change to a octal number and print to screen
 programmer name: cuiyong
 time: 2017/7/15 15:30pm
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//function ability like his name
int input_fun(int *);
int output_fun(int );
int changenum_fun(int ,int *);

int main()
{
    int decimal_num,octal_num,ret;
    while(1){
        
        input_fun(&decimal_num);

        if(changenum_fun(decimal_num,&octal_num)){
            printf("changenum_fun function error\n");
            exit(-1);
        }

        output_fun(octal_num);
    }
    return 0;
}

int input_fun(int *a){
    printf("please input a decimal number:");
    scanf("%d",a);
    return 0;
}

int output_fun(int a){
    printf("%d\n",a);
    return 0;
}

int changenum_fun(int a,int *b){
    if(b == NULL){
        printf("void pointer\n");
        return 1;
    }
    int d_num = a,temp = 0,res = 0,count = 0;
    if(a < 8){
        *b = a;
        return 0;
    }

    do{
        temp = d_num % 8;
        res += pow(10.0,count)* temp;
        d_num /= 8;
        count ++;
    }while(d_num > 0);

    *b = res;
    return 0;
}

