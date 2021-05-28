`+-><,.[],` - These are the possible tokens.

The language modifies an abstract machine that consists of an array of
infinitely many cells, with each cell holding an 8 bit unsigned integer.

All cells are initially set to 0.
[0][0][0]...
 ^ 
The program pointer starts at cell 0.

The + operation increments the contents of the cell that the pointer is at.
The - operation decrements the contents of the cell that the pointer is at.
The > operation moves the pointer to the next cell.
The < operation moves the pointer to the previous cell.
The , operation reads a single character to the pointed cell (converted to
ASCII code)
The . operation prints the ASCII character corresponding to the value in the
pointed cell.
[] are used for looping. ie, at [, if pointed cell value is 0, jump to instruction
after corresponding ].
And at ], if pointed cell value is nonzero, jump to instruction at
corresponding "["
]

An easy way to think about the loop is as so, if pointed byte at [ is 0, loop
exits to after ]
