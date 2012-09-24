/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UISnapshotView, UIInputViewSet, UIInputViewAnimationStyle;

__attribute__((visibility("hidden")))
@interface UIInputViewTransition : NSObject {
	UIInputViewSet *oldSet;	// 4 = 0x4
	UIInputViewSet *newSet;	// 8 = 0x8
	UIInputViewAnimationStyle *animationStyle;	// 12 = 0xc
	BOOL cancelled;	// 16 = 0x10
	int animationState;	// 20 = 0x14
	double animationStartTime;	// 24 = 0x18
	BOOL skipNotifications;	// 32 = 0x20
	BOOL skipFencing;	// 33 = 0x21
	CGRect beginFrame;	// 36 = 0x24
	CGRect endFrame;	// 52 = 0x34
	CGRect beginFrameScreen;	// 68 = 0x44
	CGRect endFrameScreen;	// 84 = 0x54
	CGRect beginFloatingFrame;	// 100 = 0x64
	CGRect endFloatingFrame;	// 116 = 0x74
	CGRect beginFloatingFrameScreen;	// 132 = 0x84
	CGRect endFloatingFrameScreen;	// 148 = 0x94
	UISnapshotView *snapshotView;	// 164 = 0xa4
	CGRect snapshotViewEndFrame;	// 168 = 0xa8
}
@property(assign, nonatomic) double animationStartTime;	// G=0x30be3f75; S=0x3092a4c5; @synthesize
@property(assign, nonatomic) int animationState;	// G=0x309272ed; S=0x309264e5; @synthesize
@property(retain, nonatomic) UIInputViewAnimationStyle *animationStyle;	// G=0x3092660d; S=0x3092654d; @synthesize
@property(assign, nonatomic) CGRect beginFloatingFrame;	// G=0x30926c19; S=0x30be3fb5; @synthesize
@property(assign, nonatomic) CGRect beginFloatingFrameScreen;	// G=0x30be3ff1; S=0x30926add; @synthesize
@property(assign, nonatomic) CGRect beginFrame;	// G=0x30926a51; S=0x3092655d; @synthesize
@property(assign, nonatomic) CGRect beginFrameScreen;	// G=0x30926bf1; S=0x30926a9d; @synthesize
@property(readonly, assign, nonatomic) int beginState;	// G=0x30be3bf5; 
@property(assign, nonatomic) BOOL cancelled;	// G=0x30927e95; S=0x30be3f65; @synthesize
@property(readonly, assign, nonatomic) CGRect deprecatedBounds;	// G=0x30927bf9; 
@property(readonly, assign, nonatomic) CGPoint deprecatedCenterBegin;	// G=0x30927b51; 
@property(readonly, assign, nonatomic) CGPoint deprecatedCenterEnd;	// G=0x30927cc1; 
@property(assign, nonatomic) CGRect endFloatingFrame;	// G=0x30926c69; S=0x30be3fd5; @synthesize
@property(assign, nonatomic) CGRect endFloatingFrameScreen;	// G=0x30be4019; S=0x30926afd; @synthesize
@property(assign, nonatomic) CGRect endFrame;	// G=0x30926a79; S=0x3092657d; @synthesize
@property(assign, nonatomic) CGRect endFrameScreen;	// G=0x30926c41; S=0x30926abd; @synthesize
@property(readonly, assign, nonatomic) int endState;	// G=0x3092723d; 
@property(retain) UIInputViewSet *newSet;	// G=0x309265d5; S=0x30926505; converted property
@property(retain, nonatomic) UIInputViewSet *oldSet;	// G=0x3092659d; S=0x309264f5; @synthesize
@property(assign, nonatomic) BOOL skipFencing;	// G=0x30be3fa1; S=0x30926a41; @synthesize
@property(assign, nonatomic) BOOL skipNotifications;	// G=0x30927871; S=0x30be3f91; @synthesize
@property(retain, nonatomic) UISnapshotView *snapshotView;	// G=0x3092a491; S=0x3092f5a9; @synthesize
@property(assign, nonatomic) CGRect snapshotViewEndFrame;	// G=0x3092a4a1; S=0x30be403d; @synthesize
@property(readonly, assign, nonatomic) int transitioningState;	// G=0x30927301; 
// declared property getter: - (double)animationStartTime;	// 0x30be3f75
// declared property getter: - (int)animationState;	// 0x309272ed
// declared property getter: - (id)animationStyle;	// 0x3092660d
// declared property getter: - (CGRect)beginFloatingFrame;	// 0x30926c19
// declared property getter: - (CGRect)beginFloatingFrameScreen;	// 0x30be3ff1
// declared property getter: - (CGRect)beginFrame;	// 0x30926a51
// declared property getter: - (CGRect)beginFrameScreen;	// 0x30926bf1
// declared property getter: - (int)beginState;	// 0x30be3bf5
// declared property getter: - (BOOL)cancelled;	// 0x30927e95
- (void)dealloc;	// 0x3092f505
// declared property getter: - (CGRect)deprecatedBounds;	// 0x30927bf9
// declared property getter: - (CGPoint)deprecatedCenterBegin;	// 0x30927b51
// declared property getter: - (CGPoint)deprecatedCenterEnd;	// 0x30927cc1
- (id)description;	// 0x30be3d59
// declared property getter: - (CGRect)endFloatingFrame;	// 0x30926c69
// declared property getter: - (CGRect)endFloatingFrameScreen;	// 0x30be4019
// declared property getter: - (CGRect)endFrame;	// 0x30926a79
// declared property getter: - (CGRect)endFrameScreen;	// 0x30926c41
// declared property getter: - (int)endState;	// 0x3092723d
- (BOOL)fadeAccessoryView;	// 0x30927ea5
- (BOOL)isAlmostDone;	// 0x30be3c61
- (BOOL)isOnScreen;	// 0x30be3d1d
// converted property getter: - (id)newSet;	// 0x309265d5
// declared property getter: - (id)oldSet;	// 0x3092659d
- (void)postNotificationsForTransitionEnd;	// 0x3092aaa9
- (void)postNotificationsForTransitionStart;	// 0x3092751d
- (BOOL)requiresAutomaticAppearanceEnabled;	// 0x30a6f2ed
// declared property setter: - (void)setAnimationStartTime:(double)time;	// 0x3092a4c5
// declared property setter: - (void)setAnimationState:(int)state;	// 0x309264e5
// declared property setter: - (void)setAnimationStyle:(id)style;	// 0x3092654d
// declared property setter: - (void)setBeginFloatingFrame:(CGRect)frame;	// 0x30be3fb5
// declared property setter: - (void)setBeginFloatingFrameScreen:(CGRect)screen;	// 0x30926add
// declared property setter: - (void)setBeginFrame:(CGRect)frame;	// 0x3092655d
// declared property setter: - (void)setBeginFrameScreen:(CGRect)screen;	// 0x30926a9d
// declared property setter: - (void)setCancelled:(BOOL)cancelled;	// 0x30be3f65
// declared property setter: - (void)setEndFloatingFrame:(CGRect)frame;	// 0x30be3fd5
// declared property setter: - (void)setEndFloatingFrameScreen:(CGRect)screen;	// 0x30926afd
// declared property setter: - (void)setEndFrame:(CGRect)frame;	// 0x3092657d
// declared property setter: - (void)setEndFrameScreen:(CGRect)screen;	// 0x30926abd
// converted property setter: - (void)setNewSet:(id)set;	// 0x30926505
// declared property setter: - (void)setOldSet:(id)set;	// 0x309264f5
// declared property setter: - (void)setSkipFencing:(BOOL)fencing;	// 0x30926a41
// declared property setter: - (void)setSkipNotifications:(BOOL)notifications;	// 0x30be3f91
// declared property setter: - (void)setSnapshotView:(id)view;	// 0x3092f5a9
// declared property setter: - (void)setSnapshotViewEndFrame:(CGRect)frame;	// 0x30be403d
- (BOOL)shouldCompleteOnSuspend;	// 0x30be3d19
// declared property getter: - (BOOL)skipFencing;	// 0x30be3fa1
// declared property getter: - (BOOL)skipNotifications;	// 0x30927871
// declared property getter: - (id)snapshotView;	// 0x3092a491
// declared property getter: - (CGRect)snapshotViewEndFrame;	// 0x3092a4a1
- (BOOL)subsumesTransition:(id)transition;	// 0x30a0dcf1
// declared property getter: - (int)transitioningState;	// 0x30927301
- (id)userInfoForTransition;	// 0x30927881
@end
