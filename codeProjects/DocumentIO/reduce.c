#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 40
int main(int argc,char*argv[]){
    FILE*in,*out;
    int ch;
    char name[LEN];
    int cnt=0;

    if(argc<2){
        fprintf(stderr,"Useage:%s filename.\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    if((in=fopen(argv[1],"r"))==NULL){
        fprintf(stderr,"Counldn't open the file\"%s\"\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    
    strncpy(name,argv[1],LEN-5);
    name[LEN-5]='\0';
    strcat(name,".red");

    if((out=fopen(name,"w"))==NULL){
        fprintf(stderr,"Can't create output file.\n");
        exit(3);
    }
    while((ch=getc(in))!=EOF){
        if(cnt++%3==0){
            putc(ch,out);//every 3 character choose 1 to be writtem in name.
        }
    }
    if(fclose(in)!=0||fclose(out)!=0){
        fprintf(stderr,"Error in closing files!\n");
    }

    return 0;
}
