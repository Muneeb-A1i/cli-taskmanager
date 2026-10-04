#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isTrue = true;

char tasks[5][30] = {"", "", "", "", ""};

void create_task(){
	char task_name[30];
	//int size = sizeof(task_name);
	
	getchar();
	printf("Enter Task Name: ");
	fgets(task_name, sizeof(task_name), stdin);

	printf("Task added!\n");

	printf("\n");
	
	int total_size = sizeof(tasks);
	int single_size = sizeof(tasks[0]);
	
	int size = total_size / single_size;

	bool  append_task = false;

	 for(int i = 0; i < size; i++){
                if(i >= size){
			printf("ERROR! Out of bounds!\n");
			printf("Only %d tasks can be added!\n", size);
			printf("You tried adding %d\n", i);
			break;
		}
		else if(tasks[i][0] == '\0'){
			strcpy(tasks[i], task_name);
			append_task = true;
			
			if(append_task == true){
				break;
			}
                }
        };
}

void list_tasks(){
	int total_size = sizeof(tasks);
        int single_size = sizeof(tasks[0]);

        int size = total_size / single_size;

	printf("\n");
	printf("----- To Do -----\n");
	printf("\n");

	for(int i = 0; i < size; i++){
		if(tasks[i][0] != '\0'){
			printf("%s", tasks[i]);
		}
		else{
			printf("empty\n");
		}
	};

	printf("\n");
}

int main(void){
	while(isTrue){
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
				isTrue = false;
				printf("Goodbye!\n");
				break;
			default:
				printf("ERROR! ENTER A NUMBER BETWEEN 1-8 ONLY!!!\n");



		}
	}
	printf("\n");
	return 0;

}
