pi: pi.cpp
	g++ -O3 -Wall -Wextra -pedantic pi.cpp -o pi.o
clean:
	rm *.o
