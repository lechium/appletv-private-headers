/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObjectBase.h"

@class NSString, MCMontage;

@interface MCObject : MCObjectBase {
	MCMontage *mMontage;	// 4 = 0x4
	NSString *mObjectID;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) MCMontage *montage;	// G=0x36153be5; @synthesize=mMontage
@property(readonly, assign, nonatomic) NSString *objectID;	// G=0x36153bd5; @synthesize=mObjectID
+ (id)objectWithImprint:(id)imprint andMontage:(id)montage;	// 0x3615385d
- (id)initFromScratchWithMontage:(id)montage;	// 0x361538c5
- (id)initSnapshot;	// 0x361539c1
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x36153959
- (void)dealloc;	// 0x36153a69
- (void)demolish;	// 0x36153acd
- (void)finalize;	// 0x36153a05
- (id)imprint;	// 0x36153b05
- (BOOL)isSnapshot;	// 0x36153ae1
// declared property getter: - (id)montage;	// 0x36153be5
// declared property getter: - (id)objectID;	// 0x36153bd5
- (id)snapshot;	// 0x36153b71
@end

