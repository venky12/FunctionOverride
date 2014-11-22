#include <iostream>
#include "Circle.h"

const char* functionOverrideMain(int argc, char** argv) {
	Circle c;
	std::cout << "Area of circle: " << c.getArea() << std::endl;
	return "Hello world\n";
} 

#ifndef __CXX_TEST_MAIN__

int main(int argc, char** argv){
    std::cout << functionOverrideMain(argc, argv) << std::endl;
    return 0;
}

#endif
