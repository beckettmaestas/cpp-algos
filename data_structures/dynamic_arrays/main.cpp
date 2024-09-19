#include <iostream>
#include "vectors.h"
#include "vectors.cpp"
#include "bike.cpp"
#include "bike.h"

int main(int argc, char* argv[]){

	Vectors *exampleVector = new Vectors();

	if(argc > 1){
		exampleVector->setIntegerVector(std::atoi(argv[1]));
	}

	if(argc > 2){
		for(int i = 2; i < argc; i++){
			exampleVector->appendIntegerVector(std::atoi(argv[i]));
		}
	}	

	std::vector<int> theVector = exampleVector->getIntegerVector();

	for(int i : theVector){
		printf("%d\n", i);
	}	

}
