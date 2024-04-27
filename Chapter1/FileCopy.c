
#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
}

/*
What appears to be a character on the keyboard or screen is of course, like everything else, stored internally
just as a bit pattern. The type char is specifically meant for storing such character data, but any integer type
can be used. We used int for a subtle but important reason.

The problem is distinguishing the end of input from valid data. The solution is that getchar returns a
distinctive value when there is no more input, a value that cannot be confused with any real character. This
value is called EOF, for ``end of file''. We must declare c to be a type big enough to hold any value that
getchar returns. We can't use char since c must be big enough to hold EOF in addition to any possible
char. Therefore we use int.

EOF is an integer defined in <stdio.h>, but the specific numeric value doesn't matter as long as it is not the
same as any char value. By using the symbolic constant, we are assured that nothing in the program depends
on the specific numeric value.
*/
