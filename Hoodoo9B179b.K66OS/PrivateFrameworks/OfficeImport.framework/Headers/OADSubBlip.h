/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDelayedMedia.h"
#import "OfficeImport-Structs.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface OADSubBlip : OCDDelayedMedia {
@private
	int mType;	// 12 = 0xc
	NSData *mData;	// 16 = 0x10
	CGSize mSizeInPoints;	// 20 = 0x14
	int mSizeInBytes;	// 28 = 0x1c
	CGRect mFrame;	// 32 = 0x20
}
@property(retain) id data;	// G=0x327c9911; S=0x327c98cd; converted property
@property(assign) CGRect frame;	// G=0x329d0e05; S=0x3287d45d; converted property
@property(assign) long sizeInBytes;	// G=0x329d0df5; S=0x328c939d; converted property
@property(assign) CGSize sizeInPoints;	// G=0x329d0ddd; S=0x3287d449; converted property
- (id)initWithData:(id)data type:(int)type;	// 0x327f16d1
// converted property getter: - (id)data;	// 0x327c9911
- (void)dealloc;	// 0x327c4a01
// converted property getter: - (CGRect)frame;	// 0x329d0e05
- (unsigned)hash;	// 0x329d1579
- (BOOL)isEqual:(id)equal;	// 0x329d1435
- (bool)isLoaded;	// 0x327c9405
// converted property setter: - (void)setData:(id)data;	// 0x327c98cd
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x3287d45d
// converted property setter: - (void)setSizeInBytes:(long)bytes;	// 0x328c939d
// converted property setter: - (void)setSizeInPoints:(CGSize)points;	// 0x3287d449
// converted property getter: - (long)sizeInBytes;	// 0x329d0df5
// converted property getter: - (CGSize)sizeInPoints;	// 0x329d0ddd
- (int)type;	// 0x327c9921
@end

