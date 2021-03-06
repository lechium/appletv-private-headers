/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStatusBarServerClient.h"
#import "UIKit-Structs.h"
#import "UIScrollsToTopInitiatorView.h"

@class NSMutableArray, UIStatusBarBackgroundView, UILabel, UIStatusBarForegroundView, UIStatusBarServer, UIColor, UIStatusBarWindow, UIStatusBarStyleAnimationParameters, NSString;
@protocol UIStatusBarStyleDelegate;

@interface UIStatusBar : UIScrollsToTopInitiatorView <UIStatusBarServerClient> {
	id<UIStatusBarStyleDelegate> _styleDelegate;	// 52 = 0x34
	UIStatusBarWindow *_statusBarWindow;	// 56 = 0x38
	UIStatusBarServer *_statusBarServer;	// 60 = 0x3c
	BOOL _showsForeground;	// 64 = 0x40
	UIStatusBarBackgroundView *_backgroundView;	// 68 = 0x44
	UIStatusBarForegroundView *_foregroundView;	// 72 = 0x48
	UILabel *_doubleHeightLabel;	// 76 = 0x4c
	NSString *_currentDoubleHeightText;	// 80 = 0x50
	XXStruct_vuV5MB _currentRawData;	// 84 = 0x54
	NSMutableArray *_interruptedAnimationCompositeViews;	// 2048 = 0x800
	UIStatusBarBackgroundView *_newStyleBackgroundView;	// 2052 = 0x804
	UIStatusBarForegroundView *_newStyleForegroundView;	// 2056 = 0x808
	UIStatusBar *_slidingStatusBar;	// 2060 = 0x80c
	int _requestedStyle;	// 2064 = 0x810
	int _styleOverrides;	// 2068 = 0x814
	int _style;	// 2072 = 0x818
	int _orientation;	// 2076 = 0x81c
	BOOL _hidden;	// 2080 = 0x820
	BOOL _suppressesHiddenSideEffects;	// 2081 = 0x821
	BOOL _foreground;	// 2082 = 0x822
	BOOL _registered;	// 2083 = 0x823
	BOOL _styleRequestedWhileHidden;	// 2084 = 0x824
	BOOL _waitingOnCallbackAfterChangingStyleOverridesLocally;	// 2085 = 0x825
	BOOL _suppressGlow;	// 2086 = 0x826
	float _translucentBackgroundAlpha;	// 2088 = 0x828
	BOOL _showOnlyCenterItems;	// 2092 = 0x82c
	XXStruct_qh_S0D *_localDataOverrides;	// 2096 = 0x830
	UIColor *_tintColor;	// 2100 = 0x834
	UIColor *_lastUsedTintColor;	// 2104 = 0x838
	UIStatusBarStyleAnimationParameters *_nextTintTransition;	// 2108 = 0x83c
}
@property(assign, getter=isHidden) BOOL hidden;	// G=0x30c23d75; S=0x30f11289; converted property
@property(assign, nonatomic) UIStatusBarWindow *statusBarWindow;	// G=0x30f11529; S=0x30c3fa31; @synthesize=_statusBarWindow
@property(assign, nonatomic) id<UIStatusBarStyleDelegate> styleDelegate;	// G=0x30f11519; S=0x30c3fa41; @synthesize=_styleDelegate
+ (CGRect)_frameForStyle:(int)style orientation:(int)orientation inWindowOfSize:(CGSize)size;	// 0x30cc6161
+ (int)cornerStyleForRequestedStyle:(int)requestedStyle effectiveStyle:(int)style alignment:(int)alignment;	// 0x30c301c5
+ (int)cornerStyleMatchingStyle:(int)style;	// 0x30f101c9
+ (id)defaultBlueTintColor;	// 0x30f10221
+ (double)defaultGlowAnimationDurationForStyle:(int)style;	// 0x30f100c1
+ (int)defaultStatusBarStyleWithTint:(BOOL)tint;	// 0x30f10181
+ (int)defaultStyleForRequestedStyle:(int)requestedStyle styleOverrides:(int)overrides;	// 0x30c30179
+ (CGRect)frameForStyle:(int)style orientation:(int)orientation;	// 0x30f10101
+ (void)getData:(XXStruct_vuV5MB *)data forRequestedData:(const XXStruct_vuV5MB *)requestedData withOverrides:(const XXStruct_qh_S0D *)overrides;	// 0x30f10441
+ (float)heightForStyle:(int)style orientation:(int)orientation;	// 0x30c41a5d
+ (int)lowBatteryLevel;	// 0x30f106ed
+ (id)navBarTintColorFromStatusBarTintColor:(id)statusBarTintColor;	// 0x30f10369
+ (void)setSuppressUpdateAnimations:(BOOL)animations;	// 0x30f11209
+ (void)setTintOverrideEnabled:(BOOL)enabled withColor:(id)color;	// 0x30f111a5
+ (id)statusBarTintColorForNavBarTintColor:(id)navBarTintColor;	// 0x30f10269
- (id)initWithFrame:(CGRect)frame;	// 0x30c3e0dd
- (id)initWithFrame:(CGRect)frame showForegroundView:(BOOL)view;	// 0x30c3e10d
- (void)_adjustDoubleHeightTextVisibility;	// 0x30c42385
- (void)_crossfadeToNewBackgroundView;	// 0x30c42135
- (void)_crossfadeToNewForegroundViewWithAlpha:(float)alpha;	// 0x30c420c5
- (id)_currentComposedData;	// 0x30c1f175
- (id)_currentComposedDataForStyle:(int)style;	// 0x30c1f195
- (void)_didEnterBackground:(id)background;	// 0x30c7a649
- (void)_evaluateServerRegistration;	// 0x30f1131d
- (void)_finishedSettingStyleWithOldHeight:(float)oldHeight newHeight:(float)height animation:(int)animation;	// 0x30c42445
- (float)_foregroundAlphaForStatusBarStyle:(int)statusBarStyle;	// 0x30c40a71
- (int)_foregroundStyleForStatusBarStyle:(int)statusBarStyle;	// 0x30c40955
- (float)_hiddenAlphaForHideAnimationParameters:(id)hideAnimationParameters;	// 0x30d67ebd
- (CGAffineTransform)_hiddenTransformForHideAnimationParameters:(id)hideAnimationParameters;	// 0x30d67d7d
- (void)_hideAnimationDidStop;	// 0x30d6c40d
- (id)_prepareInterruptedAnimationCompositeViewIncludingForeground:(BOOL)foreground;	// 0x30f10be1
- (id)_prepareToSetStyle:(int)setStyle animation:(int)animation;	// 0x30c4016d
- (void)_setDoubleHeightStatusString:(id)string;	// 0x30c41c51
- (void)_setFrameForStyle:(int)style;	// 0x30c42309
- (void)_setStyle:(int)style;	// 0x30c41fe5
- (void)_setStyle:(int)style animation:(int)animation;	// 0x30c41edd
- (BOOL)_shouldSeekHigherPriorityTouchTarget;	// 0x30d8aa71
- (CGAffineTransform)_slideTransform;	// 0x30f10b89
- (void)_styleAnimationDidStop:(id)_styleAnimation finished:(id)finished context:(void *)context;	// 0x30d649c5
- (void)_swapToNewBackgroundView;	// 0x30c42539
- (void)_swapToNewForegroundView;	// 0x30c4258d
- (BOOL)_touchShouldProduceReturnEvent;	// 0x30d8aac9
- (void)_willEnterForeground:(id)foreground;	// 0x30cdbea1
- (id)activeTintColor;	// 0x30f10f71
- (void)crossfadeTime:(BOOL)time duration:(double)duration;	// 0x30f11451
- (id)currentDoubleHeightLabelText;	// 0x30f10b79
- (CGRect)currentFrame;	// 0x30f1090d
- (float)currentHeight;	// 0x30c438d9
- (int)currentStyle;	// 0x30c7ae69
- (void)dealloc;	// 0x30f0ff51
- (void)didMoveToSuperview;	// 0x30f1130d
- (void)forceUpdateData:(BOOL)data;	// 0x30cdbec1
- (void)forceUpdateDoubleHeightStatus;	// 0x30c768d1
- (void)forceUpdateGlowAnimation;	// 0x30cdbf61
- (void)forceUpdateStyleOverrides:(BOOL)overrides;	// 0x30cdbf05
- (void)forceUpdateToData:(const XXStruct_vuV5MB *)data animated:(BOOL)animated;	// 0x30f10701
- (void)forgetEitherSideHistory;	// 0x30f10779
- (CGRect)frameForOrientation:(int)orientation;	// 0x30f10941
- (float)heightForOrientation:(int)orientation;	// 0x30c438f9
// converted property getter: - (BOOL)isHidden;	// 0x30c23d75
- (void)layoutSubviews;	// 0x30f11151
- (void)noteStyleOverridesChangedLocally;	// 0x30f10765
- (void)requestStyle:(int)style;	// 0x30f109c1
- (void)requestStyle:(int)style animated:(BOOL)animated;	// 0x30c3fa55
- (void)requestStyle:(int)style animation:(int)animation startTime:(double)time duration:(double)duration curve:(int)curve;	// 0x30f109d9
- (void)requestStyle:(int)style animationParameters:(id)parameters;	// 0x30c2fa89
- (void)setBackgroundAlpha:(float)alpha;	// 0x30f10799
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x30f11289
- (void)setHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x30f1121d
- (void)setHidden:(BOOL)hidden animationParameters:(id)parameters;	// 0x30c86065
- (void)setLocalDataOverrides:(XXStruct_qh_S0D *)overrides;	// 0x30f108bd
- (void)setOrientation:(int)orientation;	// 0x30c429a1
- (void)setShowsOnlyCenterItems:(BOOL)items;	// 0x30f1086d
// declared property setter: - (void)setStatusBarWindow:(id)window;	// 0x30c3fa31
// declared property setter: - (void)setStyleDelegate:(id)delegate;	// 0x30c3fa41
- (void)setSuppressesGlow:(BOOL)glow;	// 0x30c2f791
- (void)setSuppressesHiddenSideEffects:(BOOL)effects;	// 0x30f1129d
- (void)setTintColor:(id)color;	// 0x30f10fc1
- (void)setTintColor:(id)color withDuration:(double)duration;	// 0x30f1101d
- (void)statusBarServer:(id)server didReceiveDoubleHeightStatusString:(id)string forStyle:(int)style;	// 0x30d3e139
- (void)statusBarServer:(id)server didReceiveGlowAnimationState:(BOOL)state forStyle:(int)style;	// 0x30f11419
- (void)statusBarServer:(id)server didReceiveStatusBarData:(XXStruct_vuV5MB *)data withActions:(int)actions;	// 0x30c1f0b1
- (void)statusBarServer:(id)server didReceiveStyleOverrides:(int)overrides;	// 0x30d3df7d
// declared property getter: - (id)statusBarWindow;	// 0x30f11529
// declared property getter: - (id)styleDelegate;	// 0x30f11519
- (int)styleForRequestedStyle:(int)requestedStyle;	// 0x30c30081
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30d91131
@end

