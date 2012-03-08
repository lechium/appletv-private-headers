/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface OADRelativeRect : NSObject <NSCopying> {
@private
	float mLeft;	// 4 = 0x4
	float mTop;	// 8 = 0x8
	float mRight;	// 12 = 0xc
	float mBottom;	// 16 = 0x10
}
@property(assign) float bottom;	// G=0x327fa855; S=0x32803439; converted property
@property(assign) float left;	// G=0x327fa825; S=0x327fae6d; converted property
@property(assign) float right;	// G=0x327fa835; S=0x327fae91; converted property
@property(assign) float top;	// G=0x327fa845; S=0x32803415; converted property
- (id)init;	// 0x327fae35
- (id)initWithLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom;	// 0x327f6241
// converted property getter: - (float)bottom;	// 0x327fa855
- (id)copyWithZone:(NSZone *)zone;	// 0x3291d0e5
- (unsigned)hash;	// 0x329d053d
- (BOOL)isEqual:(id)equal;	// 0x329d073d
// converted property getter: - (float)left;	// 0x327fa825
// converted property getter: - (float)right;	// 0x327fa835
// converted property setter: - (void)setBottom:(float)bottom;	// 0x32803439
// converted property setter: - (void)setLeft:(float)left;	// 0x327fae6d
// converted property setter: - (void)setRight:(float)right;	// 0x327fae91
// converted property setter: - (void)setTop:(float)top;	// 0x32803415
// converted property getter: - (float)top;	// 0x327fa845
@end

