#include<stdio.h>
int main(){
    int ch;
    while((ch=getchar())!=EOF){
        putchar(ch);
    }
//in Linux the way to end stream in is CTRL +D
//in Windows is CTRL +Z
/*
each time we use Enter system will deal with the buffer.
*/
    return 0;
}
