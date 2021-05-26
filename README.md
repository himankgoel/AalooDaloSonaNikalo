# Stress Testing for Competitive Programming

This repository is for testing a wrong solution with a correct brute force solution. Any wrong solution (in competitve programming) failing on corner cases which many times cannot be found.Using this can be found given your brute force solution in correct.

# Installation

- You will need to have Ubuntu terminal installed for Windows or Mac
- Install mingw for compiling C++ code.
- Clone this repo in your local system.

# Usage

- This script is primarily for C++ users, but can be extended to other languages as well.
- Put your incorrect solution in solution.cpp and brute force or correct solution in brute.cpp
- Now, in gen.cpp, setup the random generation of input according to format desired. There are methods to generate trees,graphs, strings and arrays in a given range.
- Now, in your terminal, run command :

```
$- bash command.sh 10
```

Here 10 is no of test cases.
This will initiate the stress testing by comparing your input from brute.cpp and solution.cpp
#Example
[Checkout this codeforces problem.](https://codeforces.com/contest/1529/problem/B)

- Brute force solution contains code by generating every subsequence of array and output the max array size possible.
- In solution.cpp, there is optmised O(nlogn) solution but this is failing on some cases.
  ![Working Demo](https://github.com/himankgoel/AalooDaloSonaNikalo/blob/main/ss.jpg)

My code failed when there was only one negative number,I can fix that easily and avoid penalties.
