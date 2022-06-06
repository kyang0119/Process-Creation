# Process-Creation

project requirements : 

1. Try to familiarize yourself with the Unix “fork” system call for process creation and the basic process
related concepts. Write a program “admin.c” or “admin.cpp” to use fork() to create a child process. Let the
parent process be the “Admin” process. From the Admin process, fork a process that runs “cal.exe” you
created earlier. In the Admin process, print out:
Admin: returned-pid, PID

2. The returned-pid is the value returned from fork(). PID is the parent process ID and you can use getpid()
to obtain it. Both returned-pid and PID are integers. Do not forget to use “wait” system call to wait for the
child process (cal.exe) to finish. 


Compile commands : 

gcc -c admin.c
gcc -o admin admin.o
./admin
