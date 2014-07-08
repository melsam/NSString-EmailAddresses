//
// NSString+EmailAddresses.h
//
// Created by Mel Sampat on 7/7/14.
// Copyright (c) 2014 Mel Sampat.
//
// MIT LICENSE:

// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>

@interface NSString (EmailAddresses)

// Returns a string with the email address corrected for common domain typos.
// Supports misspelled variations for Gmail, Googlemail, Hotmail, Yahoo and Ymail.
// Replaces a ".con" suffix with ".com" for any domain.
// More domains can be easily added using a simple dictionary format.
//
// Some examples of bad email addresses that will be corrected:
//      robert@gmial.com -> robert@gmail.com        (1 error)
//      robert@gmial.con -> robert@gmail.com        (2 errors)
//      robert@hotmail.con -> robert@hotmail.com    (1 error)
//      robert@hoitmail.com -> robert@hotmail.com   (1 error)
//      robert@hoitmail.con -> robert@hotmail.com   (2 errors)
//      robert@aol.con -> robert@aol.com            (1 error)
//      robert.con@aol.con -> robert.con@aol.com    (1 error, but special case with multiple .con's)
//
// Besides correcting the typos, it also lowercases the email address.
// If the email address is invalid, returns the original value.
// Use - [isValidEmailAddress] to validate the email address first if necessary.
- (NSString *)stringByCorrectingEmailTypos;

// Validate the email syntax (not domains) using a RegEx pattern.
- (BOOL)isValidEmailAddress;

@end
