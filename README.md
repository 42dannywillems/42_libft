#42 libft

DOCUMENTATION MUST BE DONE.

42_libft is a C library containing functions which stdlib implements. This is
the first project in 42.

Unlike stdlib, 42_libft has data structures implementations such as stacks,
single and double linked list, tree, etc.

###Version 1.2 (v1.2)
* print in color: *put* functions with err print in red, succ in green and info
  in cyan.
* Bug fixed.
	* Strncmp and ft_strncpy had bad implementation in some cases.
	* ft_atoi and all put number functions allow min_int.
	* memccpy had bad implementation when len is the length of src.

###Version 1.1 (v1.1)

####New :
* Data structures
	* pop in Stack implementation
	* del_at in Single Linked List implementation (delete the ith node)
	* Sorted Single Linked List :
		* Same as slist :
			create, pop, clear, delete, delete_nth, delete_first, size,
			isempty, at, find.
		* Independant implementation :
			insert, merge.

###Version 1.0 (v1.0)

####New :
* Some standard functions
	atoi, bzero, memalloc, memccpy, memchr, memcmp, memcpy, memdel, memmove,
	memrchr, memset, strcat, strchr, strcmp, strcpy, strdup, strequ,
	strlcat, strlen, strncat, strnchr, strncmp, strncpy, strndup, strnequ,
	strnstr, strrchr, strstr, tolower, toupper.
* Single Linked List implementation
	* Create, add, clear, delete (first), at, find, find_max (find_min),
	  isempty, merge, print (data type = char *), push_front, reverse, size,
	  toarray (data type = char *).
* Stack implementation
	* Create, clear, size, push, merge, print (data type = char *).
* Print functions (data type = char *) using read system call, in a file
  descriptor (can be STDOUT).
	* put string [with endl] (ft_putstr, ft_putendl)
	* put number (int) [with endl] (ft_putnbr[endl])
	* put character [with endl] (ft_putchar[endl])
	* put n times a character, a string [with endl] (ft_putnchar[endl], ft_putnstr, ft_putnendl)
* Strings manipulations
	* Split a string relatively to a character or a string (ft_split[_str]). Particulary, split a string relatively to whitespaces (ft_splitwhitespaces).
	* Realloc a string with a precise size. (ft_str_realloc)
	* Join two strings [and free first aguments] (ft_strjoin[_free])
	* Apply a function on each character of a string. (ft_striter[i], ft_strmap[i])
	* Transform an array of string in a single string depending on a join string. (ft_array_join)
	* Check character type (alpha, numeric, ascii, etc).
	* Get a substring of a string. (ft_substring)
	* Free a string (ft_strdel)
* Read files
	* Get next line from a file. Multiple file descriptors can be used at the same time. (ft_get_next_line)

####To do :
* Data structures
	* Double Linked List implementation
	* Queue implementation
	* Binary Tree implementation
	* Binary search Tree implementation
	* AVL tree implementation
	* Heap implementation
* Sort algorithms
	* Heap sort
	* Quick sort

