#include "stdafx.h"
#include <iostream>
#include "Tree.h"

using namespace std;

int main(char** argv) {
	Node n31(31);
	Node n16(16);
	Node n20(20);

	Node n36(36);
	Node n28(28);
	Node n21(21);
	Node n6(6);

	Node n41(41);
	Node n30(30);

	Tree root(53);

	n36.getChildren()->push_back(&n31);
	n36.getChildren()->push_back(&n16);

	n28.getChildren()->push_back(&n20);

	n41.getChildren()->push_back(&n36);
	n41.getChildren()->push_back(&n28);

	n30.getChildren()->push_back(&n21);
	n30.getChildren()->push_back(&n6);

	root.getChildren()->push_back(&n41);
	root.getChildren()->push_back(&n30);

	cout << root.toString() << endl;

	return 0;
}
