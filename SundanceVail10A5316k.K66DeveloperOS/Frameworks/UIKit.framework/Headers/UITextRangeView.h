/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class NSArray, UITouch, UITextSelectionView, UISelectionGrabber, NSMutableArray;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextRangeView : UIView {
@private
	UITextSelectionView *m_selectionView;	// 84 = 0x54
	UIResponder<UITextInput> *m_container;	// 88 = 0x58
	int m_mode;	// 92 = 0x5c
	NSArray *m_rects;	// 96 = 0x60
	NSMutableArray *m_rectViews;	// 100 = 0x64
	UITouch *m_activeTouch;	// 104 = 0x68
	CGRect m_startEdge;	// 108 = 0x6c
	CGRect m_endEdge;	// 124 = 0x7c
	CGPoint m_basePoint;	// 140 = 0x8c
	CGPoint m_extentPoint;	// 148 = 0x94
	CGPoint m_initialBasePoint;	// 156 = 0x9c
	CGPoint m_initialExtentPoint;	// 164 = 0xa4
	float m_initialDistance;	// 172 = 0xac
	CGPoint m_touchOffset;	// 176 = 0xb0
	double m_firstMovedTime;	// 184 = 0xb8
	UISelectionGrabber *m_startGrabber;	// 192 = 0xc0
	UISelectionGrabber *m_endGrabber;	// 196 = 0xc4
	BOOL m_animateUpdate;	// 200 = 0xc8
	BOOL m_baseIsStart;	// 201 = 0xc9
	BOOL m_commandsWereShowing;	// 202 = 0xca
	BOOL m_inGesture;	// 203 = 0xcb
	BOOL m_magnifying;	// 204 = 0xcc
	BOOL m_scrolling;	// 205 = 0xcd
	BOOL m_scaling;	// 206 = 0xce
	BOOL m_rotating;	// 207 = 0xcf
	BOOL m_inputViewIsChanging;	// 208 = 0xd0
}
@property(retain, nonatomic) UITouch *activeTouch;	// G=0x30186e79; S=0x3033cf39; @synthesize=m_activeTouch
@property(assign, nonatomic) BOOL animateUpdate;	// G=0x3033d0f1; S=0x3033d101; @synthesize=m_animateUpdate
@property(readonly, assign, nonatomic) BOOL autoscrolled;	// G=0x3033c8f1; 
@property(assign, nonatomic) BOOL baseIsStart;	// G=0x3033cf49; S=0x3033cf59; @synthesize=m_baseIsStart
@property(assign, nonatomic) CGPoint basePoint;	// G=0x3033cfa9; S=0x3033cfc1; @synthesize=m_basePoint
@property(assign, nonatomic) BOOL commandsWereShowing;	// G=0x3033d111; S=0x3033d121; @synthesize=m_commandsWereShowing
@property(readonly, assign, nonatomic) UIResponder<UITextInput> *container;	// G=0x3017f581; 
@property(assign, nonatomic) CGRect endEdge;	// G=0x30180699; S=0x3033cf8d; @synthesize=m_endEdge
@property(retain, nonatomic) UISelectionGrabber *endGrabber;	// G=0x30186f09; S=0x3033d0e1; @synthesize=m_endGrabber
@property(assign, nonatomic) CGPoint extentPoint;	// G=0x3033cfd5; S=0x3033cfed; @synthesize=m_extentPoint
@property(assign, nonatomic) double firstMovedTime;	// G=0x3033d0a5; S=0x3033d0bd; @synthesize=m_firstMovedTime
@property(assign, nonatomic) BOOL inGesture;	// G=0x3033d151; S=0x30186f29; @synthesize=m_inGesture
@property(assign, nonatomic) CGPoint initialBasePoint;	// G=0x3033d001; S=0x3033d019; @synthesize=m_initialBasePoint
@property(assign, nonatomic) float initialDistance;	// G=0x3033d059; S=0x3033d069; @synthesize=m_initialDistance
@property(assign, nonatomic) CGPoint initialExtentPoint;	// G=0x3033d02d; S=0x3033d045; @synthesize=m_initialExtentPoint
@property(assign, nonatomic) BOOL inputViewIsChanging;	// G=0x3033d1b1; S=0x3033d1c1; @synthesize=m_inputViewIsChanging
@property(assign, nonatomic) BOOL isScrolling;	// G=0x3033d161; S=0x30186f19; @synthesize=m_scrolling
@property(assign, nonatomic) BOOL magnifying;	// G=0x3033d131; S=0x3033d141; @synthesize=m_magnifying
@property(assign, nonatomic) int mode;	// G=0x3017fb79; S=0x3017f0f5; @synthesize=m_mode
@property(retain, nonatomic) NSArray *rects;	// G=0x3033b939; S=0x3033b949; @synthesize=m_rects
@property(assign, nonatomic) BOOL rotating;	// G=0x3033d191; S=0x3033d1a1; @synthesize=m_rotating
@property(assign, nonatomic) BOOL scaling;	// G=0x3033d171; S=0x3033d181; @synthesize=m_scaling
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x3033b929; 
@property(assign, nonatomic) CGRect startEdge;	// G=0x30180671; S=0x3033cf6d; @synthesize=m_startEdge
@property(retain, nonatomic) UISelectionGrabber *startGrabber;	// G=0x30186eb1; S=0x3033d0d1; @synthesize=m_startGrabber
@property(assign, nonatomic) CGPoint touchOffset;	// G=0x3033d079; S=0x3033d091; @synthesize=m_touchOffset
- (id)initWithFrame:(CGRect)frame selectionView:(id)view;	// 0x3017efd9
- (BOOL)_endIsHorizontal;	// 0x3033cbf5
- (CGRect)_selectionClipRect;	// 0x3033cb49
- (BOOL)_startIsHorizontal;	// 0x3033cbbd
// declared property getter: - (id)activeTouch;	// 0x30186e79
// declared property getter: - (BOOL)animateUpdate;	// 0x3033d0f1
- (CGPoint)applyTouchOffset:(CGPoint)offset;	// 0x3033c86d
// declared property getter: - (BOOL)autoscrolled;	// 0x3033c8f1
// declared property getter: - (BOOL)baseIsStart;	// 0x3033cf49
// declared property getter: - (CGPoint)basePoint;	// 0x3033cfa9
- (void)beginMagnifying;	// 0x3033c925
- (void)cancelDelayedActions;	// 0x30186e8d
// declared property getter: - (BOOL)commandsWereShowing;	// 0x3033d111
// declared property getter: - (id)container;	// 0x3017f581
- (CGPoint)convertFromMagnifierPoint:(CGPoint)magnifierPoint;	// 0x3033ce51
- (void)dealloc;	// 0x301971dd
- (void)didRotate;	// 0x3033c665
- (void)didScroll;	// 0x3033c5a5
- (void)doneMagnifying;	// 0x3033c505
// declared property getter: - (CGRect)endEdge;	// 0x30180699
// declared property getter: - (id)endGrabber;	// 0x30186f09
// declared property getter: - (CGPoint)extentPoint;	// 0x3033cfd5
// declared property getter: - (double)firstMovedTime;	// 0x3033d0a5
// declared property getter: - (BOOL)inGesture;	// 0x3033d151
// declared property getter: - (CGPoint)initialBasePoint;	// 0x3033d001
// declared property getter: - (float)initialDistance;	// 0x3033d059
// declared property getter: - (CGPoint)initialExtentPoint;	// 0x3033d02d
- (void)inputViewDidChange;	// 0x3033c6dd
// declared property getter: - (BOOL)inputViewIsChanging;	// 0x3033d1b1
- (void)inputViewWillChange;	// 0x3033c6ad
// declared property getter: - (BOOL)isScrolling;	// 0x3033d161
- (CGPoint)magnifierPoint;	// 0x3033cc2d
// declared property getter: - (BOOL)magnifying;	// 0x3033d131
// declared property getter: - (int)mode;	// 0x3017fb79
- (BOOL)pointCloserToEnd:(CGPoint)end startEdge:(CGRect)edge endEdge:(CGRect)edge3;	// 0x3033c7a5
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x3033aa1d
- (void)prepareForMagnification;	// 0x3033c495
// declared property getter: - (id)rects;	// 0x3033b939
- (void)removeFromSuperview;	// 0x30186d59
// declared property getter: - (BOOL)rotating;	// 0x3033d191
- (void)scaleDidChange;	// 0x3033c605
- (void)scaleWillChange;	// 0x3033c5d5
// declared property getter: - (BOOL)scaling;	// 0x3033d171
- (void)selectionAnimationDidStop:(id)selectionAnimation finished:(id)finished;	// 0x3033c449
// declared property getter: - (id)selectionView;	// 0x3033b929
// declared property setter: - (void)setActiveTouch:(id)touch;	// 0x3033cf39
// declared property setter: - (void)setAnimateUpdate:(BOOL)update;	// 0x3033d101
// declared property setter: - (void)setBaseIsStart:(BOOL)start;	// 0x3033cf59
// declared property setter: - (void)setBasePoint:(CGPoint)point;	// 0x3033cfc1
// declared property setter: - (void)setCommandsWereShowing:(BOOL)showing;	// 0x3033d121
- (void)setEnclosingScrollViewsEnabled:(BOOL)enabled;	// 0x3033ced5
// declared property setter: - (void)setEndEdge:(CGRect)edge;	// 0x3033cf8d
// declared property setter: - (void)setEndGrabber:(id)grabber;	// 0x3033d0e1
// declared property setter: - (void)setExtentPoint:(CGPoint)point;	// 0x3033cfed
// declared property setter: - (void)setFirstMovedTime:(double)time;	// 0x3033d0bd
// declared property setter: - (void)setInGesture:(BOOL)gesture;	// 0x30186f29
// declared property setter: - (void)setInitialBasePoint:(CGPoint)point;	// 0x3033d019
// declared property setter: - (void)setInitialDistance:(float)distance;	// 0x3033d069
// declared property setter: - (void)setInitialExtentPoint:(CGPoint)point;	// 0x3033d045
// declared property setter: - (void)setInputViewIsChanging:(BOOL)changing;	// 0x3033d1c1
// declared property setter: - (void)setIsScrolling:(BOOL)scrolling;	// 0x30186f19
- (void)setMagnifierOrientation;	// 0x3033aad1
// declared property setter: - (void)setMagnifying:(BOOL)magnifying;	// 0x3033d141
// declared property setter: - (void)setMode:(int)mode;	// 0x3017f0f5
// declared property setter: - (void)setRects:(id)rects;	// 0x3033b949
// declared property setter: - (void)setRotating:(BOOL)rotating;	// 0x3033d1a1
// declared property setter: - (void)setScaling:(BOOL)scaling;	// 0x3033d181
// declared property setter: - (void)setStartEdge:(CGRect)edge;	// 0x3033cf6d
// declared property setter: - (void)setStartGrabber:(id)grabber;	// 0x3033d0d1
// declared property setter: - (void)setTouchOffset:(CGPoint)offset;	// 0x3033d091
- (void)setTouchOffset:(CGPoint)offset touchPoint:(CGPoint)point;	// 0x3033c7f5
- (void)startAnimating;	// 0x3033c70d
// declared property getter: - (CGRect)startEdge;	// 0x30180671
// declared property getter: - (id)startGrabber;	// 0x30186eb1
- (void)stopAnimating;	// 0x3033c759
// declared property getter: - (CGPoint)touchOffset;	// 0x3033d079
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3033ab45
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3033b82d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3033b4b5
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3033b0d1
- (void)updateBaseAndExtentPointsFromEdges;	// 0x3033ca11
- (void)updateBaseIsStartWithDocumentPoint:(CGPoint)documentPoint;	// 0x3033bf49
- (void)updateDots;	// 0x30196b4d
- (void)updateGrabbers;	// 0x3017f595
- (void)updateRectViews;	// 0x3017f161
- (void)updateSelectionWithDocumentPoint:(CGPoint)documentPoint;	// 0x3033be61
- (void)updateSelectionWithPoint:(CGPoint)point;	// 0x3033bd05
- (void)updateWithMagnifierTerminalPoint:(BOOL)magnifierTerminalPoint;	// 0x3033c041
- (void)willRotate;	// 0x3033c635
- (void)willScroll;	// 0x3033c575
@end

