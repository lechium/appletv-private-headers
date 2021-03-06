/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAITOrientedBounds : NSObject {
}
+ (id)absoluteOrientedBoundsOfDrawable:(id)drawable;	// 0x31302efd
+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)relativeOrientedBounds parentOrientedBounds:(id)bounds parentLogicalBounds:(CGRect)bounds3;	// 0x313034c9
+ (id)adjustedOrientedBoundsWithOrientedBounds:(id)orientedBounds;	// 0x31302fe9
+ (id)adjustedOrientedBoundsWithOrientedBounds:(id)orientedBounds logicalBounds:(CGRect)bounds;	// 0x31302d5d
+ (CGRect)axisParallelBoundsOfOrientedBounds:(id)orientedBounds;	// 0x31303a79
+ (id)relativeOrientedBoundsOfDrawable:(id)drawable;	// 0x313038a1
+ (float)scaleFactorFromLength:(float)length toLength:(float)length2;	// 0x31302d31
+ (CGAffineTransform)transformFromBounds:(CGRect)bounds toOrientedBounds:(id)orientedBounds;	// 0x31303159
@end

