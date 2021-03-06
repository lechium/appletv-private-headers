/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationPath.h"

@class NSString;

@interface MCAnimationPathExpression : MCAnimationPath {
	NSString *mExpression;	// 12 = 0xc
}
@property(copy) NSString *expression;	// G=0x3250e835; S=0x3250e849; @synthesize=mExpression
+ (id)animationPathWithKey:(id)key andExpression:(id)expression;	// 0x3250e685
- (id)initWithImprint:(id)imprint;	// 0x3250e6c1
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3250e7e1
- (void)demolish;	// 0x3250e731
// declared property getter: - (id)expression;	// 0x3250e835
- (id)imprint;	// 0x3250e781
// declared property setter: - (void)setExpression:(id)expression;	// 0x3250e849
@end

