/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"


@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}
+ (id)alphanumericCharacterSet;	// 0x31a44e81
+ (id)capitalizedLetterCharacterSet;	// 0x31a44ea1
+ (id)characterSetWithBitmapRepresentation:(id)bitmapRepresentation;	// 0x31a44f39
+ (id)characterSetWithCharactersInString:(id)string;	// 0x31a094d9
+ (id)characterSetWithContentsOfFile:(id)file;	// 0x31a44eb9
+ (id)characterSetWithRange:(NSRange)range;	// 0x31a44f09
+ (id)controlCharacterSet;	// 0x31a07019
+ (id)decimalDigitCharacterSet;	// 0x31a088e1
+ (id)decomposableCharacterSet;	// 0x31a44e91
+ (id)illegalCharacterSet;	// 0x31a44ea9
+ (void)initialize;	// 0x31a06fc5
+ (id)letterCharacterSet;	// 0x31a44e69
+ (id)lowercaseLetterCharacterSet;	// 0x31a44e71
+ (id)newlineCharacterSet;	// 0x31a2b731
+ (id)nonBaseCharacterSet;	// 0x31a44e89
+ (id)punctuationCharacterSet;	// 0x31a44e99
+ (id)symbolCharacterSet;	// 0x31a44eb1
+ (id)uppercaseLetterCharacterSet;	// 0x31a44e79
+ (id)whitespaceAndNewlineCharacterSet;	// 0x31a07021
+ (id)whitespaceCharacterSet;	// 0x31a088d9
- (id)init;	// 0x31a337e5
- (id)initWithCoder:(id)coder;	// 0x31a45361
- (unsigned long)_cfTypeID;	// 0x31a44dc1
- (CFCharacterSetRef)_expandedCFCharacterSet;	// 0x31a44dc5
- (id)_retainedBitmapRepresentation;	// 0x31a455e5
- (id)bitmapRepresentation;	// 0x31a451dd
- (BOOL)characterIsMember:(unsigned short)member;	// 0x31a450a1
- (id)copyWithZone:(NSZone *)zone;	// 0x31a44f8d
- (unsigned)count;	// 0x31a45041
- (void)encodeWithCoder:(id)coder;	// 0x31a452cd
- (BOOL)hasMemberInPlane:(unsigned char)plane;	// 0x31a45139
- (unsigned)hash;	// 0x31a44f65
- (id)invertedSet;	// 0x31a44f9d
- (BOOL)isEmpty;	// 0x31a44fe9
- (BOOL)isEqual:(id)equal;	// 0x31a45179
- (BOOL)isMutable;	// 0x31a45099
- (BOOL)isSupersetOfSet:(id)set;	// 0x31a450f9
- (BOOL)longCharacterIsMember:(unsigned long)member;	// 0x31a450e1
- (void)makeImmutable;	// 0x31a4509d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31a4528d
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x31b33665
@end

