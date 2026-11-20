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
  builtin  external program (fork + exec + wait)
