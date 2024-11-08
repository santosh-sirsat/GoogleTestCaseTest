# GoogleTestCaseTest

To install Google Test in Visual Studio 2022 on Windows using vcpkg, follow these detailed steps:
Step 1: Install vcpkg
1.	Download vcpkg:
o	Open a terminal (e.g., PowerShell or Command Prompt) and clone the vcpkg repository:
bash
Copy code
git clone https://github.com/microsoft/vcpkg.git
2.	Navigate to the vcpkg Directory:
o	Use the command below to go into the directory:
bash
Copy code
cd vcpkg
3.	Build vcpkg:
o	Run the following command to set up vcpkg:
bash
Copy code
.\bootstrap-vcpkg.bat
4.	This creates the vcpkg.exe executable, which you’ll use to install libraries.
Step 2: Install Google Test Using vcpkg
1.	Install Google Test:
o	Run the following command to install Google Test:
bash
Copy code
.\vcpkg install gtest
2.	Integrate vcpkg with Visual Studio:
o	To automatically link vcpkg packages in all Visual Studio projects, use:
bash
Copy code
.\vcpkg integrate install
o	This command sets up vcpkg so that Visual Studio can automatically locate and link any libraries you install using vcpkg. It will work globally across your Visual Studio projects.
Step 3: Configure Visual Studio to Use Google Test
1.	Open Visual Studio 2022 and either create a new C++ project or open an existing one.
2.	Check Project Properties:
o	In Solution Explorer, right-click on your project and select Properties.
o	Under Configuration Properties > VC++ Directories:
	Make sure the Include Directories and Library Directories now include paths to the vcpkg installation. This should be automatically configured if you used vcpkg integrate install.
3.	Verify the Installation:
o	In your .cpp files, you should now be able to include Google Test headers like this:
cpp
Copy code
#include <gtest/gtest.h>
4.	Add a main Function for Google Test:
o	Create a main.cpp file with the following code to initialize Google Test and run all test cases:
cpp
Copy code
#include <gtest/gtest.h>

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
Step 4: Writing and Running Tests
1.	Create a New Test File:
o	In Solution Explorer, right-click on your project and select Add > New Item….
o	Choose C++ File (.cpp), name it (e.g., sample_test.cpp), and add it to your project.
2.	Write Sample Test Cases:
o	In sample_test.cpp, write a test case using the Google Test framework:
cpp
Copy code
#include <gtest/gtest.h>

int Add(int a, int b) {
    return a + b;
}

TEST(AdditionTest, AddsPositiveNumbers) {
    EXPECT_EQ(Add(1, 2), 3);
}

TEST(AdditionTest, AddsNegativeNumbers) {
    EXPECT_EQ(Add(-1, -2), -3);
}
3.	Build and Run Your Project:
o	Build your project by pressing Ctrl + Shift + B or selecting Build Solution from the Build menu.
o	Run the executable to see test results. The tests will execute, and Visual Studio’s Output or Console window will show which tests passed or failed.
4.	Using Test Explorer (Optional):
o	In Visual Studio 2022, you can also view test results in the Test Explorer window.
o	To do this, go to Test > Test Explorer. If configured correctly, Google Test cases will automatically appear in the Test Explorer after you build your project, allowing you to run tests directly from the IDE.
Step 5: Verifying Successful Installation
If all steps were completed successfully, you should see Google Test output in the console or Test Explorer showing the results of your test cases. This setup lets you add, run, and manage Google Test cases in your Visual Studio 2022 project with ease.
