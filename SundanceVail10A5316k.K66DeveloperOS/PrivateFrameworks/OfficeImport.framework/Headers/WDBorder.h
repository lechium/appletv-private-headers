/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"

@class TSUColor;

__attribute__((visibility("hidden")))
@interface WDBorder : NSObject <NSCopying> {
@private
	int mStyle;	// 4 = 0x4
	TSUColor *mColor;	// 8 = 0x8
	unsigned char mWidth;	// 12 = 0xc
	unsigned char mSpace;	// 13 = 0xd
	BOOL mShadow;	// 14 = 0xe
	BOOL mFrame;	// 15 = 0xf
}
@property(retain) id color;	// G=0x31106b21; S=0x310e7b81; converted property
@property(assign) BOOL frame;	// G=0x312aa7b1; S=0x3114d5b1; converted property
@property(assign) BOOL shadow;	// G=0x312aa7a1; S=0x3114d5a1; converted property
@property(assign) unsigned char space;	// G=0x312aa791; S=0x310e7bcd; converted property
@property(assign) int style;	// G=0x310e7b71; S=0x310e7b61; converted property
@property(assign) unsigned char width;	// G=0x31106b11; S=0x310e7bbd; converted property
- (id)init;	// 0x310da40d
// converted property getter: - (id)color;	// 0x31106b21
- (id)copyWithZone:(NSZone *)zone;	// 0x312aa7c1
- (void)dealloc;	// 0x31109b15
// converted property getter: - (BOOL)frame;	// 0x312aa7b1
- (BOOL)isEqual:(id)equal;	// 0x312aa505
- (BOOL)isEqualToBorder:(id)border;	// 0x312aa455
- (void)setBorder:(id)border;	// 0x312aa561
// converted property setter: - (void)setColor:(id)color;	// 0x310e7b81
// converted property setter: - (void)setFrame:(BOOL)frame;	// 0x3114d5b1
- (void)setNullBorder;	// 0x312aa651
// converted property setter: - (void)setShadow:(BOOL)shadow;	// 0x3114d5a1
- (void)setSingleBlackBorder;	// 0x312aa6f1
// converted property setter: - (void)setSpace:(unsigned char)space;	// 0x310e7bcd
// converted property setter: - (void)setStyle:(int)style;	// 0x310e7b61
// converted property setter: - (void)setWidth:(unsigned char)width;	// 0x310e7bbd
// converted property getter: - (BOOL)shadow;	// 0x312aa7a1
// converted property getter: - (unsigned char)space;	// 0x312aa791
// converted property getter: - (int)style;	// 0x310e7b71
// converted property getter: - (unsigned char)width;	// 0x31106b11
@end

