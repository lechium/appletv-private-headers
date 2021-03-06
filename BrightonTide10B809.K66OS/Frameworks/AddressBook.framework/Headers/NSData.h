/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSData.h> // Unknown library
#import "AddressBook-Structs.h"


@interface NSData (ABDataAdditions)
- (id)abDecodeVCardBase64;	// 0x308a3025
- (id)abDecodedUTF7;	// 0x308a2dc9
- (id)abEncodeBase64DataBreakLines:(BOOL)lines allowSlash:(BOOL)slash padChar:(BOOL)aChar;	// 0x308a29b5
- (id)abEncodeVCardBase64DataWithInitialLength:(unsigned)initialLength;	// 0x308a2759
- (BOOL)abIsUTF16EntourageVCard;	// 0x308a2699
- (id)abStringAtRange:(NSRange)range inEncoding:(unsigned)encoding;	// 0x308a2619
@end

