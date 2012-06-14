/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MUPoolObject.h"
#import "ATVSlideshow-Structs.h"


@interface MRUniform : MUPoolObject {
	float x;	// 8 = 0x8
	float y;	// 12 = 0xc
	float z;	// 16 = 0x10
	float w;	// 20 = 0x14
	int i;	// 24 = 0x18
	int length;	// 28 = 0x1c
}
+ (BOOL)clearVars;	// 0x3651169d
+ (XXStruct_raCX$B *)poolInfo;	// 0x3651168d
- (id)initWithI:(float)i;	// 0x365115f5
- (id)initWithX:(float)x;	// 0x365113a5
- (id)initWithX:(float)x Y:(float)y;	// 0x3651142d
- (id)initWithX:(float)x Y:(float)y Z:(float)z;	// 0x365114bd
- (id)initWithX:(float)x Y:(float)y Z:(float)z W:(float)w;	// 0x36511555
@end

