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
pass_table_2: packed array[0..TABLE_2_SIZE-1] of string = (
	// base 58
	'h','n','9','5','W','Q','x','C','R','b','7','X','j','M','w',
	'a','V','g','z','A','m','P','q','i','B','c','L','s','t','o',
	'y','K','f','F','d','S','k','2','8','N','4','e','G','U','p',
	'6','Y','J','E','T','1','Z','r','D','3','u','v','H','3','s',
	'c','S','N','q','p','1','C','k','T','j','Q','8','E','m','K',
	'F','Y','5','h','u','e','7','P','A','V','L','J','i','x','U',
	'B','G','2','X','Z','z','b','H','4','t','r','d','o','R','v',
	'M','y','W','g','9','6','f','D','w','n','a','Y','t','9','n',
	'o','r','u','b','p','2','h','K','Q','V','B','z','s','5','x',
	'L','7','d','S','k','G','y','P','e','c','J','C','a','E','U',
	'T','H','m','3','A','M','D','N','8','1','i','4','W','R','6',
	'f','q','v','w','j','X','F','Z','g','6','9','b','N','t','4',
	'z','v','c','j','X','P','8','q','w','e','3','J','1','W','B',
	'U','o','n','k','u','f','g','2','Y','T','p','G','h','s','M',
	'L','C','F','d','V','H','E','i','K','S','m','Z','x','5','D',
	'a','7','A','y','r','R','Q','a','K','z','f','X','p','2','M',
	'e','A','k','Y','r','s','5','8','9','G','H','h','B','Q','c',
	'o'
);
