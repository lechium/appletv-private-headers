/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObjectLight.h"

@class NSString;

@interface MCAnimationPath : MCObjectLight {
	NSString *mKey;	// 4 = 0x4
	BOOL mIsTriggered;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL isTriggered;	// G=0x3558d155; S=0x3558d165; @synthesize=mIsTriggered
@property(copy) NSString *key;	// G=0x3558d11d; S=0x3558d131; @synthesize=mKey
+ (id)animationPathWithKey:(id)key;	// 0x3558cf05
- (id)initWithImprint:(id)imprint;	// 0x3558cf59
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3558d0dd
- (void)demolish;	// 0x3558d005
- (id)imprint;	// 0x3558d031
// declared property getter: - (BOOL)isTriggered;	// 0x3558d155
// declared property getter: - (id)key;	// 0x3558d11d
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x3558d165
// declared property setter: - (void)setKey:(id)key;	// 0x3558d131
@end

