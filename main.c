#include <stdio.h>
#include <string.h>

char tasks[0][30] = {};

void create_task(){
	char task_name[30];
	//int size = sizeof(task_name);
	
	getchar();
	printf("Enter Task Name: ");
	fgets(task_name, sizeof(task_name), stdin);
	
	printf("Task Name: %s\n", task_name);
	//printf("%d", size);
}

void list_tasks(){
	printf("%s\n", tasks[0]);
}

int main(void){

	printf("total bytes:  %d\n", sizeof(tasks));
	printf("byte of each element:  %d\n", sizeof(tasks[0]));
	
	int size = sizeof(tasks) / sizeof(tasks[0]);

	printf("Number of elements in array: %d\n", size);
/*
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
			for(int i = 0; i < 3; i++){
			printf("%s\n", tasks[i]);
}
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

*/
}
