# gibberish-generator

## Description

A Gibberish Generator wrote by C++ and Python.

## How-to-Use

First, you must run the C++ / Python program with the right IDE, and you will see a menu was outputted to REPL / command-line:

```
========== Menu ==========
Choose an option for the length of the message:
A. 1
B. 2
C. 5
D. 10
E. Infinity
F. Custom
```

You can choose an option for the number of the random ASCII characters. Enter a character from A to F, and press Enter (or return for Mac user).

You will see some ASCII characters if you chose the options A to E. But, if you chose the option F before, you can't see any character. Because the option F says "Custom", the number you want is not in the menu, so you chose this, and system don't know what you're thinking. So you need to enter another integer.

After you do that (if you chose the option F), the program will output some ASCII character.

Notice to the C++ program user: Before outputting character, the command-line screen will clear.

## Example

Let's test this program!

Before that, I opened the C++ program (marked as `GibberishGenerator.cpp`), and ran it with the Code::Blocks IDE. The command-line window popped out. The program outputted the menu.

I want 50 characters, but there are no option says "50." So I choose F, the "Custom" option.

After I press Enter, the program wants me to enter the number I think. So I enter 50.

And a lot of ASCII character come out, maybe it's like:

```
<:Tfxhz.HZJ\n"p,>Pj|8(BTf"4$6Pb|0J:Lfx,>.@Rl(:*4F
```

I hope you will use this well.
