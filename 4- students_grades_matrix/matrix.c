#include <stdio.h>

void main()
{
    int students[8][3] = {
        {10, 85, 40},
        {20, 78, 68},
        {30, 92, 55},
        {40, 70, 75},
        {50, 88, 62},
        {60, 80, 85},
        {70, 95, 38},
        {80, 76, 50}};

    int total_in_sub_1 = 0, total_in_sub_2 = 0, total_in_sub_3 = 0;
    float avg_of_each_std[8] = {0};
    int n_of_std_below_50 = 0;

    for (int i = 0; i < 8; i++)
    {
        total_in_sub_1 += students[i][0];
        total_in_sub_2 += students[i][1];
        total_in_sub_3 += students[i][2];

        for (int j = 0; j < 3; j++)
        {
            avg_of_each_std[i] += students[i][j];
        }

        avg_of_each_std[i] /= 3;
        if (avg_of_each_std[i] < 50)
        {
            n_of_std_below_50++;
        }
    }

    printf("Average marks in Math: %.2f\n", total_in_sub_1 / 8.0);
    printf("Average marks in English: %.2f\n", total_in_sub_2 / 8.0);
    printf("Average marks in Science: %.2f\n\n", total_in_sub_3 / 8.0);

    for (int i = 0; i < 8; i++)
    {
        printf("Student %d: Math: %d, English: %d, Science: %d, Average: %.2f\n", i + 1, students[i][0], students[i][1], students[i][2], avg_of_each_std[i]);
    }

    printf("\nNumber of students with average below 50: %d\n", n_of_std_below_50);
}

// Output:
/*
Average marks in Math: 45.00
Average marks in English: 83.00
Average marks in Science: 59.13

Student 1: Math: 10, English: 85, Science: 40, Average: 45.00
Student 2: Math: 20, English: 78, Science: 68, Average: 55.33
Student 3: Math: 30, English: 92, Science: 55, Average: 59.00
Student 4: Math: 40, English: 70, Science: 75, Average: 61.67
Student 5: Math: 50, English: 88, Science: 62, Average: 66.67
Student 6: Math: 60, English: 80, Science: 85, Average: 75.00
Student 7: Math: 70, English: 95, Science: 38, Average: 67.67
Student 8: Math: 80, English: 76, Science: 50, Average: 68.67

Number of students with average below 50: 1
*/