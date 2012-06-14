/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADRelativeRect : NSObject <NSCopying> {
@private
	float mLeft;	// 4 = 0x4
	float mTop;	// 8 = 0x8
	float mRight;	// 12 = 0xc
	float mBottom;	// 16 = 0x10
}
@property(assign) float bottom;	// G=0x3107cef5; S=0x310895a9; converted property
@property(assign) float left;	// G=0x3107cec5; S=0x31081051; converted property
@property(assign) float right;	// G=0x3107ced5; S=0x31081075; converted property
@property(assign) float top;	// G=0x3107cee5; S=0x31089585; converted property
- (id)init;	// 0x31081019
- (id)initWithLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom;	// 0x31069e11
// converted property getter: - (float)bottom;	// 0x3107cef5
- (id)copyWithZone:(NSZone *)zone;	// 0x31198f6d
- (unsigned)hash;	// 0x3124972d
- (BOOL)isEqual:(id)equal;	// 0x312497a1
// converted property getter: - (float)left;	// 0x3107cec5
// converted property getter: - (float)right;	// 0x3107ced5
// converted property setter: - (void)setBottom:(float)bottom;	// 0x310895a9
// converted property setter: - (void)setLeft:(float)left;	// 0x31081051
// converted property setter: - (void)setRight:(float)right;	// 0x31081075
// converted property setter: - (void)setTop:(float)top;	// 0x31089585
// converted property getter: - (float)top;	// 0x3107cee5
@end

