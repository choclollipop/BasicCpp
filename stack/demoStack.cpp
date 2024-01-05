#include <iostream>
using namespace std;
#include <stdio.h>
#include <stack>
#include <string.h>

#define BUFFER_SIZE    20

typedef struct Stu_info
{
    int age;
    char sex;
    char name[BUFFER_SIZE];
} Stu_info;

int main()
{

#if 0
    stack<int> mystack;

    for (int idx = 1; idx <= BUFFER_SIZE; idx++)
    {
        mystack.push(idx);
    }
    
    int len = mystack.size();
    printf("len : %d\n", len);

    int topVal = 0;
    while(!mystack.empty())
    {
        topVal = mystack.top();
        mystack.pop();

        printf("topVal: %d\n", topVal);
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

    stack<Stu_info*> mystack;

    mystack.push(&stu1);
    mystack.push(&stu2);
    mystack.push(&stu3);

    Stu_info * tmpInfo = NULL;
    while(!mystack.empty())
    {
        tmpInfo = mystack.top();
        mystack.pop();

        printf("age : %d,\t name : %s,\t sex : %c\n", tmpInfo->age, tmpInfo->name, tmpInfo->sex);
    }


    return 0;
}
