#include <stdio.h>

char create_task(){
	char task_name[];
	
	printf("Enter Task Name: ");
	fgets(task_name, sizeof(task_name), stdin);

	return task_name;
}

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

	switch(choice){
		case 1:
			create_task();
			break;
		case 2:
			
			break;
		case 3:
			
			break;
		case 4:
			
			break;
		case 5:
			
			break;
		case 6:
			
			break;
		case 7:
			
			break;
		default:
			printf("ERROR! ENTER A NUMBER BETWEEN 1-7 ONLY!!!\n");



}
	return 0;
}
