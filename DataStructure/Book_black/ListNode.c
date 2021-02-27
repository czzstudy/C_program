/*
表的链表实现ADT文件，包括Node及ADT
*/
#include "List.h" //包含所有ADT声明的头文件

/* Node声明 */
struct Node
{
    /* 链表结构：数据+指针 */
    ElementType Element;
    Position next;
};

