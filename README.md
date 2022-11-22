# Prime Factorization Calculator
---------------------------------
This program decomposes numbers into prime numbers.\
The code that parses and parses the number is created using while and for loops.\
For Example:
```c
while (num != 1) {
	while (num % i == 0) {
		for (num = num; num % i == 0; num = num / i)
			printf("	%d / %d = %d\n", num, i, num / i);
	}
	i++;
}
```
In this case, `num` is the number and `i` the divisor.
