#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char tasks[5][30] = {"", "", "", "", ""};

void create_task(){
	char task_name[30];
	
	getchar();
	printf("Enter Task Name: ");
	fgets(task_name, sizeof(task_name), stdin);
	
	int total_size = sizeof(tasks);
	int single_size = sizeof(tasks[0]);
	
	int size = total_size / single_size;

	bool append_task = false;

	 for(int i = 0; i < size; i++){
               if(tasks[i][0] == '\0'){
			strcpy(tasks[i], task_name);
			append_task = true;

			printf("Task Added!\n");
			printf("\n");

			if(append_task == true){
				break;
			}
                }
		else if (tasks[4][0] != '\0'){
			printf("ERROR OUT OF BOUNDS!\n");
			printf("\n");
			break;
		}
        };
}

void remove_task(){
	bool isTrue = true;

	int choice;

	int total_size = sizeof(tasks);
	int single_size = sizeof(tasks[0]);

	int size = total_size / single_size;

	int counter = 1;

	printf("\n");
	printf("----- Your Tasks -----\n");
	printf("\n");

	for(int i = 0; i < size; i++){

		if(tasks[i][0] != '\0'){
			printf("%d: %s", counter, tasks[i]);
			counter++;
		};

	};

	while(isTrue){

		printf("\n");

		printf("Which task would you like to remove?: ");
		scanf("%d", &choice);

		switch(choice){

			case 1:
				strcpy(tasks[0], "");
				isTrue = false;
				break;

			case 2:
				strcpy(tasks[1], "");
				isTrue = false;
				break;

			case 3:
				strcpy(tasks[2], "");
				isTrue = false;
				break;

			case 4:
				strcpy(tasks[3], "");
				isTrue = false;
				break;

			case 5:
				strcpy(tasks[4], "");
				isTrue = false;
				break;

			default:
				printf("ERROR! Enter a number between 1-5 ONLY!!!!\n");

		}
	}

	printf("Task Removed!\n");

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
	bool isTrue = true;

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
				remove_task();
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
