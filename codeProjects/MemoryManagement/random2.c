#include<stdio.h>
#include<stdlib.h>
extern void srand1(unsigned int x);
extern unsigned int rand1(void);

int main(){
    int count;
    unsigned seed;

    printf("Please enter your choice for seed.\n");
    while((scanf("%u",&seed))==1)
    {
    srand1(seed);
    for(count=0;count<5;count++){
        printf("%d\n",rand1());
    }
    printf("Please enter the next seed(q to quit).\n");
    }
    printf("Done!");
    return 0;
}
