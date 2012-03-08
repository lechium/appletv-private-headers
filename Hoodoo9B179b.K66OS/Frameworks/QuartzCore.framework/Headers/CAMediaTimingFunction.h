/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "QuartzCore-Structs.h"


@interface CAMediaTimingFunction : NSObject <NSCoding> {
@private
	CAMediaTimingFunctionPrivate *_priv;	// 4 = 0x4
}
+ (id)functionWithControlPoints:(float)controlPoints :(float)arg2 :(float)arg3 :(float)arg4;	// 0x34ef0fe1
+ (id)functionWithName:(id)name;	// 0x34ee72d5
- (id)initWithCoder:(id)coder;	// 0x34f61bf5
- (id)initWithControlPoints:(float)controlPoints :(float)arg2 :(float)arg3 :(float)arg4;	// 0x34ed10a9
- (void)_getPoints:(double *)points;	// 0x34f618c9
- (float)_solveForInput:(float)input;	// 0x34ef3149
- (void)dealloc;	// 0x34ed11ed
- (id)description;	// 0x34f61ae9
- (void)encodeWithCoder:(id)coder;	// 0x34f61b49
- (void)getControlPointAtIndex:(unsigned long)index values:(float [2])values;	// 0x34f61a4d
@end

