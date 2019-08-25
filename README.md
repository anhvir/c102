c102 Week 4:
=======
This week Lab: 
  * For this week, you'd better to write programs and/or functions on paper.
That would be a good practice for the MST next week. If you really want
to test your functions on computers, you can use the supplied scaffoldings
for exercises 7.6-7.9. In each scaffolding, the main() function and
the input/output parts are already written, and your job is just to fill
in the function required by the respective exercise. Note that you can
use the data file `int_array.txt` for testing your program. For example,
you can test `e77.c` (for Exercise 7.7) with
```bash
./e77 < int_array.txt
```
  * Click [here](./e76.c) for a scaffolding for `Exercise 7.6`. Note that 
if you want to test your recursive implementation, you should change
the line 
```c
#if 1
```
in `e76.c` into:
```c
#if 0
```
The `#if 1` is a compiler directive, telling the compiler to ignore
 everything in between `#else` and `#endif`. Naturally `#if 0` tells
the compiler to ignore everything in between `#if 0` and `#else`.

  * Click [here](./e77.c) for a scaffolding for `Exercise 7.7`.
  * Click [here](./e78.c) for a scaffolding for `Exercise 7.8`. 
 Note that this scaffolding makes use of two arguments `argc` and `argv`
of the `main()` function. 
  * Click [here](./e79.c) for a scaffolding for `Exercise 7.9`. 



---------------------------------------------------------
**HOW_TO: download/copy the files from this github repository**

If you just want a single file, say, `e69.c`:
  * Click on the link `e69.c` (the link is provided at the top part of
this page) and you will see the formatted content of the file,
  * Click on the `Raw` button to see the plain text content, 
  * Copy the content and paste into your jEdit window, then save as `e69.c`. 

If you want to download the whole directory:
  * Download this whole directory by clicking `Clone or Download` --> `Download ZIP`, it will normally be downloaded to your `Downloads` folder under the name `c102` or `c102-master`
  * Then copy or move the folder `c102` from `Downloads` to under your working folder `week3/`
  * If the downloaded `c102-master` has the extension `.ZIP`, you likely need to expand the zipped file with command `unzip c102-master.ZIP`

---------------------------------------------------------
by avo@unimelb.edu.au, for use in unimelb COMP10002 workshops.

For a teaching week, a new content is (normally) uploaded at the very beginning of the week, and that content is removed one week later.
