Shell is basically a way to interact with the kernal of the operating system, in my case the os is arch linux and the kernal is Linux 7.3.4-arch1-2, 

The basic logic:

User enters command
        |
        v
Split input into tokens
        |
        v
Check first token
        |
        v
Is it a built-in?
      /   \
    Yes    No
     |      |
  Execute  Execute
  builtin  external program by creating a child process (fork + exec + wait)


# fork()
                    printf("A\n");
                         |
                         |
                      fork()
                    /       \
                   /         \
                 P0           P1
              (Parent)      (Child)
                 |             |
          printf("B")    printf("B")
                 |             |
               fork()        fork()
              /    \         /    \
             /      \       /      \
           P0       P2    P1       P3
           |        |      |        |
       printf  printf  printf  printf
         ("C")   ("C")   ("C")   ("C")


          FINAL NUMBER OF PROCESSES = 4

          A = 1 time
          B = 2 times
          C = 4 times


# execve()


