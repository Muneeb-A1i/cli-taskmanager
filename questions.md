
# Questions

## Arrays and Strings

What is an array object?

What does it mean when an array object is said to "Decay" as a  pointer to their first element when passed to a function?

What is the difference between a char array, a string, and a two-dimensional char array in C?

Why does storing several task names require two dimensions in an array?

What does each dimension mean in an array such as char tasks[5][30]?

Why must the second array dimension have a specified size when declaring a two-dimensional array?

What would tasks[0], tasks[0][0], and tasks[1] each refer to?

How can I check whether one task slot is empty without accidentally accessing memory that does not belong to the array?

How should I decide the maximum number of tasks and the maximum length of each task name?

What should happen when the user tries to add a task after every task slot is already used?

## Saving user input

task_name holds the user input inside create_task(). How can I save that text in one row of tasks so it is still available after the function ends?

Why does printing task_name work, but does not automatically mean it has been saved in tasks?

When using fgets(), why does the input sometimes contain a newline character, and how should I handle it?

How can I make sure a task name does not exceed the number of characters allowed in a task slot?

Should I use a loop to find an empty task slot, or should I keep a separate variable that tracks the number of saved tasks? What are the advantages and disadvantages of each approach?

## Loops and listing tasks

How should a for loop move through every task slot in the array?

How can the program list only saved tasks and avoid printing empty rows?

Where should break be placed in a switch statement and inside a loop, and how does its behaviour differ in each case?

How can I test that adding two or more tasks stores them in different array positions?

## Errors and warnings

What does “excess elements in char array initializer” mean, and what does it say about the type of array I declared?

What does “array type has incomplete element type char[]” mean?

Why does a zero-size array produce warnings, and why is accessing index 0 unsafe when the array has zero elements?

Why do I get “expected declaration specifiers” when I put some lines in the wrong place?

What is the difference between a compiler error and a compiler warning?

What does sizeof() return, and why does it need a different printf format specifier than an int?

Why can sizeof(tasks) / sizeof(tasks[0]) calculate the number of rows only when used with the actual array, rather than after passing it to a function?

## Program structure

How should I organise create_task(), list_tasks(), and main() so that each function begins and ends correctly?

Which data should be global for this small project, and which data should stay local inside a function?

How can I compile regularly with gcc -Wall -Wextra -pedantic and use the warnings to guide the next thing I investigate?
