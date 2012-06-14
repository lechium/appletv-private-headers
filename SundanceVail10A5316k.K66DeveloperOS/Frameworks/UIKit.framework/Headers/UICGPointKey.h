/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UICGPointKey : NSObject <NSCopying> {
@private
	CGPoint _point;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CGPoint point;	// G=0x30491575; @synthesize=_point
+ (id)pointKeyWithPoint:(CGPoint)point;	// 0x30491401
- (id)copyWithZone:(NSZone *)zone;	// 0x30491451
- (unsigned)hash;	// 0x30491511
- (BOOL)isEqual:(id)equal;	// 0x304914a1
// declared property getter: - (CGPoint)point;	// 0x30491575
@end

