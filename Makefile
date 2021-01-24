OBJS := main.o Warrior.o
CC := g++
CFLAGS := -Wall -std=c++17



run_cpps: $(OBJS)
	$(CC) $(CFLAGS) -o a.out $(OBJS)

Warrior.o: Warrior.cpp Warrior.h
	$(CC) $(CFLAGS) -c Warrior.cpp

main.o: main.cpp Warrior.h 
	$(CC) $(CFLAGS) -c main.cpp

Install_Valgrind_and_Cppcheck:
	sudo apt-get install -y valgrind cppcheck

Warnings:
	cppcheck *.cpp --enable=warning --error-exitcode=1

Build:
	cd test && cmake CMakeLists.txt && make 

Run_tests:
	cd test/ && ./runTests

Install_doxygen:
	sudo apt-get install doxygen

Install_graphviz:
	sudo apt-get install graphviz

Creating_documentation:
	doxygen doxconf