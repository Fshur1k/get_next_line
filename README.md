# get_next_line
_This project has been created as part of the 42 curriculum by **ofedota**_
## Description
This project implements a function that returns a line read from a file descriptor.

**The project has several requirements:**
- The function must return the line that was read. If there is nothing left to read or if an error occurs, it must return `NULL`.
- The function works with both files and standard input.
- The returned line must include the terminating `\n` character, except when the end of the file is reached and the file does not end with a newline.
- Using `libft` is forbidden.
- `lseek()` is forbidden.
- Global variables are forbidden.

## Instructions:
- To compile project with use command ```cc -Wall -Wextra -Werror -D BUFFER_SIZE=5 main.c get_next_line.c get_next_line_utils.c```
- where ```BUFFER_SIZE``` optional but can be changed by user
- ```main.c``` file with test program
- ```get_next_line``` return one line at time.

## Resources:
Project has ```get_next_line.c``` that does main logic and additional files:
- ```read_and_stash``` add all possible charachters from file discriptor to ```static stash``` untill it finds new line
- ```extract_line``` copies new line to new variable ```line``` and returns it
- ```clean_stash``` clean static variable due to new line and keeps remaining after ```\n```
