#include <vector>

#ifndef CPP_VECTOR


#define CPP_VECTOR

class Vectors {



private:
	std::vector<int>* intVector;

public:
	Vectors(){
		intVector = new std::vector<int>;
	}

	std::vector<int> getIntegerVector();
	void setIntegerVector(int num);
	void appendIntegerVector(int num);
};

#endif
