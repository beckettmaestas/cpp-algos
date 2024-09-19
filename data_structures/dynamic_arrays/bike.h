#ifndef BIKE_CLASS

#define BIKE_CLASS

class Bike{
	
private:
	std::string bikeType;

public:
	Bike(std::string bType){
		bikeType = bType;
	}

	std::string getBikeType();

};


#endif
