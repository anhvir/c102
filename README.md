 c102 Week 03:
=======
Today's Lab:

Open a web browser tab, navigate to LMS and scroll don to the content of
this week's workshop. Then:
  * Check that you understand the workshop discussions
  * See if you still have any questions, including questions related
to the lecture materials last week. If needed, ask a tutor or ask
Google to make sure you understand.
  * Follow the instructions in LMS and do your lab work.

Below is some additional information for the lab's exercises:
  * `Exercise 4.5`: You'd better to start from scratch to make sure
that you can write the opening and closing part of a C program without 
looking at any document. If you are certain that you can do that, you
can get the frame of a program from [here](./frame.c) to save just 
a bit of your time. Suppose that your program is done and running,
here is some notes on testing:
    * You can run your program and supply some inputs using the keyboard,
    * Alternatively, you can test your program with
```bash
./grapher < e45_data.txt
```
  the command will take the data from the file [e45_data.txt](./e45_data.txt) instead of from the keyboard. This is a brilliant way, at least for 
testing programs, because it save our time!
  * `Exercises 4.6` and `4.7` are better to be combined into a single 
program. You can test your program with:
```bash 
  ./e46 < e46_e47_data.txt
``` 
  * `Exercise e56.c`: In this exercise, you'd better to focus on 
writing functions. To save time, you can copy a skeleton for this
program from [here](./e56.c). The skeleton is an unfinished
program, but it's ready to be tested. You can test it with:
```bash
gcc -Wall -o e56 e56.c
./e56 < e56_data.txt
```
and the go back to e56.txt and develop further in the incremental way.



---------------------------------------------------------
**HOW_TO: download/copy the files from this github repository**

If you just want a single file, say, **equation.c**:
  * Click on the link **equation.c** (at the top of this github) and you will see its content 
  * Copy the content and paste into your **jEdit** window, then save as **equation.c** 

If you want to download the whole directory:
  * Download this whole directory by clicking `Clone or Download` --> `Download ZIP`, it will normally be downloaded to your *Downloads* directory under the name **c102** or **c102.ZIP** (it might also have a suffix **-master**)
  * Then copy or move the directory **c102** from **Downloads** to under your working directory **week2/**
  * If the downloaded **c102** has the extension **.ZIP**, you likely need to expand the zipped file with command **unzip c102.ZIP**



-------------------------------------------------------------
by avo@unimelb.edu.au, for use in unimelb COMP10002.

For a teaching week, a new content is (normally) uploaded at the very beginning of the week, and that content is removed one week later.
