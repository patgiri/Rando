# Rando: A true random number generator

## Compilation
### Compile to generate 32-bit random number
`$gcc rando32.c -o rando32`

### Execution
`$./rando32`

### Compile to generate 64-bit random number
`$gcc rando64.c -o rando64`

### Execution
`$./rando64`

### Compile to generate large sized random number.
`$gcc rando_large.c -o rando_large`

### Execution
`$./rando_large`\
It will create a file, rando.txt. The file contains 10M bits generated the genRando(). However, the

## Use the functions

### Use genRando() function for 32-bit random number

`#incldue "rando32.h" `\
`unsinged int random_number=genRando();`\
The genRando() function returns unsigned int value.

### Use genRando() function for 64-bit random number

`#incldue "rando64.h"`\
`unsinged long int random_number=genRando();`\
The genRando() function returns unsigned long int value.

### Use genRando() function to generate large random number.

`#incldue "rando_large.h"`\
`int bits=10000000;`\
`genRando(bits);`\
The genRando() function does not return any value. Instead, it writes the bits into a file, rando.txt


## Published paper link
You can read the paper from IEEE Xplore (https://ieeexplore.ieee.org/document/9724379)

## You may cite as follows-

``` 
@INPROCEEDINGS{9724379,

  author={Patgiri, Ripon},

  booktitle={2021 IEEE 20th International Conference on Trust, Security and Privacy in Computing and Communications (TrustCom)}, 

  title={Rando: A General-purpose True Random Number Generator for Conventional Computers}, 

  year={2021},

  volume={},

  number={},

  pages={107-113},

  doi={10.1109/TrustCom53373.2021.00032}}
```
