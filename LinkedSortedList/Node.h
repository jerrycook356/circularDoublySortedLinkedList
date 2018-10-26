//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** @file Node.h
	Listing 4-1 */

#pragma once

template<class ItemType>
class Node
{
private:
	ItemType        item; // A data item
	Node<ItemType>* next; // Pointer to next node
	Node<ItemType>* prev; //pointer to previous node;

public:
	Node();
	Node(const ItemType& anItem);
	Node(const ItemType& anItem, Node<ItemType>* nextNodePtr,Node<ItemType>* prevNodePtr);
	void setItem(const ItemType& anItem);
	void setNext(Node<ItemType>* nextNodePtr);
	ItemType getItem() const;
	Node<ItemType>* getNext() const;

	void setPrev(Node<ItemType>* prevNodePtr);
	Node<ItemType>* getPrev()const;

}; // end Node

#include "Node.cpp"
