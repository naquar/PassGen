# PassGen
PassGen is a random password generator.


**Supported operating systems:**

*	GNU/Linux


**Usage:**

`passgen <password_length> <dictionary_id> [extra_options]`


**Examples:**

1.	Generate a random password with a length of 16:

	`passgen 16 2`

2.	Generate a random password with a minimum length of 16 and a maximum length of 32:

	`passgen 16-32 2`

3.	Generate a random password with a length of 16 from a user defined dictionary:

	`passgen 16 0 < ~/.passgen/dicts/wordlist.txt`

	*Note: Input data must be UTF-8 encoded and each character/word must be separated by a new line.*


**Built-in dictionaries:**

*	ID 1: Decimal characters.
*	ID 2: Base58 characters.
*	ID 3: Base95 characters (space included).
*	ID 4: Hexadecimal characters (UPPERCASE).
*	ID 5: 1024 English words.
*	ID 6: 1024 (Brazilian) Portuguese words.


**Additional options:**

```
	--quiet,                                       -q: Keeps output to a minimum. Only show generated password (default).
	--verbose,                                     -v: Show details about generated password.
	--word,                                        -w: It is a word dictionary, separate each word with a space.
	--hex-to-word <hex_value> <dict_index>,      -h2w: Convert hexadecimal number to word(s).
	--word-to-hex <word1:word2...> <dict_index>, -w2h: Convert word(s) to hexadecimal number.
	--writing-mode                                 -p: Prints password character by character. Press ENTER to show next character.
	--entropy <string>                             -e: Calculates entropy of given password and rates it.
	--license,                                     -l: Show license information.
	--version,                                     -V: Show version information.
```


## Compilation instructions:

**Required software:**

*	Free Pascal Compiler (FPC) 3.0.4 (not tested with newer versions).
*	GNU Make.
*	GNU Binutils.


**Instructions:**

1.	When all required software are installed go to the program's source directory and run:

	```
		make release
	#	make install
	```

	Now you should be able to run `passgen` from the command line.

	**Note(s):**

	*	*Lines starting with '#' means to run as root (administrator) is required.* :+1:


## Bugs & Suggestions:

If you have found bugs or have a suggestion, please send an e-mail to **bugs368@pm.me**.

Your message is appreciated! :)


## Release notes:

*	2020-08-29: v1.0.0:

	First public release!

