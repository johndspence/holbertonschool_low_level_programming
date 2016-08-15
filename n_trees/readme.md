To compile on ubuntu 14.04 for main_for_insert.c:

gcc -Wall -Werror -Wextra -pedantic main_for_insert.c free_str_array.o ntree_free.c ntree_insert.c ntree_print.o string_split.o

To test for leaks:
valgrind ./a.out

To compile on ubuntu 14.04 for main_for_path_exists.c:
gcc -Wall -Werror -Wextra -pedantic main_for_path_exists.c free_str_array.o ntree_free.c ntree_insert.c ntree_print.o string_split.o path_exists.c

To test for leaks:
valgrind ./a.out
