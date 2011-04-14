/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIScrollerIndicator;

@interface UIScroller : UIView {
	CGSize _contentSize;	// 44 = 0x2c
	id _delegate;	// 52 = 0x34
	UIScrollerIndicator *_verticalScrollerIndicator;	// 56 = 0x38
	UIScrollerIndicator *_horizontalScrollerIndicator;	// 60 = 0x3c
	struct {
		unsigned bounceEnabled : 1;
		unsigned rubberBanding : 1;
		unsigned scrollingDisabled : 1;
		unsigned scrollingDisabledOnMouseDown : 1;
		unsigned directionalLockEnabled : 1;
		unsigned eventMode : 3;
		unsigned dragging : 1;
		unsigned mouseDragged : 1;
		unsigned scrollTriggered : 1;
		unsigned dontSelect : 1;
		unsigned contentHighlighted : 1;
		unsigned lockVertical : 1;
		unsigned lockHorizontal : 1;
		unsigned keepLocked : 1;
		unsigned bouncedVertical : 1;
		unsigned bouncedHorizontal : 1;
		unsigned mouseUpGuard : 1;
		unsigned pushedTrackingMode : 1;
		unsigned delegateScrollerDidScroll : 1;
		unsigned delegateScrollerAdjustSmoothScrollEndVelocity : 1;
		unsigned delegateScrollerShouldAdjustSmoothScrollEndForVelocity : 1;
		unsigned offsetIgnoresContentSize : 1;
		unsigned usingThumb : 1;
		unsigned thumbDetectionEnabled : 1;
		unsigned showScrollerIndicators : 1;
		unsigned indicatorSubrect : 1;
		unsigned indicatorHideInGesture : 1;
		unsigned pinIndicatorToContent : 1;
		unsigned indicatorStyle : 2;
		unsigned multipleDrag : 1;
		unsigned showBackgroundShadow : 1;
		unsigned cancelNextContentMouseUp : 1;
		unsigned displayingScrollIndicators : 1;
		unsigned dontResetStartTouchPosition : 1;
		unsigned verticalIndicatorShrunk : 1;
		unsigned horizontalIndicatorShrunk : 1;
		unsigned highlightContentImmediately : 1;
		unsigned adjustedEndOffset : 1;
		unsigned ignoreNextMouseDrag : 1;
		unsigned contentFitDisableScrolling : 1;
		unsigned dontScrollToTop : 1;
		unsigned scrollingToTop : 1;
		unsigned delegateScrollerAdjustScrollToTopEnd : 1;
		unsigned autoscrolling : 1;
		unsigned reserved : 17;
	} _scrollerFlags;	// 64 = 0x40
	float _scrollHysteresis;	// 72 = 0x48
	float _scrollDecelerationFactor;	// 76 = 0x4c
	double _scrollToPointAnimationDuration;	// 80 = 0x50
	float _directionalScrollingAngle;	// 88 = 0x58
	float _farthestDistance;	// 92 = 0x5c
	float _leftRubberBandWidth;	// 96 = 0x60
	float _rightRubberBandWidth;	// 100 = 0x64
	float _topRubberBandHeight;	// 104 = 0x68
	float _bottomRubberBandHeight;	// 108 = 0x6c
	float _bottomBufferHeight;	// 112 = 0x70
	CGPoint _initialTouchPosition;	// 116 = 0x74
	CGPoint _startTouchPosition;	// 124 = 0x7c
	double _startTouchTime;	// 132 = 0x84
	CGPoint _startOffset;	// 140 = 0x8c
	CGPoint _lastTouchPosition;	// 148 = 0x94
	double _lastTouchTime;	// 156 = 0x9c
	double _lastUpdateTime;	// 164 = 0xa4
	CGPoint _lastUpdateOffset;	// 172 = 0xac
	UIView *_lastHighlightedView;	// 180 = 0xb4
	CADoublePoint _velocity;	// 184 = 0xb8
	CADoublePoint _previousVelocity;	// 200 = 0xc8
	CADoublePoint _decelerationFactor;	// 216 = 0xd8
	CADoublePoint _decelerationLnFactor;	// 232 = 0xe8
	CGPoint _stopOffset;	// 248 = 0xf8
	void *_scrollHeartbeat;	// 256 = 0x100
	CGRect _indicatorSubrect;	// 260 = 0x104
	UIView *_scrollerShadows[2];	// 276 = 0x114
	UIView *_contentShadows[8];	// 284 = 0x11c
	id _scrollNotificationViews;	// 316 = 0x13c
	CGSize _gridSize;	// 320 = 0x140
	CADoublePoint _gridBounceLnFactor;	// 328 = 0x148
}
@property(assign) BOOL adjustForContentSizeChange;	// G=0x30772a6d; S=0x30772a49; converted property
@property(assign) CGPoint autoscrollContentOffset;	// G=0x30773a79; S=0x30772da1; converted property
@property(assign) float bottomBufferHeight;	// G=0x3064e4e1; S=0x30773e71; converted property
@property(assign) BOOL bounces;	// G=0x30772b71; S=0x30772b55; converted property
@property(assign) CGSize contentSize;	// G=0x3064af89; S=0x3064cacd; converted property
@property(assign) id delegate;	// G=0x30772c75; S=0x3064d589; converted property
@property(assign) BOOL directionalScrolling;	// G=0x30772ad1; S=0x30772ab5; converted property
@property(assign) float directionalScrollingAngle;	// G=0x30772ae5; S=0x3064b0e1; converted property
@property(assign) int eventMode;	// G=0x30772aa5; S=0x3064d749; converted property
@property(assign) CGSize gridSize;	// G=0x30772b9d; S=0x30772b85; converted property
@property(assign) CGPoint offset;	// G=0x3064afa1; S=0x3064ea9d; converted property
@property(assign) float scrollDecelerationFactor;	// G=0x30772b45; S=0x3064b0d1; converted property
@property(assign) float scrollHysteresis;	// G=0x30772a95; S=0x3064b119; converted property
@property(assign) double scrollToPointAnimationDuration;	// G=0x30772a85; S=0x3064d14d; converted property
@property(assign) int scrollerIndicatorStyle;	// G=0x30772c19; S=0x3064b549; converted property
@property(assign) CGRect scrollerIndicatorSubrect;	// G=0x30772be5; S=0x30773f1d; converted property
@property(assign) BOOL scrollerIndicatorsPinToContent;	// G=0x30772c01; S=0x3077374d; converted property
@property(assign) BOOL scrollingEnabled;	// G=0x30772b15; S=0x30772af5; converted property
@property(assign, nonatomic) BOOL scrollsToTop;	// G=0x30772d0d; S=0x307732f5; 
@property(assign) BOOL showBackgroundShadow;	// G=0x30772c85; S=0x30773fb9; converted property
@property(assign) BOOL showScrollerIndicators;	// G=0x30772bcd; S=0x3064d761; converted property
@property(assign) BOOL thumbDetectionEnabled;	// G=0x30772bb5; S=0x3064b0fd; converted property
@property(readonly, assign) CADoublePoint velocity;	// G=0x30772cd1; converted property
+ (void)_registerForNotifications;	// 0x305bd2cd
+ (void)_unregisterForNotifications;	// 0x30774355
- (id)initWithFrame:(CGRect)frame;	// 0x3064a931
- (void)_addScrollNotificationView:(id)view;	// 0x30773225
- (void)_adjustBackgroundShadowsForContentSize:(CGSize)contentSize;	// 0x30774a69
- (void)_adjustEndOffset;	// 0x3065d2e1
- (void)_adjustScrollerIndicators:(BOOL)indicators alwaysShowingThem:(BOOL)them;	// 0x3064b5f1
- (void)_adjustSpecialViews;	// 0x3064ccd9
- (BOOL)_alwaysHandleInteractionEvents;	// 0x30772d2d
- (id)_bottomShadowView;	// 0x30772d71
- (id)_bottomSpecialView;	// 0x30654ca9
- (void)_cancelContentHighlight;	// 0x3064dc1d
- (BOOL)_commonCancelMouseAndTouchTracking;	// 0x30661d5d
- (BOOL)_continueScrollingAtOffset:(CGPoint)offset;	// 0x30772d9d
- (void)_controlMouseDown:(GSEventRef)down;	// 0x30772f6d
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x30772f0d
- (void)_controlMouseUp:(GSEventRef)up;	// 0x30772f3d
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x30772ec9
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x30772e41
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x30772e85
- (id)_defaultHitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x30658f11
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x3064fcf5
- (void)_disableScrollingIfEntirelyVisible;	// 0x3064b051
- (void)_disableScrollingIfNecessary;	// 0x307e09e5
- (void)_doContentHighlight;	// 0x3066111d
- (BOOL)_dragging;	// 0x3065c609
- (void)_enableScrollingIfNecessary;	// 0x307e09fd
- (id)_gestureTargetHitTest:(CGPoint)test withEvent:(id)event;	// 0x30658e7d
- (void)_hideScrollIndicators;	// 0x30772f9d
- (CGPoint)_initialTouchPosition;	// 0x30772d49
- (BOOL)_isAutoscrolling;	// 0x30772d81
- (BOOL)_isRectFullyVisible:(CGRect)visible;	// 0x307742e1
- (BOOL)_isScrollingEnabled;	// 0x306f1add
- (BOOL)_isUserScrolling;	// 0x30772d31
- (void)_notifyDidScroll;	// 0x3064afc9
- (BOOL)_passControlEvents;	// 0x30772d99
- (CGPoint)_pinnedScrollPointForPoint:(CGPoint)point;	// 0x3064e969
- (void)_popTrackingRunLoopMode;	// 0x3065db31
- (void)_removeScrollNotificationView:(id)view;	// 0x30773141
- (void)_resetScrollingWithEvent:(GSEventRef)event;	// 0x306594f9
- (void)_runLoopModePopped:(id)popped;	// 0x30772db5
- (void)_scrollAnimationEnded;	// 0x3065f171
- (BOOL)_scrollToTop;	// 0x30774935
- (void)_scrollerDidEndDragging;	// 0x3065e581
- (void)_scrollerWillStartDragging;	// 0x3065adb9
- (BOOL)_scrollsToMakeFirstResponderVisible;	// 0x30772d29
- (void)_setAutoscrolling:(BOOL)autoscrolling;	// 0x30773089
- (void)_smoothScroll:(double)scroll;	// 0x3065c61d
- (void)_startTimer:(BOOL)timer;	// 0x3065bd09
- (void)_stopScrollingNotify:(BOOL)notify dealloc:(BOOL)dealloc pin:(BOOL)pin;	// 0x3064dd11
- (id)_topSpecialView;	// 0x30772d61
- (BOOL)_usesDifferentHitTestForGestures;	// 0x30658e79
// converted property getter: - (BOOL)adjustForContentSizeChange;	// 0x30772a6d
- (BOOL)adjustSmoothScrollEnd:(CADoublePoint)end;	// 0x30772d01
// converted property getter: - (CGPoint)autoscrollContentOffset;	// 0x30773a79
// converted property getter: - (float)bottomBufferHeight;	// 0x3064e4e1
// converted property getter: - (BOOL)bounces;	// 0x30772b71
- (BOOL)canHandleSwipes;	// 0x30773431
- (BOOL)cancelMouseTracking;	// 0x30661d45
- (void)cancelNextContentMouseUp;	// 0x30772c9d
- (BOOL)cancelTouchTracking;	// 0x307733d9
- (CGRect)contentFrameForView:(id)view;	// 0x307739d9
- (void)contentMouseUpInView:(id)view withEvent:(GSEventRef)event;	// 0x307733ad
// converted property getter: - (CGSize)contentSize;	// 0x3064af89
- (void)dealloc;	// 0x30660f55
// converted property getter: - (id)delegate;	// 0x30772c75
// converted property getter: - (BOOL)directionalScrolling;	// 0x30772ad1
// converted property getter: - (float)directionalScrollingAngle;	// 0x30772ae5
- (void)displayScrollerIndicators;	// 0x307735e5
- (CGPoint)dragStartOffset;	// 0x3065a925
// converted property getter: - (int)eventMode;	// 0x30772aa5
- (void)gestureChanged:(GSEventRef)changed;	// 0x30774761
- (void)gestureEnded:(GSEventRef)ended;	// 0x307738d9
- (void)gestureStarted:(GSEventRef)started;	// 0x3077396d
// converted property getter: - (CGSize)gridSize;	// 0x30772b9d
- (void)highlightView:(id)view state:(BOOL)state;	// 0x30773375
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x30658add
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x307734ad
- (BOOL)isDecelerating;	// 0x30772ced
- (BOOL)isScrollEnabled;	// 0x30772b2d
- (BOOL)isScrolling;	// 0x30658ff5
- (void)mouseDown:(GSEventRef)down;	// 0x30659051
- (void)mouseDragged:(GSEventRef)dragged;	// 0x30659891
- (void)mouseUp:(GSEventRef)up;	// 0x3065b2fd
// converted property getter: - (CGPoint)offset;	// 0x3064afa1
- (BOOL)releaseRubberBandIfNecessary;	// 0x30773c5d
- (void)removeFromSuperview;	// 0x30660081
- (float)rubberBandValueForEdge:(unsigned)edge;	// 0x30772c2d
- (void)scrollByDelta:(CGSize)delta;	// 0x307738b5
- (void)scrollByDelta:(CGSize)delta animated:(BOOL)animated;	// 0x307746c5
// converted property getter: - (float)scrollDecelerationFactor;	// 0x30772b45
// converted property getter: - (float)scrollHysteresis;	// 0x30772a95
- (void)scrollPointVisibleAtTopLeft:(CGPoint)topLeft;	// 0x30773891
- (void)scrollPointVisibleAtTopLeft:(CGPoint)topLeft animated:(BOOL)animated;	// 0x3064e731
- (void)scrollRectToVisible:(CGRect)visible;	// 0x3077384d
- (void)scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;	// 0x3077452d
// converted property getter: - (double)scrollToPointAnimationDuration;	// 0x30772a85
// converted property getter: - (int)scrollerIndicatorStyle;	// 0x30772c19
// converted property getter: - (CGRect)scrollerIndicatorSubrect;	// 0x30772be5
// converted property getter: - (BOOL)scrollerIndicatorsPinToContent;	// 0x30772c01
// converted property getter: - (BOOL)scrollingEnabled;	// 0x30772b15
// declared property getter: - (BOOL)scrollsToTop;	// 0x30772d0d
// converted property setter: - (void)setAdjustForContentSizeChange:(BOOL)contentSizeChange;	// 0x30772a49
- (void)setAllowsFourWayRubberBanding:(BOOL)banding;	// 0x30773799
- (void)setAllowsHorizontalRubberBanding:(BOOL)banding;	// 0x307737cd
- (void)setAllowsRubberBanding:(BOOL)banding;	// 0x30773835
- (void)setAllowsVerticalRubberBanding:(BOOL)banding;	// 0x30773801
// converted property setter: - (void)setAutoscrollContentOffset:(CGPoint)offset;	// 0x30772da1
// converted property setter: - (void)setBottomBufferHeight:(float)height;	// 0x30773e71
// converted property setter: - (void)setBounces:(BOOL)bounces;	// 0x30772b55
// converted property setter: - (void)setContentSize:(CGSize)size;	// 0x3064cacd
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3064d589
// converted property setter: - (void)setDirectionalScrolling:(BOOL)scrolling;	// 0x30772ab5
// converted property setter: - (void)setDirectionalScrollingAngle:(float)angle;	// 0x3064b0e1
// converted property setter: - (void)setEventMode:(int)mode;	// 0x3064d749
- (void)setFrame:(CGRect)frame;	// 0x3064ace5
// converted property setter: - (void)setGridSize:(CGSize)size;	// 0x30772b85
- (void)setHighlightContentImmediately:(BOOL)immediately;	// 0x30772cb5
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x3064ea9d
- (void)setOffsetForDragOffset:(CGPoint)dragOffset withEvent:(GSEventRef)event duration:(float)duration;	// 0x3065adf5
- (void)setRubberBand:(float)band forEdges:(unsigned)edges;	// 0x307734f1
// converted property setter: - (void)setScrollDecelerationFactor:(float)factor;	// 0x3064b0d1
// converted property setter: - (void)setScrollHysteresis:(float)hysteresis;	// 0x3064b119
// converted property setter: - (void)setScrollToPointAnimationDuration:(double)pointAnimationDuration;	// 0x3064d14d
// converted property setter: - (void)setScrollerIndicatorStyle:(int)style;	// 0x3064b549
// converted property setter: - (void)setScrollerIndicatorSubrect:(CGRect)subrect;	// 0x30773f1d
// converted property setter: - (void)setScrollerIndicatorsPinToContent:(BOOL)content;	// 0x3077374d
// converted property setter: - (void)setScrollingEnabled:(BOOL)enabled;	// 0x30772af5
// declared property setter: - (void)setScrollsToTop:(BOOL)top;	// 0x307732f5
// converted property setter: - (void)setShowBackgroundShadow:(BOOL)shadow;	// 0x30773fb9
// converted property setter: - (void)setShowScrollerIndicators:(BOOL)indicators;	// 0x3064d761
// converted property setter: - (void)setThumbDetectionEnabled:(BOOL)enabled;	// 0x3064b0fd
// converted property getter: - (BOOL)showBackgroundShadow;	// 0x30772c85
// converted property getter: - (BOOL)showScrollerIndicators;	// 0x30772bcd
- (int)swipe:(int)swipe withEvent:(GSEventRef)event;	// 0x307733f1
// converted property getter: - (BOOL)thumbDetectionEnabled;	// 0x30772bb5
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30658f45
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30773499
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3065b245
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30659699
// converted property getter: - (CADoublePoint)velocity;	// 0x30772cd1
@end

