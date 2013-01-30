/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRFadeMaskLayer, ScrollAnimationDelegate;

__attribute__((visibility("hidden")))
@interface BRScrollControl : BRControl {
	BRControl *_content;	// 84 = 0x54
	BRControl *_topFade;	// 88 = 0x58
	BRControl *_bottomFade;	// 92 = 0x5c
	BRControl *_leftFade;	// 96 = 0x60
	BRControl *_rightFade;	// 100 = 0x64
	BRFadeMaskLayer *_mask;	// 104 = 0x68
	ScrollAnimationDelegate *_animationDelegate;	// 108 = 0x6c
	int _scrollDirection;	// 112 = 0x70
	int _mode;	// 116 = 0x74
	float _edgeFadePercent;	// 120 = 0x78
	float _extraBottomSpace;	// 124 = 0x7c
	float _extraTopSpace;	// 128 = 0x80
	float _extraLeftSpace;	// 132 = 0x84
	float _extraRightSpace;	// 136 = 0x88
	BOOL _scrollPointSet;	// 140 = 0x8c
	BOOL _constrainAllContentToEdges;	// 141 = 0x8d
	BOOL _useRealMasks;	// 142 = 0x8e
	BOOL _followsFocus;	// 143 = 0x8f
	BOOL _contentLayoutDone;	// 144 = 0x90
	BOOL _repeatActive;	// 145 = 0x91
	BOOL _autoChangeAnimationModes;	// 146 = 0x92
}
@property(assign) int animationMode;	// G=0x2fb5f1; S=0x2fb409; converted property
@property(assign, nonatomic) BOOL autoChangeAnimationModes;	// G=0x2fb9e9; S=0x2fb9f9; @synthesize=_autoChangeAnimationModes
@property(assign) BOOL constrainAllContentToEdges;	// G=0x2fb3f5; S=0x2fb3d9; converted property
@property(retain) BRControl *content;	// G=0x2faf89; S=0x2fae61; converted property
@property(assign) float edgeFadePercentage;	// G=0x2fb3c9; S=0x2fb371; converted property
@property(assign) BOOL followsFocus;	// G=0x2fb1c9; S=0x2fb18d; converted property
@property(assign) int scrollDirection;	// G=0x2fb61d; S=0x2fb601; converted property
@property(assign) BOOL useRealMasks;	// G=0x2fb361; S=0x2fb335; converted property
- (id)init;	// 0x2fac3d
- (BOOL)_animatingPositionChange;	// 0x2fbc69
- (void)_attemptToRemoveFadeMask;	// 0x2fd541
- (id)_bottomFadeFilters;	// 0x2fd725
- (float)_calculateXPositionForPlane:(CGPoint)plane halfScrollerWidth:(float)width halfPlaneWidth:(float)width3;	// 0x2fc0a5
- (float)_calculateYPositionForPlane:(CGPoint)plane halfScrollerHeight:(float)height halfPlaneHeight:(float)height3;	// 0x2fc145
- (void)_enlargeScrollPlaneHeight:(CGPoint)height oldPosition:(CGPoint)position;	// 0x2fc1e5
- (void)_enlargeScrollPlaneWidth:(CGPoint)width oldPosition:(CGPoint)position;	// 0x2fc2a5
- (id)_fadeMaskForBounds:(CGSize)bounds;	// 0x2fd489
- (void)_focusChanged:(id)changed;	// 0x2fc9a9
- (id)_leftFadeFilters;	// 0x2fd839
- (void)_minimizeVisiblePlaneArea;	// 0x2fc365
- (id)_parentScrollControl;	// 0x2fc405
- (id)_rightFadeFilters;	// 0x2fd94d
- (void)_scrollPoint:(CGPoint)point fromControl:(id)control;	// 0x2fc66d
- (void)_scrollRect:(CGRect)rect fromControl:(id)control;	// 0x2fc6b9
- (BOOL)_setPlanePosition:(CGPoint)position;	// 0x2fbcc9
- (id)_topFadeFilters;	// 0x2fd611
- (void)_updateEdgeFading;	// 0x2fca7d
- (void)_updateFocusNotifications;	// 0x2fc901
- (void)_updateHorizontalEdgeFading;	// 0x2fcfbd
- (void)_updateScrollPositionForFocus;	// 0x2fc73d
- (void)_updateVerticalEdgeFading;	// 0x2fcacd
- (CGRect)_visibleRectOfControl:(id)control;	// 0x2fc409
// converted property getter: - (int)animationMode;	// 0x2fb5f1
// declared property getter: - (BOOL)autoChangeAnimationModes;	// 0x2fb9e9
- (BOOL)autoScrolling;	// 0x2fb139
- (BOOL)brEventAction:(id)action;	// 0x2faf99
// converted property getter: - (BOOL)constrainAllContentToEdges;	// 0x2fb3f5
// converted property getter: - (id)content;	// 0x2faf89
- (void)controlWasActivated;	// 0x2fb62d
- (void)controlWasDeactivated;	// 0x2fb66d
- (void)dealloc;	// 0x2fad25
// converted property getter: - (float)edgeFadePercentage;	// 0x2fb3c9
// converted property getter: - (BOOL)followsFocus;	// 0x2fb1c9
- (void)layoutSubcontrols;	// 0x2fb6ad
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x2fb96d
// converted property getter: - (int)scrollDirection;	// 0x2fb61d
- (void)scrollToControl:(id)control;	// 0x2fb249
- (void)scrollToPoint:(CGPoint)point;	// 0x2fb1d9
- (void)scrollToRect:(CGRect)rect;	// 0x2fb20d
- (BOOL)scrolling;	// 0x2fb115
- (void)scrollingCompleted;	// 0x2fb9b1
// converted property setter: - (void)setAnimationMode:(int)mode;	// 0x2fb409
// declared property setter: - (void)setAutoChangeAnimationModes:(BOOL)modes;	// 0x2fb9f9
// converted property setter: - (void)setConstrainAllContentToEdges:(BOOL)edges;	// 0x2fb3d9
// converted property setter: - (void)setContent:(id)content;	// 0x2fae61
// converted property setter: - (void)setEdgeFadePercentage:(float)percentage;	// 0x2fb371
// converted property setter: - (void)setFollowsFocus:(BOOL)focus;	// 0x2fb18d
// converted property setter: - (void)setScrollDirection:(int)direction;	// 0x2fb601
// converted property setter: - (void)setUseRealMasks:(BOOL)masks;	// 0x2fb335
// converted property getter: - (BOOL)useRealMasks;	// 0x2fb361
@end
