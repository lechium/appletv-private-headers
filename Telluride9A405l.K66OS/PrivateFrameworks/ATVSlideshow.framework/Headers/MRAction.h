/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class MCAction, NSMutableDictionary;

@interface MRAction : NSObject {
	MCAction *mMCAction;	// 4 = 0x4
	id mSender;	// 8 = 0x8
	NSMutableDictionary *mStates;	// 12 = 0xc
	double mTime;	// 16 = 0x10
}
@property(readonly, assign) MCAction *action;	// G=0x3359809d; @synthesize=mMCAction
@property(retain) id sender;	// G=0x335980ad; S=0x335980c1; @synthesize=mSender
@property(retain) NSMutableDictionary *states;	// G=0x335980e5; S=0x335980f9; @synthesize=mStates
@property(assign) double time;	// G=0x3359811d; S=0x33598151; @synthesize=mTime
- (id)initWithAction:(id)action;	// 0x33597fb5
// declared property getter: - (id)action;	// 0x3359809d
- (void)dealloc;	// 0x33598009
// declared property getter: - (id)sender;	// 0x335980ad
// declared property setter: - (void)setSender:(id)sender;	// 0x335980c1
// declared property setter: - (void)setStates:(id)states;	// 0x335980f9
// declared property setter: - (void)setTime:(double)time;	// 0x33598151
// declared property getter: - (id)states;	// 0x335980e5
// declared property getter: - (double)time;	// 0x3359811d
@end

