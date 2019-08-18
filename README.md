c102 Week 4:
=======
This week Lab: 

  * Make sure you understand the concept of arrays, the relationship
 between arrays and pointers, then start with implementing Exercise 6.9.
You can use the skeleton [`e69.c`](./e69.c).
 
  * Make sure you understand the concept of sorting and 
 the insertion sort algorithm. 
To understand the latter, you can use program 
[`insertion_sort.c`](./insertion_sort.c) and the data file
[`int_array.txt`](./int_array.txt), which are a complete program 
and data for inputting an array and printing out
the sorted array.
The program also demonstrates how insertion works. Use the program with
```bash
gcc -Wall -o insertion_sort insertion_sort.c
./insertion_sort < int_array.txt
```
  * Implement Exercise 7.3. You can start with 
[`insertion_sort.c`](./insertion_sort.c) and add a few lines to
remove the duplicate elements. If you want some hints, you can used
the skeleton [`e73.c`](./e73.c).

  * Implement exercise 7.4. You can use [`e74_Sol_1.c`](./e74_Sol_1.c) 
as a skeleton for the trivial solution of exercise 7.4. 
  * You can use [`e74_Sol_2.c`](./e74_Sol_2.c) for the second 
implementation of Exercise 7.4. Here we suppose that all elements
of the array a) are possitive, and b) have an upper bound (say, 1000).
You need to invent a smart solution based on the above 2 constraints on the
input data.
  * Note that the file [`int_array.txt`](./int_array.txt) can 
serve as an input data file for
all of above programs. 

---------------------------------------------------------
**HOW_TO: download/copy the files from this github repository**

If you just want a single file, say, `e69.c`:
  * Click on `e69.c` and you will see its content 
  * Copy the content and paste into your jEdit window, then save as `e69.c` 

If you want to download the whole directory:
  * Download this whole directory by clicking `Clone or Download` --> `Download ZIP`, it will normally be downloaded to your `Downloads` folder under the name `c102-master` or `c102-master.ZIP`
  * Then copy or move the folder `c102` from `Downloads` to under your working folder `week3/`
  * If the downloaded `c102-master` has the extension `.ZIP`, you likely need to expand the zipped file with command `unzip c102-master.ZIP`

---------------------------------------------------------
by avo@unimelb.edu.au, for use in unimelb COMP10002 workshops.

For a teaching week, a new content is (normally) uploaded at the very beginning of the week, and that content is removed one week later.
