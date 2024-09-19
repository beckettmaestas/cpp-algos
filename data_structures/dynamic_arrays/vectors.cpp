#include <vector>
#include <iostream>
#include "vectors.h"


std::vector<int> Vectors::getIntegerVector(){
	return *intVector;
}

void Vectors::setIntegerVector(int num){
	intVector->push_back(num);
}

void Vectors::appendIntegerVector(int num){
	intVector->push_back(num);
}
