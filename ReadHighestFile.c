#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    char name[20];
    float gpa;
} student;

student getHighestgpa(student s[]);

int main()
{
    FILE *f;
    f = fopen("file.txt", "a");


    for(int i=0; i<2; i++){
        printf("\nEnter name: ");
        char name[20];
        gets(name);

        fprintf(f, "\n%s", name);

        printf("\nGPA: ");
        float gpa;
        scanf("%f", &gpa);
        getchar();

        fprintf(f, "\n%.2f", gpa);
    }



    student s[3];
    student highest = getHighestgpa(s);

    printf("\n\nHighest GPA is done by Student %s with GPA = %f",getHighestgpa.name,getHighestgpa.highst);
}



student getHighestgpa(student s[])
{
    student highcg = s[0];
    for(int i=0;i<3;i++)
    {
        if (s[i].gpa>highcg.gpa)
        highcg=s[i];
    }

    return highcg;

}

