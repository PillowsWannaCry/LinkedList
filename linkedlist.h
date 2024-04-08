/// File: linkedlist.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "element.h"

class linkedlist
{
private:
    element* head;
    element* tail;
    int nNum;
public:
    linkedlist();
    virtual ~linkedlist();
    element* Gethead() { return head; }
    void Sethead(element* val) { head = val; }
    element* Gettail() { return tail; }
    void Settail(element* val) { tail = val; }
    void InsertFirst(element*);
    void InsertTail(element*);
    bool DeleteFirst();
    void Travel();
    int CountX(int val);
    bool isExist(int val);
    void insertFirstNotOverlap(element*);
    void insertTailNotOverlap(element*);
    void splitLess(linkedlist*& list_, linkedlist*& lessList, const int& val);
    void splitGreater(linkedlist*& list_, linkedlist*& greaterList, const int& val);
    bool DeleteTail();
protected:


};

#endif // LINKEDLIST_H
