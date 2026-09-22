#include <stdio.h>



int main(void){

	int choice;

	printf("----- Task Manager -----\n");
	printf("1. Add Task\n");
	printf("2. Remove Task\n");
	printf("3. List Tasks\n");
	printf("4. Mark Task Complete\n");
	printf("5. Search Tasks\n");
	printf("6. Save\n");
	printf("7. Load\n");

	printf("Choose an option: ");
	scanf("%d", &choice);

	printf("%d\n", choice);
	return 0;
}
