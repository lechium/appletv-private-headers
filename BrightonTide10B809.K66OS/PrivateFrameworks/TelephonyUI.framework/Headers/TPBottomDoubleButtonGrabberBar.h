/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPBottomDoubleButtonBar.h"
#import "TPBottomGrabberBar.h"

@class UIImage, NSArray;

@interface TPBottomDoubleButtonGrabberBar : TPBottomDoubleButtonBar <TPBottomGrabberBar> {
	UIView *_grabberView;	// 136 = 0x88
	UIImage *_grabberImage;	// 140 = 0x8c
	NSArray *_grabberGestureRecognizers;	// 144 = 0x90
	BOOL _isAnimatingOutGrabber;	// 148 = 0x94
}
@property(retain, nonatomic) NSArray *grabberGestureRecognizers;	// G=0x355eba71; S=0x355eb90d; @synthesize=_grabberGestureRecognizers
@property(retain, nonatomic) UIImage *grabberImage;	// G=0x355eba4d; S=0x355eb8b5; @synthesize=_grabberImage
@property(readonly, assign) UIView *grabberView;	// G=0x355eba5d; @synthesize=_grabberView
+ (id)answerButtonImage;	// 0x355ead51
+ (id)declineButtonImage;	// 0x355ead89
+ (id)videoAnswerButtonImage;	// 0x355eadc1
+ (id)videoDeclineButtonImage;	// 0x355eadf9
- (id)initForIncomingCallWithFrame:(CGRect)frame;	// 0x355eae31
- (id)initForVideoChatWithFrame:(CGRect)frame;	// 0x355eaef1
- (float)_buttonWidth;	// 0x355eb029
- (void)_layoutWells;	// 0x355eb161
- (void)animateGrabberOutWithCompletion:(id)completion;	// 0x355eb5c9
- (void)dealloc;	// 0x355eafb1
// declared property getter: - (id)grabberGestureRecognizers;	// 0x355eba71
// declared property getter: - (id)grabberImage;	// 0x355eba4d
// declared property getter: - (id)grabberView;	// 0x355eba5d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x355eb7f9
- (void)layoutSubviews;	// 0x355eb311
// declared property setter: - (void)setGrabberGestureRecognizers:(id)recognizers;	// 0x355eb90d
// declared property setter: - (void)setGrabberImage:(id)image;	// 0x355eb8b5
@end

