#ifndef NODE_H
#define NODE_H

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class Node
{
public:
	Node(int defaultValue);
	bool isLeaf();

	/* GETTERS & SETTERS */
	int getValue();
	void setValue(int value);

	std::vector<Node*>* getChildren();
	void setChildren(vector<Node*> children);

	Node* getChild(int i);
	void setChild(Node* child, int index);

	void add(int value);
	void remove(int value);

	string toString();
	string toString(Node* node);

private:
	int value;
	vector<Node*> children;
};

#endif // NODE_H
