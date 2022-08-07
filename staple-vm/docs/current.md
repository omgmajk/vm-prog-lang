# Staple VM Spec

## Symbols

`#`n 	- Means number/decimal constant

## Instructions

Seems to mimic some kind of 32-bit assembly for now

PUSH  	- Push an 8-bit number onto the stack
ADD		- Pops last two numbers off of stack, adds, pushes result
HLT		- Pops stack and returns result as exit code
