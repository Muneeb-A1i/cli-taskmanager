#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char tasks[5][30] = {"", "", "", "", ""};
// char status[5][30] = {"", "", "", "", ""};


void create_task(){

	/*
		psuedo code:
		1. ask user for task name
		2. save task name in char varaible
		3. calclate task array size (how many elements we have)
		4. go through each element in array to check if it's empty
		5. if empty, put task name in that element, then stop. else, move to next element and check
		6. check if all elements are full, if true then prevent user from adding more
		7. if one is empty, allow task to be added in that element.
	*/

	char task_name[30];
	bool append_task = true;
	bool isFull = false;

	int total_size = sizeof(tasks);
	int single_size = sizeof(tasks[0]);

	int size = total_size / single_size;

	getchar();
	printf("Enter Task Name: ");
	fgets(task_name, sizeof(task_name), stdin);


	if(tasks[0][0] && tasks[1][0] && tasks[2][0] && tasks[3][0] && tasks [4][0] != '\0'){
		isFull = true;
	}

	if(isFull == false){

	 	for(int i = 0; i < size; i++){
               		if(tasks[i][0] == '\0'){
				strcpy(tasks[i], task_name);
				//strcpy(status[i], "Not started");
				append_task = true;

				printf("Task Added!\n");
				printf("\n");

				if(append_task == true){
					break;
				}
                	}

        	};
	}else{

		printf("Table Full!\n");
		printf("\n");

	}
}

void remove_task(){
	bool isTrue = true;

	int total_size = sizeof(tasks);
	int single_size = sizeof(tasks[0]);

	int size = total_size / single_size;

	int choice;

	if(tasks[0][0] && tasks[1][0] && tasks[2][0] && tasks[3][0] && tasks[4][0] == '\0'){
		printf("\n");
		printf("No tasks to remove!\n");
		printf("\n");
	}else{

		printf("\n");
		printf("----- Your Tasks -----\n");

		for(int i = 0; i < size; i++){

			int counter = i+1;

			if(tasks[i][0] != '\0'){
				printf("%d: %s", counter, tasks[i]);
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

	};

	printf("Task Removed!\n");
	printf("\n");

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
			printf("%s\n", tasks[i]);
		}
		else{
			printf("empty\n");
		}
	};

	printf("\n");
}

/*
void mark_complete(){

	bool isTrue = true;

	int choice;

	int total_size = sizeof(tasks);
	int single_size = sizeof(tasks[0]);

	int size = total_size / single_size;

	printf("\n");
	printf("----- Your Tasks -----\n");
	printf("\n");

	for(int i = 0; i < size; i++){

		int counter = i+1;

		if(tasks[i][0] != '\0'){
			printf("%d: %s", counter, tasks[i]);
		};

	};

	while(isTrue){

		printf("\n");

		printf("Which task would you like to mark complete?: ");
		scanf("%d", &choice);

		switch(choice){

			case 1:
				strcpy(status[0], "Complete");
				isTrue = false;
				break;

			case 2:
				strcpy(status[1], "Complete");
				isTrue = false;
				break;

			case 3:
				strcpy(status[2], "Complete");
				isTrue = false;
				break;

			case 4:
				strcpy(status[3], "Complete");
				isTrue = false;
				break;

			case 5:
				strcpy(status[4], "Complete");
				isTrue = false;
				break;

			default:
				printf("ERROR! Enter a number between 1-5 ONLY!!!!\n");

		}
	}

	printf("Task marked complete!\n");

}
*/

void search_task(){

	char choice[30] = "";
	char *pChoice = &choice;


	int total_size = sizeof(tasks);
	int single_size = sizeof(tasks[0]);

	int size = total_size / single_size;

	printf("Enter the name of the task you want to search for:");
	fgets(choice, sizeof(choice), stdin);

	for (int i = 0; i < size; i++)
	{
		if(tasks[0][0] && tasks[1][0] && tasks[2][0] && tasks[3][0] && tasks[4][0] != *pChoice){
			printf("%s may not exist", *pChoice);
		} else{
			printf("\n");
			printf("Task exists at index %d in tasks array\n", i);
			printf("\n");
		}
	}
	

}

void save_file(){

	int total_size = sizeof(tasks);
	int single_size = sizeof(tasks[0]);

	int size = total_size / single_size;

	FILE *pFile = fopen("Tasks.txt", "w");

	if(pFile == NULL){
		printf("ERROR! cant open file\n");
	}

	fprintf(pFile, "----- Your Tasks -----\n");
	fprintf(pFile, "\n");

	for(int i = 0; i < size; i++){
		fprintf(pFile, "%s\n", tasks[i]);
	}

	printf("\n");
	printf("File saved successfully!!!\n");
	printf("\n");

	fclose(pFile);

}


void load_file(){

	int total_size = sizeof(tasks);
	int single_size = sizeof(tasks[0]);

	int size = total_size / single_size;

	FILE *pFile = fopen("Tasks.txt", "r");
	char buffer[1024] = {0};

	if(pFile == NULL){
		printf("Can't open file!");
	}

	while(fgets(buffer, sizeof(buffer), pFile) != NULL){

		for(int i = 0; i < size; i++){

			strcpy(tasks[i], buffer);

		}

	}

	fclose(pFile);

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
				printf("Work in Progress\n");
				//mark_complete();
				break;
			case 5:
				search_task();
				break;
			case 6:
				save_file();
				break;
			case 7:
				load_file();
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
