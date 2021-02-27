/*
表的链表实现头文件，包括Node及ADT声明
*/
#ifndef _List_H

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
typedef int ElementType; //链表内元素数据类型

List MakeEmpty(List L);
int IsEmpty(List L);
int IsLast(Position P, List L);
Position Find(ElementType x, List L);
void Delete(ElementType x, List L);
Position FindPrevious(ElementType x, List L);
void Insert(ElementType x, List L, Position P);
void DeleteList(List L);
Position Header(List L);
Position First(List L);
Position Advance(Position P);
ElementType Retrieve(Position P);

#endif