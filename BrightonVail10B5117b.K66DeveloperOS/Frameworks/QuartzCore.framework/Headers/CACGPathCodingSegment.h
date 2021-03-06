/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "NSCoding.h"
#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CACGPathCodingSegment : NSObject <NSCoding> {
	int _type;	// 4 = 0x4
	CGPoint _points[3];	// 8 = 0x8
}
- (id)initWithCGPathElement:(const CGPathElement *)cgpathElement;	// 0x32b7d79d
- (id)initWithCoder:(id)coder;	// 0x32b7da65
- (id).cxx_construct;	// 0x32b7dbc5
- (void)addToCGPath:(CGPathRef)cgpath;	// 0x32b7d841
- (void)encodeWithCoder:(id)coder;	// 0x32b7d925
@end

