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
pass_table_1: packed array[0..TABLE_1_SIZE-1] of string = (
	// base 10
	'8','1','3','6','0','5','2','7','4','9','2','0','6','1','7',
	'9','3','5','4','8','1','2','8','7','9','4','3','6','0','5',
	'0','6','9','3','8','1','7','2','5','4','7','6','0','3','9',
	'4','5','8','1','2','8','1','4','0','7','9','2','6','3','5',
	'8','6','9','4','5','2','0','3','7','1','8','3','4','1','6',
	'0','9','5','2','7','8','3','1','6','9','5','0','4','2','7',
	'7','6','2','0','8','1','4','9','5','3','3','2','6','1','9',
	'0','4','7','5','8','6','5','2','9','8','1','4','0','7','3',
	'9','5','0','1','3','2','7','8','4','6','4','2','1','5','3',
	'0','7','6','9','8','6','9','4','1','8','2','5','0','7','3',
	'0','3','8','9','1','5','2','6','4','7','2','8','4','5','0',
	'7','3','9','1','6','0','3','1','9','8','4','2','7','5','6',
	'5','1','4','8','6','0','7','3','2','9','0','3','7','8','5',
	'4','1','2','6','9','4','2','0','1','6','3','7','8','9','5',
	'4','8','6','5','3','1','0','2','7','9','3','5','2','1','6',
	'7','9','8','4','0','5','1','9','6','0','4','7','8','2','3',
	'2','3','6','5','7','0','4','9','1','8','5','3','1','7','2',
	'9'
);
