#include<stdio.h>
int main(){
    char stud_name[50];
    int roll_no,s1,s2,s3,s4,s5,stud_marks;
    float percentage;

    printf("Enter Student Name: ");
    scanf("%s",&stud_name);
    printf("Enter Roll Number: ");
    scanf("%d",&roll_no);
    printf("Enter marks in Subject 1: ");
    scanf("%d",&s1);
    printf("Enter marks in Subject 2: ");
    scanf("%d",&s2);
    printf("Enter marks in Subject 3: ");
    scanf("%d",&s3);
    printf("Enter marks in Subject 4: ");
    scanf("%d",&s4);
    printf("Enter marks in Subject 5: ");
    scanf("%d",&s5);
    
    stud_marks = s1+s2+s3+s4+s5;
    percentage = (stud_marks*100)/500;

    printf("\n-:STUDENT DETAILS:-");
    printf("\nSTUDENT NAME: %s",stud_name);
    printf("\nROLL NUMBER: %d",roll_no);
    printf("\nPERCENTAGE OBTAINED: %f",percentage);

    return 0;
}