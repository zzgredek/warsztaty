#include <iostream>
#include "add.h"
#include "multiply.h"
#include "pow.h"

void areEquals(double expected, double got)
{
	if(expected != got)
	{
		std::cout<<"Expected = "<<expected<<" but got value = "<<got<<std::endl;
	} else {
		std::cout<<"Test passed\n";
	}
}

int main()
{
	areEquals(4, add(2,2));
	areEquals(8, multiply(2,4));
	areEquals(8, pow(2,3));
	std::cout<<"end of test"<<std::endl;
	
	return 0;
}