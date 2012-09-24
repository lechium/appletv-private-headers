/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class ScrollAnimationDelegate, BRFadeMaskLayer;

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
@property(assign) int animationMode;	// G=0x2ef789; S=0x2ef5a1; converted property
@property(assign, nonatomic) BOOL autoChangeAnimationModes;	// G=0x2efb81; S=0x2efb91; @synthesize=_autoChangeAnimationModes
@property(assign) BOOL constrainAllContentToEdges;	// G=0x2ef58d; S=0x2ef571; converted property
@property(retain) BRControl *content;	// G=0x2ef121; S=0x2eeff9; converted property
@property(assign) float edgeFadePercentage;	// G=0x2ef561; S=0x2ef509; converted property
@property(assign) BOOL followsFocus;	// G=0x2ef361; S=0x2ef325; converted property
@property(assign) int scrollDirection;	// G=0x2ef7b5; S=0x2ef799; converted property
@property(assign) BOOL useRealMasks;	// G=0x2ef4f9; S=0x2ef4cd; converted property
- (id)init;	// 0x2eedd5
- (BOOL)_animatingPositionChange;	// 0x2efe01
- (void)_attemptToRemoveFadeMask;	// 0x2f16d9
- (id)_bottomFadeFilters;	// 0x2f18bd
- (float)_calculateXPositionForPlane:(CGPoint)plane halfScrollerWidth:(float)width halfPlaneWidth:(float)width3;	// 0x2f023d
- (float)_calculateYPositionForPlane:(CGPoint)plane halfScrollerHeight:(float)height halfPlaneHeight:(float)height3;	// 0x2f02dd
- (void)_enlargeScrollPlaneHeight:(CGPoint)height oldPosition:(CGPoint)position;	// 0x2f037d
- (void)_enlargeScrollPlaneWidth:(CGPoint)width oldPosition:(CGPoint)position;	// 0x2f043d
- (id)_fadeMaskForBounds:(CGSize)bounds;	// 0x2f1621
- (void)_focusChanged:(id)changed;	// 0x2f0b41
- (id)_leftFadeFilters;	// 0x2f19d1
- (void)_minimizeVisiblePlaneArea;	// 0x2f04fd
- (id)_parentScrollControl;	// 0x2f059d
- (id)_rightFadeFilters;	// 0x2f1ae5
- (void)_scrollPoint:(CGPoint)point fromControl:(id)control;	// 0x2f0805
- (void)_scrollRect:(CGRect)rect fromControl:(id)control;	// 0x2f0851
- (BOOL)_setPlanePosition:(CGPoint)position;	// 0x2efe61
- (id)_topFadeFilters;	// 0x2f17a9
- (void)_updateEdgeFading;	// 0x2f0c15
- (void)_updateFocusNotifications;	// 0x2f0a99
- (void)_updateHorizontalEdgeFading;	// 0x2f1155
- (void)_updateScrollPositionForFocus;	// 0x2f08d5
- (void)_updateVerticalEdgeFading;	// 0x2f0c65
- (CGRect)_visibleRectOfControl:(id)control;	// 0x2f05a1
// converted property getter: - (int)animationMode;	// 0x2ef789
// declared property getter: - (BOOL)autoChangeAnimationModes;	// 0x2efb81
- (BOOL)autoScrolling;	// 0x2ef2d1
- (BOOL)brEventAction:(id)action;	// 0x2ef131
// converted property getter: - (BOOL)constrainAllContentToEdges;	// 0x2ef58d
// converted property getter: - (id)content;	// 0x2ef121
- (void)controlWasActivated;	// 0x2ef7c5
- (void)controlWasDeactivated;	// 0x2ef805
- (void)dealloc;	// 0x2eeebd
// converted property getter: - (float)edgeFadePercentage;	// 0x2ef561
// converted property getter: - (BOOL)followsFocus;	// 0x2ef361
- (void)layoutSubcontrols;	// 0x2ef845
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x2efb05
// converted property getter: - (int)scrollDirection;	// 0x2ef7b5
- (void)scrollToControl:(id)control;	// 0x2ef3e1
- (void)scrollToPoint:(CGPoint)point;	// 0x2ef371
- (void)scrollToRect:(CGRect)rect;	// 0x2ef3a5
- (BOOL)scrolling;	// 0x2ef2ad
- (void)scrollingCompleted;	// 0x2efb49
// converted property setter: - (void)setAnimationMode:(int)mode;	// 0x2ef5a1
// declared property setter: - (void)setAutoChangeAnimationModes:(BOOL)modes;	// 0x2efb91
// converted property setter: - (void)setConstrainAllContentToEdges:(BOOL)edges;	// 0x2ef571
// converted property setter: - (void)setContent:(id)content;	// 0x2eeff9
// converted property setter: - (void)setEdgeFadePercentage:(float)percentage;	// 0x2ef509
// converted property setter: - (void)setFollowsFocus:(BOOL)focus;	// 0x2ef325
// converted property setter: - (void)setScrollDirection:(int)direction;	// 0x2ef799
// converted property setter: - (void)setUseRealMasks:(BOOL)masks;	// 0x2ef4cd
// converted property getter: - (BOOL)useRealMasks;	// 0x2ef4f9
@end
