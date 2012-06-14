/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITouch, UITextSelectionView, NSArray, UISelectionGrabber, NSMutableArray;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UITextRangeView : UIView {
@private
	UITextSelectionView *m_selectionView;	// 48 = 0x30
	UIView<UITextSelectingContainer> *m_container;	// 52 = 0x34
	int m_mode;	// 56 = 0x38
	NSArray *m_rects;	// 60 = 0x3c
	NSMutableArray *m_rectViews;	// 64 = 0x40
	UITouch *m_activeTouch;	// 68 = 0x44
	CGRect m_startEdge;	// 72 = 0x48
	CGRect m_endEdge;	// 88 = 0x58
	CGPoint m_basePoint;	// 104 = 0x68
	CGPoint m_extentPoint;	// 112 = 0x70
	CGPoint m_initialBasePoint;	// 120 = 0x78
	CGPoint m_initialExtentPoint;	// 128 = 0x80
	float m_initialDistance;	// 136 = 0x88
	CGPoint m_touchOffset;	// 140 = 0x8c
	double m_firstMovedTime;	// 148 = 0x94
	UISelectionGrabber *m_startGrabber;	// 156 = 0x9c
	UISelectionGrabber *m_endGrabber;	// 160 = 0xa0
	BOOL m_animateUpdate;	// 164 = 0xa4
	BOOL m_baseIsStart;	// 165 = 0xa5
	BOOL m_commandsWereShowing;	// 166 = 0xa6
	BOOL m_inGesture;	// 167 = 0xa7
	BOOL m_magnifying;	// 168 = 0xa8
	BOOL m_scrolling;	// 169 = 0xa9
	BOOL m_scaling;	// 170 = 0xaa
	BOOL m_rotating;	// 171 = 0xab
	BOOL m_inputViewIsChanging;	// 172 = 0xac
}
@property(retain, nonatomic) UITouch *activeTouch;	// G=0x30126091; S=0x302e8545; @synthesize=m_activeTouch
@property(assign, nonatomic) BOOL animateUpdate;	// G=0x302e8745; S=0x302e8755; @synthesize=m_animateUpdate
@property(readonly, assign, nonatomic) BOOL autoscrolled;	// G=0x302e8129; 
@property(assign, nonatomic) BOOL baseIsStart;	// G=0x302e8569; S=0x302e8579; @synthesize=m_baseIsStart
@property(assign, nonatomic) CGPoint basePoint;	// G=0x302e85c1; S=0x302e85dd; @synthesize=m_basePoint
@property(assign, nonatomic) BOOL commandsWereShowing;	// G=0x302e8765; S=0x302e8775; @synthesize=m_commandsWereShowing
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer> *container;	// G=0x3011ded5; 
@property(assign, nonatomic) CGRect endEdge;	// G=0x3011ed91; S=0x302e85a5; @synthesize=m_endEdge
@property(retain, nonatomic) UISelectionGrabber *endGrabber;	// G=0x30126115; S=0x302e8721; @synthesize=m_endGrabber
@property(assign, nonatomic) CGPoint extentPoint;	// G=0x302e85f1; S=0x302e860d; @synthesize=m_extentPoint
@property(assign, nonatomic) double firstMovedTime;	// G=0x302e86d1; S=0x302e86e9; @synthesize=m_firstMovedTime
@property(assign, nonatomic) BOOL inGesture;	// G=0x302e87a5; S=0x30126135; @synthesize=m_inGesture
@property(assign, nonatomic) CGPoint initialBasePoint;	// G=0x302e8621; S=0x302e863d; @synthesize=m_initialBasePoint
@property(assign, nonatomic) float initialDistance;	// G=0x302e8681; S=0x302e8691; @synthesize=m_initialDistance
@property(assign, nonatomic) CGPoint initialExtentPoint;	// G=0x302e8651; S=0x302e866d; @synthesize=m_initialExtentPoint
@property(assign, nonatomic) BOOL inputViewIsChanging;	// G=0x302e8805; S=0x302e8815; @synthesize=m_inputViewIsChanging
@property(assign, nonatomic) BOOL isScrolling;	// G=0x302e87b5; S=0x30126125; @synthesize=m_scrolling
@property(assign, nonatomic) BOOL magnifying;	// G=0x302e8785; S=0x302e8795; @synthesize=m_magnifying
@property(assign, nonatomic) int mode;	// G=0x3011e2e5; S=0x3011d9e5; @synthesize=m_mode
@property(retain, nonatomic) NSArray *rects;	// G=0x302e716d; S=0x302e717d; @synthesize=m_rects
@property(assign, nonatomic) BOOL rotating;	// G=0x302e87e5; S=0x302e87f5; @synthesize=m_rotating
@property(assign, nonatomic) BOOL scaling;	// G=0x302e87c5; S=0x302e87d5; @synthesize=m_scaling
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x302e715d; 
@property(assign, nonatomic) CGRect startEdge;	// G=0x3011ed6d; S=0x302e8589; @synthesize=m_startEdge
@property(retain, nonatomic) UISelectionGrabber *startGrabber;	// G=0x301260c1; S=0x302e86fd; @synthesize=m_startGrabber
@property(assign, nonatomic) CGPoint touchOffset;	// G=0x302e86a1; S=0x302e86bd; @synthesize=m_touchOffset
- (id)initWithFrame:(CGRect)frame selectionView:(id)view;	// 0x3011d8dd
- (id)initWithFrame:(CGRect)frame textContainer:(id)container;	// 0x302e6261
// declared property getter: - (id)activeTouch;	// 0x30126091
// declared property getter: - (BOOL)animateUpdate;	// 0x302e8745
- (CGPoint)applyTouchOffset:(CGPoint)offset;	// 0x302e8099
// declared property getter: - (BOOL)autoscrolled;	// 0x302e8129
// declared property getter: - (BOOL)baseIsStart;	// 0x302e8569
// declared property getter: - (CGPoint)basePoint;	// 0x302e85c1
- (void)beginMagnifying;	// 0x302e8161
- (void)cancelDelayedActions;	// 0x301260a1
// declared property getter: - (BOOL)commandsWereShowing;	// 0x302e8765
// declared property getter: - (id)container;	// 0x3011ded5
- (CGPoint)convertFromMagnifierPoint:(CGPoint)magnifierPoint;	// 0x302e84a1
- (void)dealloc;	// 0x3013621d
- (void)didRotate;	// 0x302e7e91
- (void)didScroll;	// 0x302e7dd1
- (void)doneMagnifying;	// 0x302e7d31
// declared property getter: - (CGRect)endEdge;	// 0x3011ed91
// declared property getter: - (id)endGrabber;	// 0x30126115
// declared property getter: - (CGPoint)extentPoint;	// 0x302e85f1
// declared property getter: - (double)firstMovedTime;	// 0x302e86d1
// declared property getter: - (BOOL)inGesture;	// 0x302e87a5
// declared property getter: - (CGPoint)initialBasePoint;	// 0x302e8621
// declared property getter: - (float)initialDistance;	// 0x302e8681
// declared property getter: - (CGPoint)initialExtentPoint;	// 0x302e8651
- (void)inputViewDidChange;	// 0x302e7f09
// declared property getter: - (BOOL)inputViewIsChanging;	// 0x302e8805
- (void)inputViewWillChange;	// 0x302e7ed9
// declared property getter: - (BOOL)isScrolling;	// 0x302e87b5
- (CGPoint)magnifierPoint;	// 0x302e8381
// declared property getter: - (BOOL)magnifying;	// 0x302e8785
// declared property getter: - (int)mode;	// 0x3011e2e5
- (BOOL)pointCloserToEnd:(CGPoint)end startEdge:(CGRect)edge endEdge:(CGRect)edge3;	// 0x302e7fc9
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x302e629d
- (void)prepareForMagnification;	// 0x302e7cc1
// declared property getter: - (id)rects;	// 0x302e716d
- (void)removeFromSuperview;	// 0x30125f75
// declared property getter: - (BOOL)rotating;	// 0x302e87e5
- (void)scaleDidChange;	// 0x302e7e31
- (void)scaleWillChange;	// 0x302e7e01
// declared property getter: - (BOOL)scaling;	// 0x302e87c5
- (void)selectionAnimationDidStop:(id)selectionAnimation finished:(id)finished;	// 0x302e7c79
// declared property getter: - (id)selectionView;	// 0x302e715d
// declared property setter: - (void)setActiveTouch:(id)touch;	// 0x302e8545
// declared property setter: - (void)setAnimateUpdate:(BOOL)update;	// 0x302e8755
// declared property setter: - (void)setBaseIsStart:(BOOL)start;	// 0x302e8579
// declared property setter: - (void)setBasePoint:(CGPoint)point;	// 0x302e85dd
// declared property setter: - (void)setCommandsWereShowing:(BOOL)showing;	// 0x302e8775
- (void)setEnclosingScrollViewsEnabled:(BOOL)enabled;	// 0x302e8505
// declared property setter: - (void)setEndEdge:(CGRect)edge;	// 0x302e85a5
// declared property setter: - (void)setEndGrabber:(id)grabber;	// 0x302e8721
// declared property setter: - (void)setExtentPoint:(CGPoint)point;	// 0x302e860d
// declared property setter: - (void)setFirstMovedTime:(double)time;	// 0x302e86e9
// declared property setter: - (void)setInGesture:(BOOL)gesture;	// 0x30126135
// declared property setter: - (void)setInitialBasePoint:(CGPoint)point;	// 0x302e863d
// declared property setter: - (void)setInitialDistance:(float)distance;	// 0x302e8691
// declared property setter: - (void)setInitialExtentPoint:(CGPoint)point;	// 0x302e866d
// declared property setter: - (void)setInputViewIsChanging:(BOOL)changing;	// 0x302e8815
// declared property setter: - (void)setIsScrolling:(BOOL)scrolling;	// 0x30126125
// declared property setter: - (void)setMagnifying:(BOOL)magnifying;	// 0x302e8795
// declared property setter: - (void)setMode:(int)mode;	// 0x3011d9e5
// declared property setter: - (void)setRects:(id)rects;	// 0x302e717d
// declared property setter: - (void)setRotating:(BOOL)rotating;	// 0x302e87f5
// declared property setter: - (void)setScaling:(BOOL)scaling;	// 0x302e87d5
// declared property setter: - (void)setStartEdge:(CGRect)edge;	// 0x302e8589
// declared property setter: - (void)setStartGrabber:(id)grabber;	// 0x302e86fd
// declared property setter: - (void)setTouchOffset:(CGPoint)offset;	// 0x302e86bd
- (void)setTouchOffset:(CGPoint)offset touchPoint:(CGPoint)point;	// 0x302e8021
- (void)startAnimating;	// 0x302e7f39
// declared property getter: - (CGRect)startEdge;	// 0x3011ed6d
// declared property getter: - (id)startGrabber;	// 0x301260c1
- (void)stopAnimating;	// 0x302e7f81
// declared property getter: - (CGPoint)touchOffset;	// 0x302e86a1
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x302e6351
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x302e706d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x302e6cc5
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x302e68e1
- (void)updateBaseAndExtentPointsFromEdges;	// 0x302e8249
- (void)updateBaseIsStartWithDocumentPoint:(CGPoint)documentPoint;	// 0x302e7771
- (void)updateDots;	// 0x30135c2d
- (void)updateGrabbers;	// 0x3011dee5
- (void)updateRectViews;	// 0x3011da51
- (void)updateSelectionWithDocumentPoint:(CGPoint)documentPoint;	// 0x302e7685
- (void)updateSelectionWithPoint:(CGPoint)point;	// 0x302e751d
- (void)updateWithMagnifierTerminalPoint:(BOOL)magnifierTerminalPoint;	// 0x302e7869
- (void)willRotate;	// 0x302e7e61
- (void)willScroll;	// 0x302e7da1
@end
