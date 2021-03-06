/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCStateOperation.h"

@class NSString;

@interface MCStateOperationExpression : MCStateOperation {
	NSString *_expression;	// 16 = 0x10
}
@property(copy) NSString *expression;	// G=0x333f7525; S=0x333f7539; @synthesize=_expression
+ (id)stateOperationForTargetPlugObjectID:(id)targetPlugObjectID withStateKey:(id)stateKey andExpression:(id)expression;	// 0x333f7311
- (id)initWithImprint:(id)imprint;	// 0x333f7359
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x333f7479
- (void)demolish;	// 0x333f73c9
- (id)description;	// 0x333f74cd
// declared property getter: - (id)expression;	// 0x333f7525
- (id)imprint;	// 0x333f7419
// declared property setter: - (void)setExpression:(id)expression;	// 0x333f7539
@end

