 c102 Week 02:
=======

Instructions for today's lab
----------------------------
1. Open a new tab in your browser (say, **Chrome**), navigate to the LMS page of comp10002 for late use.
1. Start **jEdit** program, it will open a window in which you can edit and then save your programs. 
1. Start **minGW** program, it will open another window. This window represents a terminal where you can run unix-style commands (such as compiling, running your own programs).  
1. Now, spend some time to resize and re-arrange your 3 windows (**Chrome**, **jEdit**, **minGW**) so that at the same time you can fully see both **Chrome** and **minGW** windows, and when in need, see both **jEdit** and **minGW** windows. While fully seeing all 3 windows simultaneously is desirable, it is not practical on our small screen. 
1. **Learn some unix commands:** In the **minGW** window try the following commands. You will need to use these commands (there are only three of them: `cd`, `ls`, `mkdir`) very frequently. 
Note that in the explanation below, a *directory* is just a file folder.


Command          | Explanation and notes
---------------- | ------------
`cd h:` | make your `H:` driver be the "current working directory" (CWD)
`ls`    | display content of CWD
`mkdir Projects` | make a new directory named `Projects`
`cd Projects` | change CWD to `Project`. Note: only type `cd P` then press \<TAB\>, for autofilling
`mkdir comp10002` | make a new directory
`cd comp10002` | change CWD, remember to employ \<TAB\> for autofilling
`mkdir Week2`  | make a new directory 
`cd Week2`     |
`ls`           | you will see that there is no content. You will place all files of this week in this directory.

Then
----
1. *Have 5 minutes of fun* by copying a content of a C program, **guessNumber.c**, to your **jEdit** window, and save it as **H:/Projects/comp10002/Week2/guessNumber.c**, then compile and run it. Click [here](./guessNumber.c) to get the content of **guessNumber.c**. For compiling and running, use the **minGW** window, compiling with `gcc -Wall -o guessNumber.exe guessNumber.c`, and running with `guessNumber`. If you are successful with this fun, you can skip step 2 and move directly to step 3. 
1. *Implement Exercise 1.2*, that is, edit, save, compile, and run **helloworld.c**. First, switch to the **jEdit** window, type in the content of **helloworld.c**, then save it as **H:/Projects/comp10002/Week2/helloworld.c**. Note that to be able to save on **H:**, you must click on **root** when choosing the filename. You can copy **helloworld.c** from [here](https://people.eng.unimelb.edu.au/ammoffat/ppsaa/c/helloworld.c) 
1. *Implement exercise 2.8:* If you still don't have a copy of the textbook, you can click [here](https://people.eng.unimelb.edu.au/ammoffat/teaching/10002/e/e02-08.tiff). Note that the exercises are supplied only for the first 
2 workshops.
*Advice:* Buy the book ASAP, it's a good investment :smile: 

1. *Implement exercise 3.7:* If you still don't have a copy of the textbook, you can click [here](https://people.eng.unimelb.edu.au/ammoffat/teaching/10002/e/e03-07.tiff).

1. If you still have time, follow the advice below. You can also do it at home.


The best way of using the material in this github site
--------------------------------------------------
  * Download this whole **c102** directory by clicking `Clone or Download` --> `Download ZIP`, it will normally be downloaded to your **Downloads** directory
  * Then copy the directory **c102** from **Downloads** to your working directory, i.e. to under **H:/Projects/comp10002/Week2/**
  * Compile, run, and explore [**guessNumber.c**](./guessNumber.c), have some fun
  * Note that [**explained_guessNumber.c**](./explained_guessNumber.c) is the same as **guessNumber.c**, but also has heap of explanations, but don't try hard to understand everything 
  * Repair and complete [**equation.c**](./equation.c). if you haven't done so 

Important Homework
-----------------
1. If you haven't installed **minGW**/**jEdit** on your laptop, do it at home ASAP and within this week. Instruction for installation is available at `LMS` --> `Compiling and Editing` --> `install gcc and jEdit on your own computer` which is [here](https://app.lms.unimelb.edu.au/webapps/blackboard/content/listContentEditable.jsp?content_id=_7226561_1&course_id=_391850_1&mode=reset) 
1. IMPORTANT NOTE FOR FUTURE: During installing **minGW**, when the dialog box appears (in Step 3), also scroll down to find and mark the item `msys-openssh bin` for installation. This will help you to connect your laptop with the university's network and other computers later.
1. ANOTHER IMPORTANT NOTE FOR FUTURE:For convenience of working from home, you also need **VPN**. If you don't know what and/or how, please ask Google. A simple query like "VPN unimelb" could be a good start.



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
