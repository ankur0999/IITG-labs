#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
char str[20];
FILE *f1,*f2;
f1=fopen(argv[1],"r");
f2=fopen(argv[2],"r+");
if(f1==NULL){
printf("source file not opened succesfully\n");
exit(1);
}
if(f2==NULL){
printf("destination file not opened succesfully\n");
exit(1);
}
char read;
while(( read = fgetc(f1))!=EOF){
fputc(read,f2);

}


}
