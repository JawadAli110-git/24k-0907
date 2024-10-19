#include <stdio.h>

int main()
{
    int n, i, temp, mode, maxcount = 0;
    float mean, sum = 0, median;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    float marks[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the Marks of student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }
    printf("FOR MEAN:\n");
    for (i = 0; i < n; i++)
    {
        sum += marks[i];
    }
    mean = sum / n;
    printf("The MEAN is: %.2f\n", mean);
    printf("FOR MEDIAN:\n");
    for (i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (marks[j] > marks[j + 1])
            {
                temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%.0f,", marks[i]);
    }
    if (n % 2 == 0)
    {
        median = (marks[n / 2 - 1] + marks[n / 2]) / 2;
    }
    else
    {
        median = marks[((n + 1) / 2) - 1];
    }
    printf("\nThe MEDIAN is: %.2f\n", median);
    printf("For MODE:\n");
    for (i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (marks[j] == marks[i])
            {
                count++;
            }
        }
        if (count > maxcount)
        {
            maxcount = count;
            mode = marks[i];
        }
    }
    if (maxcount > 1)
    {
        printf("The MODE is: %d\nTIMES: %d", mode, maxcount);
    }
    else
    {
        printf("There is no mode value");
    }

    return 0;
}