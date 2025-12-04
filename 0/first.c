/*
Data Types
----------
    int
    char
    float
    double
    void 

Instruction | Statement | Command

Types of Instructions
1) Declaration Statement
2) Action Statement

Declaration Statement
---------------------

- Variable Declaration

Integer     int a,b;    4 bytes     4+4=8
Character   char m;     1 byte      1
Real        float k;    4 bytes     4
Real        double d1;  8 bytes     8

Total memory occupied = 21 bytes
1 byte == 8 bits


        int a=5,b;
        b=6;        | a=5,b=6
        a=4;        | a=4,b=6
        b=7;        | a=4,b=7
        a=b+5;      | a=12,b=7
= Assignment operator
== Equal to operator

int a=5;
a == 00000000 00000000 00000000 00000101

ASCII
- It is a character encoding technique
- American Standard Code for Information Interchange
- Codes : 0 to 255 | total= 256

    char m='A';  // char m=65;
    m == 01000001

    Characters  Code
        ' '     32
        '0'     48
        '1'     49
        '9'     57
        '@'     64
        'A'     65
        'B'     66
        'Z'     90
        'a'     97
        'b'     98
        'z'     122
                255 ==  11111111

                Both are same
    int a=65; // a=00000000 00000000 00000000 01000001
    int a='A'; // int a=65;

                Both are same
    char m='A';
    char m=65;

    float k=0.7;    //Single precision
    double d1=0.7;  //Double precision

    k==d1 false

*/