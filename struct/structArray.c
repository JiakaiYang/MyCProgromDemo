#include <stdio.h>
struct Student
{
    /* data */
    int id;
    char name[20];
    char gender[10];
    float score;
} studentGroup[3] = {{1, "彭于晏", "男", 80}, {2, "Kiah", "男", 100}, {3, "黎明", "男", 90}};

void exchangeInfo(struct Student *, struct Student *);
void printInfo(struct Student arry[], int lenght);
int main(void)
{
    for (int x = 0; x < 2; x++) //2可以用n代替 。。n的值为数组长度-1
    {
        for (int j = 2; j > 0 + x; j--)
        {
            if (studentGroup[j].score < studentGroup[j - 1].score)
            {
                exchangeInfo(&studentGroup[j], &studentGroup[j - 1]);
            }
        }
    }
    // 打印结构体数组
    printInfo(studentGroup, 3);

    return 0;
}

void exchangeInfo(struct Student *ahead, struct Student *rear)
{
    struct Student tmpStu;
    tmpStu = *ahead;
    *ahead = *rear;
    *rear = tmpStu;
}
void printInfo(struct Student arry[], int lenght)
{

    for (int i = 0; i < lenght ; i++)
    {
        printf("studentGroup[%d].name  :: %d\n", i + 1, studentGroup[i].id);
        printf("studentGroup[%d].name  :: %s\n", i + 1, studentGroup[i].name);
        printf("studentGroup[%d].gender  :: %s\n", i + 1, studentGroup[i].gender);
        printf("studentGroup[%d].score  :: %f\n", i + 1, studentGroup[i].score);
        printf("==================================\n");
    }
}
