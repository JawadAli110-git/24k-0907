#include <stdio.h>

int main() {
        int reg_code, num, course;
        printf("Enter your registration code: ");
        scanf("%d",&reg_code);
        if(reg_code >= 100 && reg_code <= 999)
            {
                printf("Welcome To The University Registration System!\n");
                for(int i = 1; i <= 6; i++)
                    {
                        printf("1. Register For Courses.\n");
                        printf("2. View Student Details.\n");
                        printf("Enter any other number to exit.\n");
                        printf("Enter your choice: ");
                        scanf("%d",&num);
                        if(num == 1)
                        {
                            printf("Enter a number to register course..\n");
                            printf("1. PF\n");
                            printf("2. Calculus\n");
                            printf("3. English\n");
                            scanf("%d",&course);
                            if(course == 1)
                            {
                                printf("PF registered.\n");
                            }
                            else if(course == 2)
                            {
                                printf("Calculus registered.\n");
                            }
                            else if(course == 3)
                            {
                                printf("English registered.\n");
                            }
                            else {
                                printf("Invalid course number.\n");
                            }
                        }
                        else if(num == 2)
                        {
                            printf("Viewing Students details.\n");
                            if(course == 1)
                            {
                                printf("Registered Course: PF\n");
                                printf("Section: BCS 1D\n");
                                printf("Roll number: %d\n",reg_code);
                            }
                            else if(course == 2)
                            {
                                printf("Registered Course: CAL\n");
                                printf("Section: BCS 1D\n");
                                printf("Roll number: %d\n",reg_code);
                            }
                            else if(course == 3)
                            {
                                printf("Registered Course: ENG\n");
                                printf("Section: BCS 1D\n");
                                printf("Roll number: %d\n",reg_code);
                            }
                            else {
                                printf("Invalid Course number.\n");
                            }
                        }
                        else {
                            break;
                        }
                    }
            }  
            else {
                printf("Invalid student id.");
            }
        

    return 0;
}