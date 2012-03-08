/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class ScrollAnimationDelegate, BRFadeMaskLayer;

@interface BRScrollControl : BRControl {
@private
	BRControl *_content;	// 48 = 0x30
	BRControl *_topFade;	// 52 = 0x34
	BRControl *_bottomFade;	// 56 = 0x38
	BRControl *_leftFade;	// 60 = 0x3c
	BRControl *_rightFade;	// 64 = 0x40
	BRFadeMaskLayer *_mask;	// 68 = 0x44
	ScrollAnimationDelegate *_animationDelegate;	// 72 = 0x48
	int _scrollDirection;	// 76 = 0x4c
	int _mode;	// 80 = 0x50
	float _edgeFadePercent;	// 84 = 0x54
	float _extraBottomSpace;	// 88 = 0x58
	float _extraTopSpace;	// 92 = 0x5c
	float _extraLeftSpace;	// 96 = 0x60
	float _extraRightSpace;	// 100 = 0x64
	BOOL _scrollPointSet;	// 104 = 0x68
	BOOL _constrainAllContentToEdges;	// 105 = 0x69
	BOOL _useRealMasks;	// 106 = 0x6a
	BOOL _followsFocus;	// 107 = 0x6b
	BOOL _repeatActive;	// 108 = 0x6c
	BOOL _autoChangeAnimationModes;	// 109 = 0x6d
}
@property(assign) int animationMode;	// G=0x3309b029; S=0x3309ae45; converted property
@property(assign, nonatomic) BOOL autoChangeAnimationModes;	// G=0x3309b439; S=0x3309b449; @synthesize=_autoChangeAnimationModes
@property(assign) BOOL constrainAllContentToEdges;	// G=0x3309ae35; S=0x3309ae19; converted property
@property(retain) BRControl *content;	// G=0x3309a9bd; S=0x3309a8b5; converted property
@property(assign) float edgeFadePercentage;	// G=0x3309ae09; S=0x3309ada9; converted property
@property(assign) BOOL followsFocus;	// G=0x3309abf9; S=0x3309abbd; converted property
@property(assign) int scrollDirection;	// G=0x3309b055; S=0x3309b039; converted property
@property(assign) BOOL useRealMasks;	// G=0x3309ad99; S=0x3309ad69; converted property
- (id)init;	// 0x3309a68d
- (BOOL)_animatingPositionChange;	// 0x3309b6ad
- (void)_attemptToRemoveFadeMask;	// 0x3309cddd
- (id)_bottomFadeFilters;	// 0x3309cfcd
- (float)_calculateXPositionForPlane:(CGPoint)plane halfScrollerWidth:(float)width halfPlaneWidth:(float)width3;	// 0x3309ba55
- (float)_calculateYPositionForPlane:(CGPoint)plane halfScrollerHeight:(float)height halfPlaneHeight:(float)height3;	// 0x3309baf1
- (void)_enlargeScrollPlaneHeight:(CGPoint)height oldPosition:(CGPoint)position;	// 0x3309bb8d
- (void)_enlargeScrollPlaneWidth:(CGPoint)width oldPosition:(CGPoint)position;	// 0x3309bc4d
- (id)_fadeMaskForBounds:(CGSize)bounds;	// 0x3309cd29
- (void)_focusChanged:(id)changed;	// 0x3309c351
- (id)_leftFadeFilters;	// 0x3309d0e1
- (void)_minimizeVisiblePlaneArea;	// 0x3309bd0d
- (id)_parentScrollControl;	// 0x3309bdb1
- (id)_rightFadeFilters;	// 0x3309d1f5
- (void)_scrollPoint:(CGPoint)point fromControl:(id)control;	// 0x3309c01d
- (void)_scrollRect:(CGRect)rect fromControl:(id)control;	// 0x3309c071
- (BOOL)_setPlanePosition:(CGPoint)position;	// 0x3309b70d
- (id)_topFadeFilters;	// 0x3309ceb9
- (void)_updateEdgeFading;	// 0x3309c39d
- (void)_updateFocusNotifications;	// 0x3309c2a5
- (void)_updateHorizontalEdgeFading;	// 0x3309c8a5
- (void)_updateScrollPositionForFocus;	// 0x3309c0f1
- (void)_updateVerticalEdgeFading;	// 0x3309c3ed
- (CGRect)_visibleRectOfControl:(id)control;	// 0x3309bdb5
// converted property getter: - (int)animationMode;	// 0x3309b029
// declared property getter: - (BOOL)autoChangeAnimationModes;	// 0x3309b439
- (BOOL)autoScrolling;	// 0x3309ab69
- (BOOL)brEventAction:(id)action;	// 0x3309a9cd
// converted property getter: - (BOOL)constrainAllContentToEdges;	// 0x3309ae35
// converted property getter: - (id)content;	// 0x3309a9bd
- (void)controlWasActivated;	// 0x3309b065
- (void)controlWasDeactivated;	// 0x3309b0a5
- (void)dealloc;	// 0x3309a775
// converted property getter: - (float)edgeFadePercentage;	// 0x3309ae09
// converted property getter: - (BOOL)followsFocus;	// 0x3309abf9
- (void)layoutSubcontrols;	// 0x3309b0e5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3309b3bd
// converted property getter: - (int)scrollDirection;	// 0x3309b055
- (void)scrollToControl:(id)control;	// 0x3309ac79
- (void)scrollToPoint:(CGPoint)point;	// 0x3309ac09
- (void)scrollToRect:(CGRect)rect;	// 0x3309ac3d
- (BOOL)scrolling;	// 0x3309ab45
- (void)scrollingCompleted;	// 0x3309b3fd
// converted property setter: - (void)setAnimationMode:(int)mode;	// 0x3309ae45
// declared property setter: - (void)setAutoChangeAnimationModes:(BOOL)modes;	// 0x3309b449
// converted property setter: - (void)setConstrainAllContentToEdges:(BOOL)edges;	// 0x3309ae19
// converted property setter: - (void)setContent:(id)content;	// 0x3309a8b5
// converted property setter: - (void)setEdgeFadePercentage:(float)percentage;	// 0x3309ada9
// converted property setter: - (void)setFollowsFocus:(BOOL)focus;	// 0x3309abbd
// converted property setter: - (void)setScrollDirection:(int)direction;	// 0x3309b039
// converted property setter: - (void)setUseRealMasks:(BOOL)masks;	// 0x3309ad69
// converted property getter: - (BOOL)useRealMasks;	// 0x3309ad99
@end

