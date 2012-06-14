/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"


@interface NSAffineTransform : NSObject <NSCopying, NSCoding> {
@private
	XXStruct_DOQIoC _transformStruct;	// 4 = 0x4
}
@property(assign) XXStruct_DOQIoC transformStruct;	// G=0x35e2a88d; S=0x35e2a8c1; converted property
+ (id)transform;	// 0x35e29e79
- (id)init;	// 0x35e29eb1
- (id)initWithCoder:(id)coder;	// 0x35e2aaa5
- (id)initWithTransform:(id)transform;	// 0x35e29f19
- (void)appendTransform:(id)transform;	// 0x35e2a581
- (id)copyWithZone:(NSZone *)zone;	// 0x35e29f89
- (void)encodeWithCoder:(id)coder;	// 0x35e2a8f5
- (unsigned)hash;	// 0x35e2a0c1
- (void)invert;	// 0x35e2a47d
- (BOOL)isEqual:(id)equal;	// 0x35e29fc1
- (void)prependTransform:(id)transform;	// 0x35e2a6a1
- (void)rotateByDegrees:(float)degrees;	// 0x35e2a185
- (void)rotateByRadians:(float)radians;	// 0x35e2a2b1
- (void)scaleBy:(float)by;	// 0x35e2a3b5
- (void)scaleXBy:(float)by yBy:(float)by2;	// 0x35e2a415
// converted property setter: - (void)setTransformStruct:(XXStruct_DOQIoC)aStruct;	// 0x35e2a8c1
- (CGPoint)transformPoint:(CGPoint)point;	// 0x35e2a7c1
- (CGSize)transformSize:(CGSize)size;	// 0x35e2a835
// converted property getter: - (XXStruct_DOQIoC)transformStruct;	// 0x35e2a88d
- (void)translateXBy:(float)by yBy:(float)by2;	// 0x35e2a105
@end
