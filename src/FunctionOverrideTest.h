#include <cxxtest/TestSuite.h>

extern const char* functionOverrideMain(int argc, char** argv);

class FunctionOverrideTest : public CxxTest::TestSuite
{

public:
	void setUp() {
	}

	void tearDown(){
	}

	void test_SimpleIOCompare(){
		char* argv[] = {};
		const char* message = functionOverrideMain(sizeof(argv), argv);

		TS_ASSERT_EQUALS("Hello world\n", message);
	}
	
};