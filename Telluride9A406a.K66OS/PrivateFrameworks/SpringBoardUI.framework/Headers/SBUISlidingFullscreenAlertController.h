/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SBUIFullscreenAlertController.h"

@class UIView;

@interface SBUISlidingFullscreenAlertController : SBUIFullscreenAlertController {
	UIView *_topBar;	// 172 = 0xac
	UIView *_bottomBar;	// 176 = 0xb0
	BOOL _animatingIn;	// 180 = 0xb4
	BOOL _animatingOut;	// 181 = 0xb5
}
@property(readonly, assign, nonatomic) UIView *bottomBar;	// G=0x36116ccd; @synthesize=_bottomBar
@property(readonly, assign, nonatomic) UIView *topBar;	// G=0x36116cdd; @synthesize=_topBar
- (BOOL)_animatingToHomescreenWallpaper;	// 0x361174e1
- (void)_fadeOutCompleted:(id)completed;	// 0x36116d81
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;	// 0x36116f31
- (void)animateDisplayIn:(float)anIn middleDelay:(float)delay;	// 0x36117525
- (void)animateViewOut;	// 0x36117211
- (id)backgroundView;	// 0x36116ced
// declared property getter: - (id)bottomBar;	// 0x36116ccd
- (void)dealloc;	// 0x36117901
- (BOOL)displaysAboveStatusBar;	// 0x36116c8d
- (void)finishedAnimatingIn;	// 0x36116e05
- (void)finishedAnimatingOut;	// 0x36116cc9
- (BOOL)isShowingWallpaper;	// 0x36116c95
- (BOOL)isSlidingViewController;	// 0x36116c89
- (id)newBottomBar;	// 0x36116c91
- (id)newTopBar;	// 0x36116e39
- (void)performAnimateDisplayIn;	// 0x36116d0d
- (void)prepareToAnimateDisplayIn;	// 0x361177cd
- (BOOL)shouldShowBottomBar;	// 0x36116c99
// declared property getter: - (id)topBar;	// 0x36116cdd
- (void)viewDidLoad;	// 0x3611700d
- (BOOL)viewIsReadyToBeRemoved;	// 0x36116cb1
- (void)viewWillAnimateOut;	// 0x36116c9d
- (void)viewWillAppear:(BOOL)view;	// 0x361171a5
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x361170f5
@end

