/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>

@class NSString;

@interface PBFontEntity : NSObject {
	NSString *mFaceName;	// 4 = 0x4
	int mCharSet;	// 8 = 0x8
	int mType;	// 12 = 0xc
	int mFamily;	// 16 = 0x10
}
- (id)initWithName:(id)name charSet:(int)set type:(int)type family:(int)family;	// 0x316c0561
- (int)charSet;	// 0x317ca8dd
- (void)dealloc;	// 0x3171fed1
- (id)faceName;	// 0x316c19f1
- (int)family;	// 0x319165ad
- (int)type;	// 0x3191659d
@end

