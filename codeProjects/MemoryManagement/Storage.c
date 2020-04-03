#include<stdio.h>
int main(){
    int x=30;//here x is a block scope with no linkage and auto variable
    printf("x in outer block scope is %d at %p\n",x,&x);
    {
        int x=77;//another inner block scope 
        printf("x in inner block is %d at %p\n",x,&x);
    }
    printf("x in outer scope is %d at %p\n",x,&x);
    while(x++<33){
        int x=100;
        x++;
        printf("x in while loop is %d at %p\n",x,&x);
    }// the x in while loop exsits only in the braket block,so
    //when while judgeing the x ,in fact are using the outer x.
    printf("x in outer scope is %d at %p\n",x,&x);
    return 0;
}
