#include "stdafx.h"
#include "Node.h"

Node::Node(int defaultValue = 0) :
	value(defaultValue)
{}

bool Node::isLeaf() {
	return this->children.size() == 0;
}

/* GETTERS & SETTERS */

int Node::getValue() {
	return this->value;
}

void Node::setValue(int value) {
	this->value = value;
}

vector<Node*>* Node::getChildren() {
	return &this->children;
}

void Node::setChildren(vector<Node*> children) {
	this->children = children;
}

Node* Node::getChild(int i) {
	return this->children[i];
}

void Node::setChild(Node* child, int index) {
	this->children[index] = child;
}

void Node::add(int value) {
	//
}

void Node::remove(int value) {
	//
}

string Node::toString() {
	/*ostringstream ss;
	ss << string("Node{") <<
	"value=\"" << this->value << "\"," <<
	"children=\"" << this->children << "\"" <<
	"}";*/
	return toString(this);
}

string Node::toString(Node* node) {
	ostringstream ss;
	ss << node->value << " ";
	if (!node->getChildren()->empty())
	{
		for (vector<int>::size_type i = 0; i < node->getChildren()->size(); i++)
			if (node->getChild(i) != NULL)
				ss << toString(node->getChild(i));
	}
	return ss.str();
}
