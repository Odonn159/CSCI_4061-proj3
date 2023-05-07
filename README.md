# CSCI_4061-proj3
Modified Swish with Pipes  

This project will explore the use of pipes for inter-process communication. It is often useful to launch and coordinate among several different processes when trying to accomplish a particular task. We will see two useful applications of this approach in Project 3.  


In Part 1 of the project, you will build a simple system for processing several input files in parallel, by using one process to read and process each of the files. This kind of approach, in contrast to a sequential approach in which each file is read and processed one after another, is becoming increasingly crucial to achieving acceptable performance on modern hardware. On a computer with multiple CPU cores, for example, each core can execute a different process, allowing useful work to be completed in parallel.  


In Part 2 of the project, you will extend the swish command-line shell from Project 2 to execute pipelined programs. This allows one to execute a sequence of programs in which each program consumes input from its predecessor and sends output to its successor. This was one of the key contributions of the original Unix operating system: the ability to compose small, simple tools to achieve a larger goal. This contribution was made possible thanks to the use of pipes in combination with the traditional fork()/dup2()/exec() combination we saw in Project 2.  


This project will focus on a few important systems programming topics:  


Text file input and parsing  
Creating pipes with the pipe() system call  
Using pipe file descriptors in combination with read() and write() to coordinate among several processes  
Executing program pipelines using pipe() and dup2() along with the usual fork() and exec()  
