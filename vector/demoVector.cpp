#include <iostream>
/* 命名空间 */
using namespace std;
#include <vector>
#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE     20

typedef struct Stu_info
{
    int age;
    char sex;
    char name[BUFFER_SIZE];
} Stu_info;


int main()
{

#if 0
    /* 声明变量在动态数组中存放的数据类型 */
    /* 等同于初始化函数 */
    vector<int> myvec;

    /* 插入数据 */
    myvec.push_back(5);

    int length = myvec.size();
    printf("len: %d\n", length);

    int capacity = myvec.capacity();
    printf("capacity : %d\n", capacity);

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        myvec.push_back(idx);
    }
    length = myvec.size();
    printf("len: %d\n", length);

    capacity = myvec.capacity();
    printf("capacity : %d\n", capacity);
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

    vector<Stu_info> myvec;

    myvec.push_back(stu1);
    myvec.push_back(stu2);
    myvec.push_back(stu3);

    int length = myvec.size();
    printf("len: %d\n", length);

    int capacity = myvec.capacity();
    printf("capacity : %d\n", capacity);

    Stu_info tmpInfo;
    memset(&tmpInfo, 0, sizeof(Stu_info));

    for (int idx = 0; idx < length; idx++)
    {
        // tmpInfo = myvec[idx];
        tmpInfo = myvec.at(idx);
        printf("age : %d,\t name : %s,\t sex : %c\n", tmpInfo.age, tmpInfo.name, tmpInfo.sex);
    }


    return 0;
}
