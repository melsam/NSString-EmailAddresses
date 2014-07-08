NSString-EmailAddresses
=======================

An Objective C NSString category to fix common typos in email addresses. Significantly reduces signup issues and lost users.

![alt text](http://imgur.com/nklxZQz.png "Fix Email Address Typos")

Some examples of bad email addresses that will be corrected:

* robert@**gmial.com**	-> robert@gmail.com
* robert@**gmial.*con*** -> robert@gmail.com
* robert@hotmail.**con** -> robert@hotmail.com
* robert@**hoitmail.com** -> robert@hotmail.com
* robert@**hoitmail.con** -> robert@hotmail.com
* robert@aol**.con** -> robert@aol.com
* **robert.con@aol.con** -> robert.con@aol.com


Fixes misspelled variations for Gmail, Googlemail, Hotmail, Yahoo and Ymail. More domains can be added easily using a dictionary syntax. 

Note: A .con suffix will always be corrected to .com regardless of domain name.

Besides correcting the typos, it also lowercases the email address. If the email address is invalid, returns the original value.

**Code sample:**

	NSString *badAddress = @"robert@gmial.com";
	NSString *goodAddress = [badAddress stringByCorrectingEmailTypos];
	


License (MIT)
-------
Copyright © 2014 Mel Sampat

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
	
The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
	
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
