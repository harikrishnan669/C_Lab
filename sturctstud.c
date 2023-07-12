#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[10];
    float marks;
}stud[100];

int main()
    {
        int i,j,n,temp1;
        char temp[10];
        float temp2;
        printf("Enter the number of students :");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("Enter the student id:");
            scanf("%d",&stud[i].id);
            printf("Enter the student name:");
            scanf("%s",stud[i].name);
            printf("Enter the student marks:");
            scanf("%f",&stud[i].marks);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(stud[j].id>stud[j+1].id)
                {
                    temp1=stud[j].id;
                    stud[j].id=stud[j+1].id;
                    stud[j+1].id=temp1;
                    strcpy(temp,stud[j].name);
                    strcpy(stud[j].name,stud[j+1].name);
                    strcpy(stud[j+1].name,temp);
                    temp2=stud[j].marks;
                    stud[j].marks=stud[j+1].marks;
                    stud[j+1].marks=temp2;
                }
            }
        }
        printf("The sorted order is\n");
        for(i=0;i<n;i++)
        {
            printf("The id of students is %d\n",stud[i].id);
            printf("The name of the student is %s\n",stud[i].name);
            printf("The mark of student is %f\n",stud[i].marks);
        }
        return 0;
    }
