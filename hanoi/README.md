# Facts

- It seems that column A is empty, except the operated pans.
- For 3 pans, we need 7 steps.
- For 4 pans, we need 7 + 1 + 7 steps.
- For n pans, we need f(n - 1) + 1 + f(n - 1) steps

# Tail recursion

- For 64 pans, we need 62 system calls. I think it is not too big to store. So tail resursion is not neccessary.
