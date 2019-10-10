#include "hello.h"
#include "function.h"
#include "qwidget.h"
#include "qcoreapplication.h"
#include "qmath.h"
#include "qgl.h"
#include <iostream>
//#include "wxwidjets"
int main(int argc, char** argv)
{
	hello_world();
	double x=RandomNumber();
	std::cout<<"1 again random number= "<<x<<std::endl;
	return 0;
}