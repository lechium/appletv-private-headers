/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAction.h"

@class NSDictionary, NSString, NSMutableDictionary;

@interface MPAnimationTrigger : MPAction {
	NSString *_animationKey;	// 16 = 0x10
	NSMutableDictionary *_animationAttributes;	// 20 = 0x14
}
@property(copy, nonatomic) NSDictionary *animationAttributes;	// G=0x313f79dd; S=0x313f77d5; @synthesize=_animationAttributes
@property(copy, nonatomic) NSString *animationKey;	// G=0x313f79cd; S=0x313f7755; @synthesize=_animationKey
+ (id)animationTrigger;	// 0x313f74b9
- (id)init;	// 0x313f74f5
- (id)initWithCoder:(id)coder;	// 0x313f7541
- (id)animationAttributeForKey:(id)key;	// 0x313f7735
// declared property getter: - (id)animationAttributes;	// 0x313f79dd
// declared property getter: - (id)animationKey;	// 0x313f79cd
- (id)copyWithZone:(NSZone *)zone;	// 0x313f76c1
- (void)dealloc;	// 0x313f75e1
- (void)encodeWithCoder:(id)coder;	// 0x313f7641
- (void)removeAnimationAttributeForKey:(id)key;	// 0x313f7905
- (void)setAction:(id)action;	// 0x313f794d
- (void)setAnimationAttribute:(id)attribute forKey:(id)key;	// 0x313f7855
// declared property setter: - (void)setAnimationAttributes:(id)attributes;	// 0x313f77d5
// declared property setter: - (void)setAnimationKey:(id)key;	// 0x313f7755
@end

