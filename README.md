 c102 Week 02:
=======

Instructions for today's lab
----------------------------
1. Open a new tab in your browser (say, Chrome), navigate to the LMS page of comp10002 for late use.
1. Start **jEdit** program, it will open a window in which you can edit and then save your programs. 
1. Start **minGW** program, it will open another window. This window represents a terminal where you can run unix-style commands (such as compiling, running your own programs).  
1. Now, spend some time to resize and re-arrange your 3 windows (**Chrome**, **jEdit**, **minGW**) so that at the same time you can fully see both **Chrome** and **minGW** windows, and when in need, see both **jEdit** and **minGW** windows. While fully seeing all 3 windows at the same time is desirable, it is not practical on our small screen. 
1. **Learn some unix commands:** In the **minGW** window try the following commands. You will need to use these commands (there are only three of them: `cd`, `ls`, `mkdir`) very frequently. 


Command | Explaination and notes
------- | ------------
`cd h:` | make your `H:` driver be the "current working folder" (CWF)
`ls`    | display content of CWF
`mkdir Projects` | make a new folder named `Projects`
`cd Projects` | change CWF to `Project`. Note: only type `cd P` then press \<TAB\>, hich will autocomplete your command
`mkdir comp10002` | make a new folder
`cd comp10002` | change CWF, remember to employ \<TAB\> for autofilling
`mkdir Week2`  | make a new folder 
`cd Week2`     |
`ls`           | you will see that there is no content. You will place all files of this week in this folder.

Then
----
1. Implement Exercise 1.2: Edit, save, compile, and run `helloworld.c`. For that, follow the steps in `LMS` --> `Working with jEdit and gcc`
1. Implement exercise 2.8. If you still don't have a copy of the textbook, you can click [here](https://people.eng.unimelb.edu.au/ammoffat/teaching/10002/e/e02-08.tiff). Note that the exercies are supplied only for the first 
Advice: Buy the book ASAP, it's a good investment :smile: 
1. Implement exercise 2.4. A quick way is to use the skeleton e24.c by
   1. Click on **e24.c** [above](./equation.c)
   1. Copy the content of that **e24.c** and paste into your **jEdit** window
   1. Save as **H:/Projects/comp10002/Week2/e24.c**
   1. Complete and test your **e24.c** 
1. Follow the advise below


The best way of using the material in this github site
--------------------------------------------------
  * Download this whole **c102** directory by clicking **Clone or Download** --> **Download ZIP**, it will normally be downloaded to your **Downloads** directory
  * Then copy the directory **c102** from **Downloads** to your working directory, i.e. to under H:/Projects/comp10002/Week2/
  * Compile, run, and explore *guessNumber.c*, have some fun
  * Note that *explained_guessNumber.c* is the same as *guessNumber.c*, but also has heap of explainations, but don't try hard to understand everything 
  * Repair and complete *equation.c* if you haven't done so 

Important Homework
-----------------
1. If you haven't installed minGW/jEdit on your laptop, do it at home ASAP and within this week. Instruction for installation is available at `LMS` --> `Compiling and Editing` --> `install gcc and jEdit on your own computer` which is [here](https://app.lms.unimelb.edu.au/webapps/blackboard/content/listContentEditable.jsp?content_id=_7226561_1&course_id=_391850_1&mode=reset) 
1. IMPORTANT NOTE FOR FUTURE: During installing minGW, when the dialog box appears (in Step 3), also scroll down to find and mark the item "msys-openssh bin" for installation. This will help you to connect your laptop with the university's network and other computers later.
1. ANOTHER IMPORTANT NOTE FOR FUTURE:For convenience of working from home, you also need VPN. If you don't know what and/or how, please ask Google. A simple query like "VPN unimelb" could be a good start.



---------------------------------------------------------
**HOW_TO: download/copy the files from this github repository**

If you just want a single file, say, `e6.9.c`:
  * Click on `e6.9.c` and you will see its content 
  * Copy the content and paste into your jEdit window, then save as `e6.9.c` 

If you want to download the whole directory:
  * Download this whole directory by clicking `Clone or Download` --> `Download ZIP`, it will normally be downloaded to your `Downloads` folder under the name `c102-master` or `c102-master.ZIP`
  * Then copy or move the folder `c102` from `Downloads` to under your working folder `week3/`
  * If the downloaded `c102-master` has the extension `.ZIP`, you likely need to expand the zipped file with command `unzip c102-master.ZIP`



-------------------------------------------------------------
by anhvir@gmail.com, for use in unimelb COMP10002

For a teaching week, a new content is (normally) uploaded at the very beginning of the week, and that content is removed one week later.
