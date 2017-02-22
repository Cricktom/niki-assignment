backend_assignment.c file calculate number of binary strings of given length without having consecutive zeroes.

compile it using command "gcc backend_assignment.c -lm" (in linux)

If we observe this question we will find a pattern that the number of strings
are following fibonacci sequence. So the number of strings of length 'n' will
(n+2)th number.

But here the range of n is very large so we cant find (n+2)th fibonacci number
iteratively  by using a loop, so we exploited the property of fibonacci numbers.

after 4th number every two consecutive fibonacci number are always in a approximately constant ratio which is known as
golden ratio 'phi = 1.61803391'
