/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIMovieScrubberTrackViewDelegate.h"
#import "UIMovieScrubberTrackViewDataSource.h"
#import "UIControl.h"

@class UIMovieScrubberTrackView, UIMovieScrubberEditingView, UIImage, UILabel, UIImageView;
@protocol UIMovieScrubberDataSource, UIMovieScrubberDelegate;

@interface UIMovieScrubber : UIControl <UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate> {
	UIImageView *_thumbView;	// 68 = 0x44
	UIMovieScrubberTrackView *_trackView;	// 72 = 0x48
	UIMovieScrubberEditingView *_editingView;	// 76 = 0x4c
	UILabel *_elapsedLabel;	// 80 = 0x50
	UILabel *_remainingLabel;	// 84 = 0x54
	int _timeComponents;	// 88 = 0x58
	UIImage *_fillImage;	// 92 = 0x5c
	UIImage *_innerShadowImage;	// 96 = 0x60
	UIImage *_maskImage;	// 100 = 0x64
	UIImage *_shadowImage;	// 104 = 0x68
	id<UIMovieScrubberDataSource> _dataSource;	// 108 = 0x6c
	id<UIMovieScrubberDelegate> _delegate;	// 112 = 0x70
	CGRect _trackRect;	// 116 = 0x74
	float _hitOffset;	// 132 = 0x84
	float _zoomDelay;	// 136 = 0x88
	BOOL _showTimeViews;	// 140 = 0x8c
	BOOL _editable;	// 141 = 0x8d
	double _value;	// 144 = 0x90
	double _maximumValue;	// 152 = 0x98
	double _minimumValue;	// 160 = 0xa0
	CGPoint _touchLocationWhenTrackPressBegan;	// 168 = 0xa8
	double _trimStartValue;	// 176 = 0xb0
	double _trimEndValue;	// 184 = 0xb8
	double _minTrimmedLength;	// 192 = 0xc0
	double _maxTrimmedLength;	// 200 = 0xc8
	double _zoomAnimationDuration;	// 208 = 0xd0
	double _zoomAnimationDelay;	// 216 = 0xd8
	struct {
		unsigned continuous : 1;
		unsigned animating : 1;
		unsigned creatingSnapshot : 1;
		unsigned needsReload : 1;
		unsigned layoutTimeViews : 1;
		unsigned computeTrackRect : 1;
		unsigned clampingTrimRange;
		unsigned zoomed : 1;
		unsigned zoomAnimating : 1;
		unsigned trackIsPressed : 1;
		unsigned trackAnimating : 1;
		unsigned thumbIsVisible : 1;
		unsigned handleIsPressed : 1;
		unsigned willBeginEditing : 1;
		unsigned editing : 1;
		unsigned editingHandle;
		unsigned rotationDisabled;
		unsigned isInNavigationBar : 1;
		unsigned delegateValueDidChange : 1;
		unsigned delegateStartValueDidChange : 1;
		unsigned delegateEndValueDidChange : 1;
		unsigned delegateWillBeginRequestingThumbnails : 1;
		unsigned delegateDidFinishRequestingThumbnails : 1;
		unsigned delegateWillBeginEditing : 1;
		unsigned delegateDidBeginEditing : 1;
		unsigned delegateDidCancelEditing : 1;
		unsigned delegateEditingAnimationFinished : 1;
		unsigned delegateWidthDeltaOriginXDelta : 1;
	} _sliderFlags;	// 224 = 0xe0
}
@property(assign, nonatomic, getter=isContinuous) BOOL continuous;	// G=0x307b6499; S=0x307b647d; 
@property(assign, nonatomic) id<UIMovieScrubberDataSource> dataSource;	// G=0x307b6435; S=0x307b78f1; 
@property(assign, nonatomic) id<UIMovieScrubberDelegate> delegate;	// G=0x307b6445; S=0x307b76b1; 
@property(assign, nonatomic) double duration;	// G=0x307b64e5; S=0x307b7131; @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x307b646d; S=0x307b756d; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x307b64ad; S=0x307b73f9; 
@property(readonly, assign, nonatomic) BOOL isInsideNavigationBar;	// G=0x307b64c1; 
@property(assign, nonatomic) double maximumTrimLength;	// G=0x307b665d; S=0x307b666d; @synthesize=_maxTrimmedLength
@property(assign, nonatomic) double minimumTrimLength;	// G=0x307b6639; S=0x307b6649; @synthesize=_minTrimmedLength
@property(assign, nonatomic) BOOL showTimeViews;	// G=0x307b6681; S=0x307b6691; @synthesize=_showTimeViews
@property(assign, nonatomic) BOOL thumbIsVisible;	// G=0x307b6455; S=0x307b75fd; 
@property(readonly, assign) CGRect trackRect;	// G=0x307b8c39; converted property
@property(assign, nonatomic) double trimEndValue;	// G=0x307b6551; S=0x307b83b9; @dynamic
@property(assign, nonatomic) double trimStartValue;	// G=0x307b64f5; S=0x307b8671; @dynamic
@property(assign, nonatomic) double value;	// G=0x307b64d5; S=0x307b730d; @dynamic
@property(assign, nonatomic) float zoomDelay;	// G=0x307b66a1; S=0x307b66b1; @synthesize=_zoomDelay
+ (id)timeStringForSeconds:(int)seconds forceFullWidthComponents:(BOOL)components isElapsed:(BOOL)elapsed;	// 0x307b6a95
- (id)init;	// 0x307b7919
- (id)initWithFrame:(CGRect)frame;	// 0x307b7be9
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x307b6cc1
- (void)_animateAfterEdit:(BOOL)edit;	// 0x307b90d9
- (void)_beginTrackPressWithTouch:(id)touch touchesBegan:(BOOL)began;	// 0x307b81bd
- (void)_cancelTrackPress:(BOOL)press;	// 0x307b6eb9
- (void)_cancelTrackPressIfNeccessaryWithTouch:(id)touch;	// 0x307b8145
- (void)_computeTrackRectForBounds:(CGRect)bounds;	// 0x307ba281
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x307b65c1
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x307b65c9
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x307b65c5
- (float)_editingFrameDeltaXForValue:(float)value handle:(int)handle;	// 0x307ba605
- (int)_editingHandleWithTouch:(id)touch;	// 0x307b80d5
- (CGRect)_editingRect;	// 0x307b8b99
- (CGRect)_editingViewFrameForEndValueWithFrame:(CGRect)frame;	// 0x307b7055
- (CGRect)_editingViewFrameForStartValueWithFrame:(CGRect)frame;	// 0x307b70bd
- (void)_initSubviews;	// 0x307b9ce1
- (id)_scriptingInfo;	// 0x307b7a29
- (void)_sendDelayedActions;	// 0x307b79c1
- (void)_setValue:(double)value andSendAction:(BOOL)action;	// 0x307b721d
- (void)_sliderAnimationDidStop:(id)_sliderAnimation finished:(id)finished context:(void *)context;	// 0x307b6ff9
- (void)_sliderAnimationWillStart:(id)_sliderAnimation context:(void *)context;	// 0x307b65ad
- (void)_sliderValueDidChange:(id)_sliderValue;	// 0x307b6c75
- (void)_trackPressWasHeld;	// 0x307ba4f5
- (void)_trimAnimationDidStop:(id)_trimAnimation finished:(id)finished context:(id)context;	// 0x307b7411
- (void)_updateThumbLocation;	// 0x307b8935
- (void)_updateTimes;	// 0x307b97ad
- (float)_valueForTouch:(id)touch;	// 0x307b82c9
- (void)animateAfterEdit;	// 0x307b7555
- (void)animateCancelEdit;	// 0x307b753d
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x307b9329
- (BOOL)cancelTouchTracking;	// 0x307b6cd9
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x307b6d3d
// declared property getter: - (id)dataSource;	// 0x307b6435
- (void)dealloc;	// 0x307b7b31
// declared property getter: - (id)delegate;	// 0x307b6445
- (void)didMoveToSuperview;	// 0x307b73b1
- (void)didMoveToWindow;	// 0x307b7389
// declared property getter: - (double)duration;	// 0x307b64e5
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x307b7dd9
- (BOOL)isAnimatingValueChange;	// 0x307b65cd
// declared property getter: - (BOOL)isContinuous;	// 0x307b6499
// declared property getter: - (BOOL)isEditable;	// 0x307b646d
// declared property getter: - (BOOL)isEditing;	// 0x307b64ad
// declared property getter: - (BOOL)isInsideNavigationBar;	// 0x307b64c1
- (void)layoutSubviews;	// 0x307ba7bd
// declared property getter: - (double)maximumTrimLength;	// 0x307b665d
// declared property getter: - (double)minimumTrimLength;	// 0x307b6639
- (void)movieScrubberTrackView:(id)view clampedSizeWidthDelta:(float)delta actualSizeWidthDelta:(float)delta3 originXDelta:(float)delta4 minimumVisibleValue:(float)value maximumVisibleValue:(float)value6;	// 0x307b997d
- (id)movieScrubberTrackView:(id)view evenlySpacedTimestamps:(int)timestamps startingAt:(id)at endingAt:(id)at4;	// 0x307b6bfd
- (void)movieScrubberTrackView:(id)view requestThumbnailImageForTimestamp:(id)timestamp;	// 0x307b6ba1
- (id)movieScrubberTrackView:(id)view timestampsStartingAt:(id)at endingAt:(id)at3 maxCount:(int)count;	// 0x307b6bc5
- (void)movieScrubberTrackViewDidCollapse:(id)movieScrubberTrackView;	// 0x307b6b29
- (void)movieScrubberTrackViewDidExpand:(id)movieScrubberTrackView;	// 0x307b6619
- (void)movieScrubberTrackViewDidFinishRequestingThumbnails:(id)movieScrubberTrackView;	// 0x307b6ab9
- (double)movieScrubberTrackViewDuration:(id)duration;	// 0x307b6c35
- (float)movieScrubberTrackViewThumbnailAspectRatio:(id)ratio;	// 0x307b6b5d
- (void)movieScrubberTrackViewWillBeginRequestingThumbnails:(id)movieScrubberTrackView;	// 0x307b6af1
- (float)movieScrubberTrackViewZoomAnimationDelay:(id)delay;	// 0x307b65fd
- (float)movieScrubberTrackViewZoomAnimationDuration:(id)duration;	// 0x307b65e1
- (BOOL)pointInsideThumb:(CGPoint)thumb withEvent:(id)event;	// 0x307b98dd
- (void)reloadData;	// 0x307b78ad
- (id)scriptingInfoWithChildren;	// 0x307b7f3d
// declared property setter: - (void)setContinuous:(BOOL)continuous;	// 0x307b647d
// declared property setter: - (void)setDataSource:(id)source;	// 0x307b78f1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x307b76b1
// declared property setter: - (void)setDuration:(double)duration;	// 0x307b7131
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x307b756d
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x307b73f9
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x307b8cb9
- (void)setFrame:(CGRect)frame;	// 0x307b964d
// declared property setter: - (void)setMaximumTrimLength:(double)length;	// 0x307b666d
// declared property setter: - (void)setMinimumTrimLength:(double)length;	// 0x307b6649
- (void)setRotationDisabled:(BOOL)disabled;	// 0x307b6f75
// declared property setter: - (void)setShowTimeViews:(BOOL)views;	// 0x307b6691
// declared property setter: - (void)setThumbIsVisible:(BOOL)visible;	// 0x307b75fd
- (void)setThumbnailImage:(CGImageRef)image forTimestamp:(id)timestamp;	// 0x307b6b81
// declared property setter: - (void)setTrimEndValue:(double)value;	// 0x307b83b9
// declared property setter: - (void)setTrimStartValue:(double)value;	// 0x307b8671
// declared property setter: - (void)setValue:(double)value;	// 0x307b730d
- (void)setValue:(double)value animated:(BOOL)animated;	// 0x307b89ad
- (void)setZoomAnimationDuration:(float)duration;	// 0x307b73d9
// declared property setter: - (void)setZoomDelay:(float)delay;	// 0x307b66b1
// declared property getter: - (BOOL)showTimeViews;	// 0x307b6681
// declared property getter: - (BOOL)thumbIsVisible;	// 0x307b6455
- (CGRect)thumbRectForValue:(float)value;	// 0x307ba385
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x307b795d
// converted property getter: - (CGRect)trackRect;	// 0x307b8c39
// declared property getter: - (double)trimEndValue;	// 0x307b6551
// declared property getter: - (double)trimStartValue;	// 0x307b64f5
// declared property getter: - (double)value;	// 0x307b64d5
// declared property getter: - (float)zoomDelay;	// 0x307b66a1
@end

