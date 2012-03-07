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
@property(retain) id by;	// G=0x32d14dc1; S=0x32d159cd; converted property
@property(assign) int colorSpace;	// G=0x32d14df1; S=0x32d14e01; converted property
@property(assign) int direction;	// G=0x32d14e11; S=0x32d14e21; converted property
@property(retain) id from;	// G=0x32d14dd1; S=0x32d15995; converted property
@property(retain) id to;	// G=0x32d14de1; S=0x32d1595d; converted property
// converted property getter: - (id)by;	// 0x32d14dc1
// converted property getter: - (int)colorSpace;	// 0x32d14df1
// converted property getter: - (int)direction;	// 0x32d14e11
// converted property getter: - (id)from;	// 0x32d14dd1
// converted property setter: - (void)setBy:(id)by;	// 0x32d159cd
// converted property setter: - (void)setColorSpace:(int)space;	// 0x32d14e01
// converted property setter: - (void)setDirection:(int)direction;	// 0x32d14e21
// converted property setter: - (void)setFrom:(id)from;	// 0x32d15995
// converted property setter: - (void)setTo:(id)to;	// 0x32d1595d
// converted property getter: - (id)to;	// 0x32d14de1
@end
