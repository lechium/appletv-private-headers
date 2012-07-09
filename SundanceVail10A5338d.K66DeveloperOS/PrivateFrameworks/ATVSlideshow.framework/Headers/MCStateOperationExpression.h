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
@property(copy) NSString *expression;	// G=0x334b3e95; S=0x334b3ea9; @synthesize=_expression
+ (id)stateOperationForTargetPlugObjectID:(id)targetPlugObjectID withStateKey:(id)stateKey andExpression:(id)expression;	// 0x334b3c81
- (id)initWithImprint:(id)imprint;	// 0x334b3cc9
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x334b3de9
- (void)demolish;	// 0x334b3d39
- (id)description;	// 0x334b3e3d
// declared property getter: - (id)expression;	// 0x334b3e95
- (id)imprint;	// 0x334b3d89
// declared property setter: - (void)setExpression:(id)expression;	// 0x334b3ea9
@end
