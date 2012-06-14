/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSString;

@interface MCMotionTrigger : MCAction {
@private
	NSString *_key;	// 12 = 0xc
	double _duration;	// 16 = 0x10
	float _easeIn;	// 24 = 0x18
	float _easeOut;	// 28 = 0x1c
}
@property(assign, nonatomic) double duration;	// G=0x3653002d; S=0x36530045; @synthesize=_duration
@property(assign, nonatomic) float easeIn;	// G=0x36530059; S=0x36530069; @synthesize=_easeIn
@property(assign, nonatomic) float easeOut;	// G=0x36530079; S=0x36530089; @synthesize=_easeOut
@property(copy) NSString *key;	// G=0x3652fff5; S=0x36530009; @synthesize=_key
+ (id)motionTriggerForTargetPlugObjectID:(id)targetPlugObjectID withKey:(id)key andDuration:(double)duration;	// 0x3652fb25
- (id)initWithImprint:(id)imprint;	// 0x3652fba9
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3652feb1
- (void)demolish;	// 0x3652fcf1
- (id)description;	// 0x3652ff51
// declared property getter: - (double)duration;	// 0x3653002d
// declared property getter: - (float)easeIn;	// 0x36530059
// declared property getter: - (float)easeOut;	// 0x36530079
- (id)imprint;	// 0x3652fd41
// declared property getter: - (id)key;	// 0x3652fff5
// declared property setter: - (void)setDuration:(double)duration;	// 0x36530045
// declared property setter: - (void)setEaseIn:(float)anIn;	// 0x36530069
// declared property setter: - (void)setEaseOut:(float)anOut;	// 0x36530089
// declared property setter: - (void)setKey:(id)key;	// 0x36530009
@end

