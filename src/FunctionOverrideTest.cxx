/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_FunctionOverrideTest_init = false;
#include "/var/www/html/codeit/student/workspace/FunctionOverride_exercise/src/FunctionOverrideTest.h"

static FunctionOverrideTest suite_FunctionOverrideTest;

static CxxTest::List Tests_FunctionOverrideTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_FunctionOverrideTest( "/var/www/html/codeit/student/workspace/FunctionOverride_exercise/src/FunctionOverrideTest.h", 5, "FunctionOverrideTest", suite_FunctionOverrideTest, Tests_FunctionOverrideTest );

static class TestDescription_suite_FunctionOverrideTest_test_SimpleIOCompare : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FunctionOverrideTest_test_SimpleIOCompare() : CxxTest::RealTestDescription( Tests_FunctionOverrideTest, suiteDescription_FunctionOverrideTest, 15, "test_SimpleIOCompare" ) {}
 void runTest() { suite_FunctionOverrideTest.test_SimpleIOCompare(); }
} testDescription_suite_FunctionOverrideTest_test_SimpleIOCompare;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
