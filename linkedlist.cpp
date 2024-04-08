/// File: linkedlist.cpp

#include "linkedlist.h"
#include <iostream>
using namespace std;
linkedlist::linkedlist()
{
    //ctor
    this->head = nullptr;
    this->tail = nullptr;
    this->nNum = 0;
}

linkedlist::~linkedlist()
{
    //dtor
}
void linkedlist::InsertFirst(element* e) {
    if (this->head == nullptr)
        this->head = this->tail = e;
    else {
        e->Setpointer(this->head);
        this->head = e;
    }
    this->nNum++;
}
void linkedlist::InsertTail(element* e) {
    if (this->head == nullptr)
        this->head = this->tail = e;
    else {
        this->tail->Setpointer(e);
        this->tail = e;
    }
    this->nNum++;
}
void linkedlist::Travel() {
    element* p = this->head;
    if (p == nullptr)
    {
        cout << "RONG\n";
    }
    while (p != nullptr) {
        cout << p->Getdata() << "\t";
        p = p->Getpointer();
    }
    cout << "\n";
}
bool linkedlist::DeleteFirst() {
    if (this->head == nullptr) return false;
    else {
        element* p = this->head;
        this->head = this->head->Getpointer();
        delete p;
        return true;
    }
}
int linkedlist::CountX(int val)
{
    element* p = this->head;
    int countX = 0;
    while (p != nullptr)
    {
        if (p->Getdata() == val)
        {
            countX++;
        }
        p = p->Getpointer();
    }
    return countX;
}
bool linkedlist::isExist(int val)
{
    element* p = this->head;
    while (p != nullptr)
    {
        if (p->Getdata() == val)
        {
            return true;
        }
        p = p->Getpointer();
    }
    return false;

}
void linkedlist::insertFirstNotOverlap(element* e)
{
    if (this->head == nullptr)
        this->head = this->tail = e;
    else 
    {
        if (isExist(e->Getdata()) == false)
        {
            e->Setpointer(this->head);
            this->head = e;
        }
    }
    this->nNum++;
}
void linkedlist::insertTailNotOverlap(element* e)
{
    if (this->head == nullptr)
        this->head = this->tail = e;
    else 
    {
        if (isExist(e->Getdata()) == false)
        {
            this->tail->Setpointer(e);
            this->tail = e;
        }
    }
    this->nNum++;
}
void linkedlist::splitLess(linkedlist*& list_, linkedlist*& lessList, const int& val)
{
    element* p = this->head;
    while (p != nullptr)
    {
        if (p->Getdata() < val)
        {
            lessList->InsertFirst(p);
        }
        p = p->Getpointer();
    }
}
void linkedlist::splitGreater(linkedlist*& list_, linkedlist*& greaterList, const int& val)
{
    element* p = this->head;
    while (p != nullptr)
    {
        if (p->Getdata() > val)
        {
            greaterList->InsertTail(p);
        }
        p = p->Getpointer();
    }
}
bool linkedlist::DeleteTail()
{
    if(this->head == nullptr)
        return false;
    if (this->head->Getpointer() == nullptr)
    {
        delete head;
        return true;
    }
    else
    {
        element* p = this->head;
        while (p->Getpointer()->Getpointer() != nullptr)
            p = p->Getpointer();
        element* tmp = p->Getpointer();
        delete tmp;
        p->Setpointer(nullptr);
        this->tail = p;
        this->nNum--;
        return true;
    }
}
