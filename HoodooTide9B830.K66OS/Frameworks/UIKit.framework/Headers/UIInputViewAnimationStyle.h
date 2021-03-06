/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIInputViewAnimationStyle : NSObject {
@private
	BOOL animated;	// 4 = 0x4
	double duration;	// 8 = 0x8
	int outDirection;	// 16 = 0x10
	BOOL force;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL animated;	// G=0x3009b54d; S=0x3001ea29; @synthesize
@property(assign, nonatomic) double duration;	// G=0x3009c649; S=0x3001ea39; @synthesize
@property(assign, nonatomic) BOOL force;	// G=0x3019367d; S=0x300ea321; @synthesize
@property(assign, nonatomic) int outDirection;	// G=0x3009ac19; S=0x3001ea4d; @synthesize
+ (id)animationStyleAnimated:(BOOL)animated duration:(double)duration outDirection:(int)direction;	// 0x3001e9a1
+ (id)animationStyleDefault;	// 0x3001e969
+ (id)animationStyleImmediate;	// 0x300ebc39
// declared property getter: - (BOOL)animated;	// 0x3009b54d
- (id)description;	// 0x3033afad
// declared property getter: - (double)duration;	// 0x3009c649
// declared property getter: - (BOOL)force;	// 0x3019367d
- (BOOL)isEqual:(id)equal;	// 0x30171ad9
// declared property getter: - (int)outDirection;	// 0x3009ac19
// declared property setter: - (void)setAnimated:(BOOL)animated;	// 0x3001ea29
// declared property setter: - (void)setDuration:(double)duration;	// 0x3001ea39
// declared property setter: - (void)setForce:(BOOL)force;	// 0x300ea321
// declared property setter: - (void)setOutDirection:(int)direction;	// 0x3001ea4d
@end

