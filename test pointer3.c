#include<stdio.h>
#include<conio.h>
void grade_gpa(int,char *a,float *g);
main()
{
    int num;char gradep; float gpap;
a:  printf("Enter marks: ");
    scanf("%d",&num);
    if(num>=0&&num<=100){
    grade_gpa(num,&gradep,&gpap);
    printf("Grade and GPA: %c %.1f",gradep,gpap);
    }
    else goto a;
    getch();
}
void grade_gpa(int n,char *a,float *g)
{
    if(n>=90){
        *a='A';
        *g=4.0;
    }
    else if(n<90&&n>=80){
        *a='B';
        *g=3.5;
    }
    else if(n<80&&n>=70){
        *a='C';
        *g=3.0;
    }
    else if(n<70&&n>=60){
        *a='D';
        *g=2.5;
    }
    else if(n<60&&n>=50){
        *a='E';
        *g=2.0;
    }
    else{
        *a='F';
        *g=0;
    }
}
