#include <stdio.h>

/* Program designed to implement a calculator
 * able to add, multiply, substract and divide integers.
 * *****************************************************
 * Author 		Dept. 		Date 		Notes
 * Antoine Bonnet	Comp.Science	Feb. 17 2020    Initial version
 */

int main(int argc, char *argv[]){
	int x, y, result;
	char* op;
	int atoi();
	if (argc != 4){
		printf("You have %d arguments\n", argc);
		puts("Error: usage is simplecalc <x> <op> <y> \n");
		return 1;
	}
	else {
		op = argv[2];
		x = atoi(argv[1]);
		y = atoi(argv[3]);
		switch(op[0]){
			
			case '+':
				result = x+y;
				printf("%d\n", result);
				break;
			case '-': 
				result = x-y;
				printf("%d\n", result);
				break;
			case '*':
                                result = x*y;
                                printf("%d\n", result);
                                break;
			case '/':
                                result = x/y;
                                printf("%d\n", result);
                                break;
			default:
				printf("%s not a valid operator\n", op);
				return 2;
		}
	
	}}
