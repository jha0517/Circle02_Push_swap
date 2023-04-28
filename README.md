# Push Swap

## Description

Push Swap is a project that requires the sorting of a stack of numbers using two stacks with a set of defined operations. The goal is to sort the stack in the least amount of moves possible. The project has two programs: push_swap, which outputs the set of operations to sort the stack, and checker, which checks if the set of operations sorts the stack correctly.

## Installation

1. Clone the repository: `git clone <https://github.com/><username>/push_swap.git`
2. Navigate into the directory: `cd push_swap`
3. Compile the program by running `make`

## Usage

### Push Swap

1. To sort a stack of numbers, run the push_swap program with a list of integers as arguments. For example: `./push_swap 4 67 3 87 23`
2. The program will output a list of operations to sort the stack. The operations are:
    - `sa` - swap the first two elements of stack A
    - `sb` - swap the first two elements of stack B
    - `ss` - do sa and sb at the same time
    - `pa` - take the first element from stack B and put it on top of stack A
    - `pb` - take the first element from stack A and put it on top of stack B
    - `ra` - rotate stack A up by one
    - `rb` - rotate stack B up by one
    - `rr` - do ra and rb at the same time
    - `rra` - rotate stack A down by one
    - `rrb` - rotate stack B down by one
    - `rrr` - do rra and rrb at the same time
3. Copy the list of operations and run them on the stack using the checker program.

### Checker

1. To check if a list of operations sorts a stack correctly, run the checker program with a list of integers as arguments, followed by the list of operations. For example: `./checker 4 67 3 87 23 pb sa ra`
2. The program will output "OK" if the stack is sorted correctly or "KO" if it is not.

## Example

Here is an example of how to use the push_swap and checker programs:

```
$ ./push_swap 4 67 3 87 23
pb
sa
ra
pb
sa
rra
pa
pa
$ ./checker 4 67 3 87 23 pb sa ra pb sa rra pa pa
OK

```


## Authors

Push swap was created by Hyunah JUNG. If you have any questions or feedback, please feel free to contact me.

## Acknowledgements

We would like to thank 42 school for providing us with the opportunity to work on this project and learn new skills.
