stage1 : recursive_fib.o print_fib.o
	clang recursive_fib.o print_fib.o -o stage1

stage2 : iterative_fib.o print_fib.o
	clang iterative_fib.o print_fib.o -o stage2

stage3 : personalized_fib.o second_main.o
	clang personalized_fib.o second_main.o -o stage3

personalized_fib.o : personalized_fib.c
	clang -Wall -Wextra personalized_fib.c -c

second_main.o : second_main.c
	clang -Wall -Wextra second_main.c -c

iterative_fib.o : iterative_fib.c
	clang -Wall -Wextra iterative_fib.c -c

recursive_fib.o : recursive_fib.c
	clang -Wall -Wextra recursive_fib.c -c

print_fib.o : print_fib.c
	clang -Wall -Wextra print_fib.c -c

clean :
	rm recursive_fib.o print_fib.o iterative_fib.o personalized_fib.o second_main.o stage1 stage2 stage3
