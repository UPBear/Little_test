/*
 * topic:
 * open a file write word in the file 
 * then open the file read it;
 * programmer:
 *  cuiyong
 * time :
 *  2017/7/15 15:50pm
 */ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int writetofile(const char *);
int readfromfile(const char *);

int main()
{
    const char *filename = "hello";
    
    if(writetofile(filename)){
        printf("writetofile function error\n");
        exit(0);
    }

    printf("----------read from file hello----------\n");
    if(readfromfile(filename)){
        printf("readfromfile function error\n");
        exit(0);
    }
    return 0;
}

int writetofile(const char *fn)
{
    FILE *fd = NULL;
    char ch;
    if((fd = fopen(fn,"w+")) == NULL){
        printf("open file error\n");
        exit(0);
    }

    printf("please input some word and end with#:\n");
    ch = getchar();
    while(ch != '#'){
        fputc( ch, fd );
        ch =getchar();
    }
    
    fclose(fd);
    return 0;
}

int readfromfile(const char *fn)
{
    FILE *fd = NULL;
    if((fd = fopen(fn,"r")) == NULL){
        printf("open file error\n");
        exit(0);
    }
    char ch;
    do{
        ch = fgetc(fd);
        putchar(ch);
    }while(!feof(fd));
    fclose(fd);
    return 0;
}


