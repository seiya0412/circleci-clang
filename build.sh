echo "Compiling unit tests..."
clang -c add.c
clang++ -lgtest -std=c++11 -pthread -g -Wall -Wextra -o unit_test.o -c test.cpp
clang++ -std=c++11 -g -Wall -Wextra -o unit_test add.o unit_test.o -lgtest -pthread
echo "Running unit tests..."
./unit_test -v --gtest_output=xml:test-results/tests.xml
result=$?
rm -r unit_test add.o unit_test.o
echo "Unit tests completed : $result"
exit $result
