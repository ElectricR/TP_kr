all: main.o employee.o
	clang++ employee.o main.o -o main
	pdflatex Контрольная\ работа.tex
	zip Контрольная\ работа.zip Контрольная\ работа.pdf main.cpp employee.hpp employee.cpp Screenshot.png

employee.o: employee.cpp employee.hpp
	clang++ employee.cpp -c -o employee.o

main.o: main.cpp employee.hpp
	clang++ main.cpp -c -o main.o

c:
	rm *.o main *.aux *.log

.PHONY: all c

