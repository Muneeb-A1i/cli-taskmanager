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

	switch(choice){
		case 1:
			printf("Task added!\n");
			break;
		case 2:
			printf("Task removed\n");
			break;
		case 3:
			printf("List of Tasks\n");
			break;
		case 4:
			printf("Task marked complete\n");
			break;
		case 5:
			printf("Searched for a task\n");
			break;
		case 6:
			printf("Saved!\n");
			break;
		case 7:
			printf("Loaded successfully!\n");
			break;
		default:
			printf("ERROR! ENTER A NUMBER BETWEEN 1-7 ONLY!!!\n");



}
	return 0;
}
