/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDCommonBehaviorData.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface PDAnimateColorBehavior : PDCommonBehaviorData {
@private
	OADColor *mBy;	// 12 = 0xc
	OADColor *mFrom;	// 16 = 0x10
	OADColor *mTo;	// 20 = 0x14
	int mColorSpace;	// 24 = 0x18
	int mDirection;	// 28 = 0x1c
}
@property(retain) id by;	// G=0x3128631d; S=0x3128632d; converted property
@property(assign) int colorSpace;	// G=0x31286401; S=0x31286411; converted property
@property(assign) int direction;	// G=0x31286421; S=0x31286431; converted property
@property(retain) id from;	// G=0x31286369; S=0x31286379; converted property
@property(retain) id to;	// G=0x312863b5; S=0x312863c5; converted property
// converted property getter: - (id)by;	// 0x3128631d
// converted property getter: - (int)colorSpace;	// 0x31286401
// converted property getter: - (int)direction;	// 0x31286421
// converted property getter: - (id)from;	// 0x31286369
// converted property setter: - (void)setBy:(id)by;	// 0x3128632d
// converted property setter: - (void)setColorSpace:(int)space;	// 0x31286411
// converted property setter: - (void)setDirection:(int)direction;	// 0x31286431
// converted property setter: - (void)setFrom:(id)from;	// 0x31286379
// converted property setter: - (void)setTo:(id)to;	// 0x312863c5
// converted property getter: - (id)to;	// 0x312863b5
@end

