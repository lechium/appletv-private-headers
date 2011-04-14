/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSString.h> // Unknown library
#import "CoreData-Structs.h"


__attribute__((visibility("hidden")))
@interface _PFString : NSString {
@private
	int _reserved1;	// 4 = 0x4
	int _cd_rc;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
	id _sourceData;	// 16 = 0x10
	int _reserved2;	// 20 = 0x14
}
@property(readonly, assign) unsigned length;	// G=0x330cc3b5; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x33120345
+ (id)alloc;	// 0x331204bd
+ (id)allocWithZone:(NSZone *)zone;	// 0x331204b1
- (const char *)UTF8String;	// 0x330f01b5
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x330cc3c5
- (const char *)cString;	// 0x33120365
- (unsigned)cStringLength;	// 0x33120369
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x33120359
- (id)copy;	// 0x330f2d15
- (id)copyWithZone:(NSZone *)zone;	// 0x330edbd5
- (void)dealloc;	// 0x3312037d
- (id)description;	// 0x331203c5
- (void)encodeWithCoder:(id)coder;	// 0x3312041d
- (void)getCString:(char *)string;	// 0x33120565
- (void)getCharacters:(unsigned short *)characters;	// 0x330f2f19
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x330f0add
- (unsigned)hash;	// 0x330d8ea1
- (BOOL)isEqual:(id)equal;	// 0x330d3b01
- (BOOL)isEqualToString:(id)string;	// 0x3312048d
// converted property getter: - (unsigned)length;	// 0x330cc3b5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x331203e9
- (void)release;	// 0x33120459
- (id)retain;	// 0x33120389
- (unsigned)retainCount;	// 0x33120349
@end

