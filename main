///File: main.cpp

#include <iostream>
#include "linkedlist.h"
using namespace std;

int main()
{
    linkedlist* list_ = new linkedlist();
    element* e;
    e = new element(1);
    list_->InsertFirst(e);
    e = new element(2);
    list_->InsertFirst(e);
    e = new element(3);
    list_->InsertFirst(e);
    e = new element(4);
    list_->InsertFirst(e);
    list_->Travel();
    
    list_->DeleteTail();
    list_->DeleteTail();
    list_->DeleteTail();
    list_->DeleteTail();
    list_->Travel();

    /**cout << "\n";
    list_->Travel();
    list_->DeleteFirst();
    cout << "\n";
    list_->Travel();
    e = new element(7);
    list_->insertTailNotOverlap(e);*/
    /*linkedlist* lessList = new linkedlist();
    linkedlist* greaterList = new linkedlist();
    int val;
    cout << "\n";
    val = 2;
    list_->splitLess(list_, lessList, val);
    lessList->Travel();
    cout << "\n";
    list_->splitGreater(list_, greaterList, val);
    greaterList->Travel();
    cout << "\n";*/

    return 0;
}
