/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface PBFontEntity : NSObject {
@private
	NSString *mFaceName;	// 4 = 0x4
	int mCharSet;	// 8 = 0x8
	int mType;	// 12 = 0xc
	int mFamily;	// 16 = 0x10
}
- (id)initWithName:(id)name charSet:(int)set type:(int)type family:(int)family;	// 0x327ee535
- (int)charSet;	// 0x32881965
- (void)dealloc;	// 0x327c0fb9
- (id)faceName;	// 0x327b5671
- (int)family;	// 0x32952495
- (int)type;	// 0x32952485
@end

