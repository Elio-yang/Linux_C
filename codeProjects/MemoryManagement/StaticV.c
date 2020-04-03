#include<stdio.h>
void tryStatic(void);
int main(){
    int count;
    for(count=0;count<3;count++){
        printf("Here comes the iteration %d:\n",count);
        tryStatic();
    }

    return 0;
}
void tryStatic(){
    int fade=1;
    static int stay=1;
    printf("fade=%d at %p  and static int stay=%d at %p\n",fade,&fade,stay,&stay);
    fade++;
    stay++;
}




