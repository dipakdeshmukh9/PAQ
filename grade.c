#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5, total;
    char grade[3];

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;

    if (total >= 90)
        sprintf(grade, "Ex");
    else if (total >= 80)
        sprintf(grade, "A");
    else if (total >= 70)
        sprintf(grade, "B");
    else if (total >= 60)
        sprintf(grade, "C");
    else
        sprintf(grade, "F");

    printf("Total Marks = %d\n", total);
    printf("Grade = %s\n", grade);

    return 0;
}