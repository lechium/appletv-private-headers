/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCMotionTrigger.h"

@class NSDictionary, NSString;

@interface MCMotionTriggerExpression : MCMotionTrigger {
	NSString *_expression;	// 32 = 0x20
	NSDictionary *_attributes;	// 36 = 0x24
}
@property(copy) NSDictionary *attributes;	// G=0x2fcba209; S=0x2fcba21d; @synthesize=_attributes
@property(copy) NSString *expression;	// G=0x2fcba1e5; S=0x2fcba1f9; @synthesize=_expression
+ (id)motionTriggerForTargetPlugObjectID:(id)targetPlugObjectID withKey:(id)key duration:(double)duration andExpression:(id)expression;	// 0x2fcb9f15
- (id)initWithImprint:(id)imprint;	// 0x2fcb9f5d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x2fcba105
// declared property getter: - (id)attributes;	// 0x2fcba209
- (void)demolish;	// 0x2fcba001
- (id)description;	// 0x2fcba179
// declared property getter: - (id)expression;	// 0x2fcba1e5
- (id)imprint;	// 0x2fcba079
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x2fcba21d
// declared property setter: - (void)setExpression:(id)expression;	// 0x2fcba1f9
@end

