#include <iostream>
double RandomNumber()
{
	std::cout<<"check into random"<<std::endl;
	double x;
	x= rand()%100;
	std::cout<<"1 random number= "<<x<<std::endl;
	x= rand()%100;
	std::cout<<"2 random number= "<<x<<std::endl;
	srand(1);	
	x= rand()%100;
	std::cout<<"1 again random number= "<<x<<std::endl;
	return x;
}