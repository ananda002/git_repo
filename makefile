ABC.exe : fact.o palindrome.o main.o
	gcc -o ABC.exe fact.o palindrome.o main.o
fact.o : fact.c
	gcc -c fact.c
palindrome.o : palindrome.c
	gcc -c palindrome.c
main.o : main.c
	gcc -c main.c
