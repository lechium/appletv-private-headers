/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSMutableDictionary, NSDictionary, NSString;

@interface MCTransition : MCAction {
@private
	NSMutableDictionary *_transitionAttributes;	// 12 = 0xc
	NSString *_transitionID;	// 16 = 0x10
	double _transitionDuration;	// 20 = 0x14
	NSString *_transitionDestinationPlugID;	// 28 = 0x1c
}
@property(copy, nonatomic) NSDictionary *transitionAttributes;	// G=0x35589a49; S=0x35589a59; @synthesize=_transitionAttributes
@property(copy) NSString *transitionDestinationPlugID;	// G=0x35589a7d; S=0x35589a91; @synthesize=_transitionDestinationPlugID
@property(assign, nonatomic) double transitionDuration;	// G=0x35589a31; S=0x35589891; @synthesize=_transitionDuration
@property(copy) NSString *transitionID;	// G=0x355899f9; S=0x35589a0d; @synthesize=_transitionID
+ (id)transitionForTargetPlugObjectID:(id)targetPlugObjectID withTransitionID:(id)transitionID;	// 0x35589531
- (id)initWithImprint:(id)imprint;	// 0x355895a5
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x355898a5
- (void)demolish;	// 0x355896ed
- (id)imprint;	// 0x35589781
// declared property setter: - (void)setTransitionAttributes:(id)attributes;	// 0x35589a59
// declared property setter: - (void)setTransitionDestinationPlugID:(id)anId;	// 0x35589a91
// declared property setter: - (void)setTransitionDuration:(double)duration;	// 0x35589891
// declared property setter: - (void)setTransitionID:(id)anId;	// 0x35589a0d
// declared property getter: - (id)transitionAttributes;	// 0x35589a49
// declared property getter: - (id)transitionDestinationPlugID;	// 0x35589a7d
// declared property getter: - (double)transitionDuration;	// 0x35589a31
// declared property getter: - (id)transitionID;	// 0x355899f9
@end
