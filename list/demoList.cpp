#include <iostream>
using namespace std;
#include <list>
#include <stdio.h>

typedef struct ListNode {
    int val;
    ListNode *next;
} ListNode;

int main()
{
    list<ListNode *> list1;
    list<ListNode *> list2;

    ListNode node1;
    ListNode node2;
    ListNode node3;
    ListNode node4;


    node1.next = NULL;
    node1.val = 1;

    node2.next = NULL;
    node2.val = 2;

    node3.next = NULL;
    node3.val = 2;

    node4.next = NULL;
    node4.val = 1;


    list1.push_back(&node1);
    list1.push_back(&node2);
    list1.push_back(&node3);
    list1.push_back(&node4);


    ListNode * tail = list1.front();

    while(tail)
    {
        list2.push_front(tail);
        tail = tail->next;
    }
      
    tail = list1.front();
    ListNode * node = list2.front();
    while(tail && node)
    {
        
        if(tail->val != node->val)
        {
            printf("false\n");
            break;
        }
        tail = tail->next;
        node = node->next;
    }
    
    printf("true\n");
    

    return 0;
}