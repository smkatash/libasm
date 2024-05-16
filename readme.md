### Library libasm.a

**Current project is implemented on Linux distro.**

It is a rewrite of following functions in asm:
```
◦ ft_strlen (man 3 strlen)
◦ ft_strcpy (man 3 strcpy)
◦ ft_strcmp (man 3 strcmp)
◦ ft_write (man 2 write)
◦ ft_read (man 2 read)
◦ ft_strdup (man 3 strdup, you can call to malloc)
```

* rax: Accumulator register. Used for arithmetic operations and as a return value for function calls.
* rbx: Base register. Typically used as a base address for memory operations.
* rcx: Counter register. Often used as a loop counter.
* rdx: Data register. Used in arithmetic operations and for I/O operations.
* rsi: Source index register. Used as a source pointer in string operations.
* rdi: Destination index register. Used as a destination pointer in string operations.
* rsp: Stack pointer register. Points to the top of the stack.
* rbp: Base pointer register. Typically used to reference parameters and local variables on the stack.

* r8, r9, r10, r11, r12, r13, r14, r15: Additional general-purpose registers introduced in x86-64 architecture. Used for various purposes, including function parameters, local variables, and temporary storage.

**Links**:
https://www.cs.uaf.edu/2017/fall/cs301/reference/x86_64.html
https://gist.github.com/justinian/385c70347db8aca7ba93e87db90fc9a6
https://liviaerxin.github.io/blog/cheatsheet-assembly-x64
