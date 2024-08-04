#include<stdio.h>


struct courses{
    char course_code[6];
    char course_name[30];
    float marks;
    };
struct student{
    char name[30];
    int roll_no;
    struct courses course[4];
    };


struct student input(int i){
    struct student stud;
    printf("Enter name of %d student: ",i+1);
    getchar();
    scanf("%[^\n]%*c",stud.name);
    printf("roll :");
    scanf("%d",&stud.roll_no);
    printf("Courses: \n");
    for(int i=0; i<4; i++){
        //printf("Course code: ");
        //scanf("%s",stud.course[i].course_code);
        //getchar();
        //printf("Course name: ");
        //scanf("%[^\n]%*c",stud.course[i].course_name);
        printf("Marks of Course %d: ",i+1);
        scanf("%f",&stud.course[i].marks);
        } 
    return(stud);
    }

int main(){
     struct student stud[3];
     for(int i=0; i<3; i++){
         stud[i] = input(i);
 }
 float avg[3]={0};
 for(int i=0; i<3; i++)
     for(int j = 0; j<4; j++)
         avg[i] += stud[i].course[j].marks ;
     
for(int i=0; i<3; i++)
    printf("Avg marks scored by student %s is %.2f\n",stud[i].name,avg[i]/4);
 }
