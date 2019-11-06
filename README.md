# 21 projects

This repository consists of the projects that were done by me in the 21 programming school.

* libft
* get next line
* fillit


## libft
My first own library. The aim of this project was to code a C library regrouping usual functions that
we’ll be allowed to use in all our other projects. Only the following libc functions were allowed : malloc(3), free(3) and write(2).

## get_next_line
The function get_next_line returns a line ending with a newline, read from a file descriptor. Sounds easy, but there are some difficulties.

First, calling get_next_line in a loop will then allow to read the text available on a file descriptor one line at a time until the end of the text, no matter the size of either the text or one of its lines.

Second, it is able to manage multiple file descriptor with your get_next_line.

For example, if the file descriptors 3, 4 and 5 are accessible for reading, then you can call get_next_line once on 3, once on 4, once again on 3 then once on 5 etc. without losing the reading thread on each of the descriptors.

Third, the only allowed functions are read, malloc, free, open and close.

## fillit
The goal of this project is to find a way to assemble a given Tetriminos set altogether in the smallest possible square (using only open, close, malloc, free, read and write).
