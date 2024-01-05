#include <iostream>
using namespace std;
#include <queue>
#include <string.h>
#include <list>

#define BUFFER_SIZE 5

typedef struct Stu_info
{
    int age;
    char sex;
    char name[BUFFER_SIZE];
} Stu_info;

int main()
{

#if 0
    queue<int> myqueue;

    for (int idx = 1; idx <= BUFFER_SIZE; idx++)
    {
        myqueue.push(idx);
    }

    int length = myqueue.size();
    printf("length: %d\n", length);

    int top = 0;
    while(!myqueue.empty())
    {
        top = myqueue.front();
        myqueue.pop();
        printf("top : %d\n", top);
    }
#endif

    Stu_info stu1,stu2,stu3;
    stu1.age = 10;
    stu1.sex = 'm';
    strncpy(stu1.name, "zhangsan", sizeof(stu1.name) - 1);

    stu2.age = 20;
    stu2.sex = 'f';
    strncpy(stu2.name, "lisi", sizeof(stu2.name) - 1);

    stu3.age = 30;
    stu3.sex = 'f';
    strncpy(stu3.name, "wangwu", sizeof(stu3.name) - 1);

    queue<Stu_info*> myqueue;

    myqueue.push(&stu1);
    myqueue.push(&stu2);
    myqueue.push(&stu3);

    Stu_info * tmpInfo = NULL;
    while(!myqueue.empty())
    {
        tmpInfo = myqueue.front();
        myqueue.pop();

        printf("age : %d,\t name : %s,\t sex : %c\n", tmpInfo->age, tmpInfo->name, tmpInfo->sex);
    }


    return 0;
}
