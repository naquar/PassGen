(** --------------------------------------------------------------------------------

	This file is part of 'PassGen'.

	'PassGen' is a random password generator.


	License:

	The MIT License (MIT)

	Copyright (c) 2017-2020 Renan Souza da Motta <renansouzadamotta@yahoo.com>

	Permission is hereby granted, free of charge, to any person obtaining a copy of
	this software and associated documentation files (the "Software"), to deal in
	the Software without restriction, including without limitation the rights to
	use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
	the Software, and to permit persons to whom the Software is furnished to do so,
	subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
	FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
	COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
	IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
	CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

	-------------------------------------------------------------------------------- **)
pass_table_3: packed array[0..TABLE_3_SIZE-1] of string = (
	// base 95 - Chars: " !"#%&'()*+,-./:;<=>?@[\]^_`{|}~$0aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ123456789"
	'Q', 'F', '4', 'd', ';', '>', '#', 'i', 'P', '1', '8', 'Y', 'p', 'b', 'v', 'z',
	's', 'V', 'j', ' ', ')', '}', 'k', 'D', 'n', 'K', '0', 'y', 'u', '^', '2', '{',
	'+', '%', 'q', '$', '~', '9', '(', '!', 'T', 'G', '\', '.', 'Z', '5', 't', '`',
	'f', 'a', '_', '6', '7', 'h', 'A', 'w', 'X', '@', 'L', '<', '&', 'S', ']', '3',
	'R', 'x', 'J', 'E', 'M', 'O', 'B', 'l', ':', '-', '=', '[', 'g', 'm', 'H', 'I',
	'W', '?', 'r', '/', 'c', 'o', '*', 'e', '|', #39, #34, 'N', 'U', ',', 'C', 'f',
	'1', '5', ' ', '!', '3', 'U', 'I', '?', '6', '>', '}', 'K', 'M', 'A', 'g', 'C',
	'#', 'Q', ',', 'i', 'Z', 'k', '+', '0', 'D', 'N', '^', 'n', 'l', 'R', 'd', 'B',
	']', 'S', 'E', 'x', '|', #39, 'G', 'a', '(', '[', '{', 'O', 'V', '8', '9', 'm',
	'Y', '&', 'H', '\', #34, 'h', 'e', '/', '<', 'W', 'q', '@', 's', ';', 'X', '%',
	'o', ':', '=', '$', 'P', 't', '.', 'b', 'J', 'j', '7', 'r', '`', 'c', 'u', '4',
	'y', 'z', ')', 'v', '_', '*', '-', 'T', 'w', '2', '~', 'F', 'L', 'p', ',', 'c',
	'z', 'H', '}', 'b', 'W', '`', 'd', 'p', 'R', '1', 'N', '_', '(', 'K', 'a', 'C',
	'D', '7', 'J', '[', 'Z', '%', 'M', '^', '&', 's', 'y', '|', 'f', 'T', 'Y', 'v',
	'n', 'X', '2', '6', 'k', ' ', '#', '$', '*', '~', '{', '=', 'E', '5', ':', 'I',
	'8', '3', 'm', 'x', '>', 'h', '.', 'j', 'G', 'O', 'P', 'q', 't', 'L', ')', 'e'
);
