#!/bin/bash
gcc -c *c
ar rc liball.a *.o
gcc -L. -lall -o new_liball
