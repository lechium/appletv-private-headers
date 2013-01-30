/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStatusBarServerClient.h"
#import "UIScrollsToTopInitiatorView.h"

@class UILabel, UIStatusBarBackgroundView, UIStatusBarForegroundView, UIColor, NSMutableArray, UIStatusBarServer, UIStatusBarWindow, UIStatusBarStyleAnimationParameters, NSString;
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
	XXStruct_dUflDB _currentRawData;	// 84 = 0x54
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
	XXStruct_ZVOZFA *_localDataOverrides;	// 2096 = 0x830
	UIColor *_tintColor;	// 2100 = 0x834
	UIColor *_lastUsedTintColor;	// 2104 = 0x838
	UIStatusBarStyleAnimationParameters *_nextTintTransition;	// 2108 = 0x83c
}
@property(assign, getter=isHidden) BOOL hidden;	// G=0x32c994fd; S=0x32fb1801; converted property
@property(assign, nonatomic) UIStatusBarWindow *statusBarWindow;	// G=0x32fb1999; S=0x32ce4331; @synthesize=_statusBarWindow
@property(assign, nonatomic) id<UIStatusBarStyleDelegate> styleDelegate;	// G=0x32fb1989; S=0x32ce54a9; @synthesize=_styleDelegate
+ (CGRect)_frameForStyle:(int)style orientation:(int)orientation inWindowOfSize:(CGSize)size;	// 0x32d54b59
+ (int)cornerStyleForRequestedStyle:(int)requestedStyle effectiveStyle:(int)style alignment:(int)alignment;	// 0x32c9801d
+ (int)cornerStyleMatchingStyle:(int)style;	// 0x32c980fd
+ (id)defaultBlueTintColor;	// 0x32cfa36d
+ (double)defaultGlowAnimationDurationForStyle:(int)style;	// 0x32fb0e39
+ (int)defaultStatusBarStyleWithTint:(BOOL)tint;	// 0x32ce550d
+ (int)defaultStyleForRequestedStyle:(int)requestedStyle styleOverrides:(int)overrides;	// 0x32c97fc5
+ (CGRect)frameForStyle:(int)style orientation:(int)orientation;	// 0x32fb0e81
+ (void)getData:(XXStruct_dUflDB *)data forRequestedData:(const XXStruct_dUflDB *)requestedData withOverrides:(const XXStruct_ZVOZFA *)overrides;	// 0x32c8f819
+ (float)heightForStyle:(int)style orientation:(int)orientation;	// 0x32c98155
+ (int)lowBatteryLevel;	// 0x32c9cea5
+ (id)navBarTintColorFromStatusBarTintColor:(id)statusBarTintColor;	// 0x32cfa3b9
+ (void)setSuppressUpdateAnimations:(BOOL)animations;	// 0x32ce0271
+ (void)setTintOverrideEnabled:(BOOL)enabled withColor:(id)color;	// 0x32ce020d
+ (id)statusBarTintColorForNavBarTintColor:(id)navBarTintColor;	// 0x32ce2e09
- (id)initWithFrame:(CGRect)frame;	// 0x32ce1385
- (id)initWithFrame:(CGRect)frame showForegroundView:(BOOL)view;	// 0x32ce13b5
- (void)_adjustDoubleHeightTextVisibility;	// 0x32ce76c5
- (void)_crossfadeToNewBackgroundView;	// 0x32ce757d
- (void)_crossfadeToNewForegroundViewWithAlpha:(float)alpha;	// 0x32ce750d
- (id)_currentComposedData;	// 0x32c952b5
- (id)_currentComposedDataForStyle:(int)style;	// 0x32c952d5
- (void)_didEnterBackground:(id)background;	// 0x32d143e1
- (void)_evaluateServerRegistration;	// 0x32ce1ae5
- (void)_finishedSettingStyleWithOldHeight:(float)oldHeight newHeight:(float)height animation:(int)animation;	// 0x32ce7785
- (float)_foregroundAlphaForStatusBarStyle:(int)statusBarStyle;	// 0x32ce6209
- (int)_foregroundStyleForStatusBarStyle:(int)statusBarStyle;	// 0x32ce5b6d
- (float)_hiddenAlphaForHideAnimationParameters:(id)hideAnimationParameters;	// 0x32e1993d
- (CGAffineTransform)_hiddenTransformForHideAnimationParameters:(id)hideAnimationParameters;	// 0x32e197fd
- (void)_hideAnimationDidStop;	// 0x32e1a58d
- (id)_prepareInterruptedAnimationCompositeViewIncludingForeground:(BOOL)foreground;	// 0x32fb13a9
- (id)_prepareToSetStyle:(int)setStyle animation:(int)animation;	// 0x32ce5565
- (void)_setDoubleHeightStatusString:(id)string;	// 0x32ce5099
- (void)_setFrameForStyle:(int)style;	// 0x32ce7649
- (void)_setStyle:(int)style;	// 0x32ce742d
- (void)_setStyle:(int)style animation:(int)animation;	// 0x32ce7325
- (BOOL)_shouldSeekHigherPriorityTouchTarget;	// 0x32e4b289
- (CGAffineTransform)_slideTransform;	// 0x32fb1351
- (void)_styleAnimationDidStop:(id)_styleAnimation finished:(id)finished context:(void *)context;	// 0x32dd48f5
- (void)_swapToNewBackgroundView;	// 0x32ce7879
- (void)_swapToNewForegroundView;	// 0x32ce78cd
- (BOOL)_touchShouldProduceReturnEvent;	// 0x32e4b2e1
- (void)_willEnterForeground:(id)foreground;	// 0x32e31659
- (id)activeTintColor;	// 0x32ce54b9
- (void)crossfadeTime:(BOOL)time duration:(double)duration;	// 0x32fb18c1
- (id)currentDoubleHeightLabelText;	// 0x32fb1341
- (CGRect)currentFrame;	// 0x32fb10d5
- (float)currentHeight;	// 0x32ce92f9
- (int)currentStyle;	// 0x32d14e91
- (void)dealloc;	// 0x32fb0cc9
- (void)didMoveToSuperview;	// 0x32ce4345
- (void)forceUpdateData:(BOOL)data;	// 0x32ce4401
- (void)forceUpdateDoubleHeightStatus;	// 0x32ce4eb1
- (void)forceUpdateGlowAnimation;	// 0x32ce5329
- (void)forceUpdateStyleOverrides:(BOOL)overrides;	// 0x32ce44a5
- (void)forceUpdateToData:(const XXStruct_dUflDB *)data animated:(BOOL)animated;	// 0x32ce4441
- (void)forgetEitherSideHistory;	// 0x32ce5489
- (CGRect)frameForOrientation:(int)orientation;	// 0x32fb1109
- (float)heightForOrientation:(int)orientation;	// 0x32ce2721
// converted property getter: - (BOOL)isHidden;	// 0x32c994fd
- (void)layoutSubviews;	// 0x32d0a0f9
- (void)noteStyleOverridesChangedLocally;	// 0x32fb0efd
- (void)requestStyle:(int)style;	// 0x32fb1189
- (void)requestStyle:(int)style animated:(BOOL)animated;	// 0x32c977b5
- (void)requestStyle:(int)style animation:(int)animation startTime:(double)time duration:(double)duration curve:(int)curve;	// 0x32fb11a1
- (void)requestStyle:(int)style animationParameters:(id)parameters;	// 0x32c978c1
- (void)setBackgroundAlpha:(float)alpha;	// 0x32fb0f61
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x32fb1801
- (void)setHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x32fb1795
- (void)setHidden:(BOOL)hidden animationParameters:(id)parameters;	// 0x32cfcefd
- (void)setLocalDataOverrides:(XXStruct_ZVOZFA *)overrides;	// 0x32fb1085
- (void)setOrientation:(int)orientation;	// 0x32ce7ce1
- (void)setShowsOnlyCenterItems:(BOOL)items;	// 0x32fb1035
// declared property setter: - (void)setStatusBarWindow:(id)window;	// 0x32ce4331
// declared property setter: - (void)setStyleDelegate:(id)delegate;	// 0x32ce54a9
- (void)setSuppressesGlow:(BOOL)glow;	// 0x32fb0f11
- (void)setSuppressesHiddenSideEffects:(BOOL)effects;	// 0x32fb1815
- (void)setTintColor:(id)color;	// 0x32fb1739
- (void)setTintColor:(id)color withDuration:(double)duration;	// 0x32ce2f0d
- (void)statusBarServer:(id)server didReceiveDoubleHeightStatusString:(id)string forStyle:(int)style;	// 0x32dd4779
- (void)statusBarServer:(id)server didReceiveGlowAnimationState:(BOOL)state forStyle:(int)style;	// 0x32fb1889
- (void)statusBarServer:(id)server didReceiveStatusBarData:(XXStruct_dUflDB *)data withActions:(int)actions;	// 0x32c951f1
- (void)statusBarServer:(id)server didReceiveStyleOverrides:(int)overrides;	// 0x32c97755
// declared property getter: - (id)statusBarWindow;	// 0x32fb1999
// declared property getter: - (id)styleDelegate;	// 0x32fb1989
- (int)styleForRequestedStyle:(int)requestedStyle;	// 0x32c97ed1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32e4f359
@end
