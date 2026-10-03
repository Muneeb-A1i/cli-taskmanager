#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char tasks[5][30] = {"", "", "", "", ""};

void create_task(){
	char task_name[30];
	//int size = sizeof(task_name);
	
	getchar();
	printf("Enter Task Name: ");
	fgets(task_name, sizeof(task_name), stdin);
	
	int total_size = sizeof(tasks);
	int single_size = sizeof(tasks[0]);
	
	int size = total_size / single_size;

        for(int i = 0; i < size; i++){
                if(tasks[i][0] == '\0'){
			strcpy(tasks[i], task_name);
                }
        };
}

void list_tasks(){
	int total_size = sizeof(tasks);
        int single_size = sizeof(tasks[0]);

        int size = total_size / single_size;

	for(int i = 0; i < size; i++){
		if(tasks[i][0] != '\0'){
			printf("%s", tasks[i]);
		}
		else{
			printf("element %d is empty", i);
		}
	};
}

int main(void){
	while(true){
		int choice;

		printf("----- Task Manager -----\n");
		printf("1. Add Task\n");
		printf("2. Remove Task\n");
		printf("3. List Tasks\n");
		printf("4. Mark Task Complete\n");
		printf("5. Search Tasks\n");
		printf("6. Save\n");
		printf("7. Load\n");
		printf("8. Exit\n");

		printf("Choose an option: ");
		scanf("%d", &choice);

		switch(choice){
			case 1:
				create_task();
				break;
			case 2:
				
				break;
			case 3:
				list_tasks();
				break;
			case 4:
				
				break;
			case 5:
				
				break;
			case 6:
				
				break;
			case 7:
				
				break;
			case 8:
				break;
			default:
				printf("ERROR! ENTER A NUMBER BETWEEN 1-7 ONLY!!!\n");



		}
	}
	return 0;

}
