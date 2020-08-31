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
pass_table_4: packed array[0..TABLE_4_SIZE-1] of string = (
	// base 16 - Chars: "ABCDEF0123456789"
	'4', 'E', '9', 'F', '8', '5', 'D', '6', '7', '3', 'C', 'A', '2', 'B', '0', '1',
	'9', '1', 'D', 'E', 'C', '2', '5', '0', '6', '7', 'F', '3', '4', 'B', '8', 'A',
	'D', 'E', '4', '8', 'C', '1', '5', 'A', 'F', 'B', '2', '0', '6', '9', '7', '3',
	'7', '8', 'A', '6', 'C', 'F', '0', '3', 'E', '2', '1', 'D', '9', 'B', '4', '5',
	'F', 'A', '2', 'E', 'C', 'D', '8', '7', '6', '1', '3', '4', 'B', '0', '5', '9',
	'D', '9', '5', 'A', 'B', 'C', '2', '8', 'F', '6', '4', 'E', '7', '0', '3', '1',
	'2', '9', 'F', 'C', '0', '6', '7', 'D', 'E', 'B', 'A', '4', '8', '3', '5', '1',
	'A', '1', '2', 'C', '3', '0', '9', 'F', '7', 'B', '6', 'D', '5', '8', '4', 'E',
	'0', '9', '6', 'C', '4', 'A', '2', '5', '8', 'D', 'E', '7', '1', 'B', '3', 'F',
	'2', '1', 'A', 'D', '8', '5', '4', 'E', 'B', 'C', '0', 'F', '6', '3', '9', '7',
	'8', '2', 'A', '1', 'E', 'C', 'B', '0', 'F', 'D', '5', '4', '9', '7', '3', '6',
	'F', 'C', '2', 'B', '8', '1', '4', 'A', '6', '5', 'D', '3', 'E', '0', '7', '9',
	'5', '2', 'C', '3', 'F', '9', '6', '0', '4', 'E', '8', 'D', 'A', 'B', '7', '1',
	'C', '0', '8', 'E', 'B', '4', '3', 'D', 'A', '5', '2', '6', '1', 'F', '9', '7',
	'0', 'E', '3', 'F', 'D', '2', '4', '5', 'C', '9', 'A', '7', 'B', '6', '8', '1',
	'3', 'E', 'A', '6', '7', 'F', '0', '1', '9', '4', 'B', '2', '5', 'C', 'D', '8'
);
