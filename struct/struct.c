#include <stdio.h>

struct Student
{
    /* data */
    float core;
    char name[20];
    char gender[10];
    int age;

} a = {99.5, "Kiah", "male", 21} ,st2;

void printStruct(struct Student *);
int main(void)
{
    struct Student st1 = {100.5, "jiajin", "female", 20};

    scanf("%f,%s,%s,%d",&st2.core,&st2.name,&st2.gender,&st2.age);
    printStruct(&st2);
    //谁的成绩高输出谁的、、、
    if (a.core > st1.core)
    {
        printStruct(&a);
    }
    else if (a.core == st1.core)
    {
        printStruct(&a);
        printStruct(&st1);
    }
    else
    {
        printStruct(&st1);
    }
    return 0;
}
void printStruct(struct Student *st)
{
    printf("学生的数学成绩为:%4.1f\n", (*st).core);  //指针的调用方法
    printf("学生的名字为:%s\n", st->name);
    printf("学生的性别为:%s\n", st->gender);
    printf("学生的年龄为:%d\n", st->age);
    // printf("学生的数学成绩为:%f\n", *st.core);   这种写法是错误的。。
}