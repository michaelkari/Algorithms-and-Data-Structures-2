Michael Karimizadeh

500831189

This program is used to solve the Towers of Hanoi.
Not only does it solve the Towers of Hanoi, it allows for multiple ways to solve it.
>towers
This command has only one argument and solves the tower with 3 disks, from 1 to 3
>towers n
This command has two arguments and solves the tower with n disks, from 1 to 3
>towers n x y
This command has 4 arguments and solves the tower with n disks, from x to y

 



Requirement 1

Suppose towers(5,2,3) is invoked


1. How will the first recursive call to towers() be invoked? 


>towers(n-1, from, spare);

>towers(4,2,1)



2. How many recursive calls to towers() will be made before this first recursive call actually returns to the initial invocation?


>5



3.Once towers(5, 2, 3) has invoked its first recursive call to towers() and this invocation has returned, what will be printed to stdout? 


>2 3



4.How will the second recursive call to towers() be invoked


>towers(n-1, from, spare);

>towers(3,2,3)
