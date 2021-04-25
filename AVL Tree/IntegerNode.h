#pragma once
#include <iostream>
#include <string>

using namespace std;

class IntegerNode
{
public:
	int integer;
	IntegerNode* leftChild;
	IntegerNode* rightChild;

	IntegerNode(int integer);
};


