/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSString;

@interface MCStateOperation : MCAction {
	NSString *_stateKey;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL alwaysNotifies;	// G=0x33244d91; S=0x33244da5; 
@property(assign, nonatomic) BOOL recordsTime;	// G=0x33244dc9; S=0x33244ddd; 
@property(copy) NSString *stateKey;	// G=0x33244ead; S=0x33244ec1; @synthesize=_stateKey
+ (id)stateOperationForTargetPlugObjectID:(id)targetPlugObjectID withStateKey:(id)stateKey;	// 0x33244c09
- (id)initWithImprint:(id)imprint;	// 0x33244c71
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x33244e01
// declared property getter: - (BOOL)alwaysNotifies;	// 0x33244d91
- (void)demolish;	// 0x33244ce1
- (id)description;	// 0x33244e55
- (id)imprint;	// 0x33244d31
// declared property getter: - (BOOL)recordsTime;	// 0x33244dc9
// declared property setter: - (void)setAlwaysNotifies:(BOOL)notifies;	// 0x33244da5
// declared property setter: - (void)setRecordsTime:(BOOL)time;	// 0x33244ddd
// declared property setter: - (void)setStateKey:(id)key;	// 0x33244ec1
// declared property getter: - (id)stateKey;	// 0x33244ead
@end

