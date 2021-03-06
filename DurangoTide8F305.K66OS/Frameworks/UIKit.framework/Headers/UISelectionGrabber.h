/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITextRangeView, UISelectionGrabberDot;

__attribute__((visibility("hidden")))
@interface UISelectionGrabber : UIView {
@private
	UISelectionGrabberDot *m_dotView;	// 44 = 0x2c
	BOOL m_isDotted;	// 48 = 0x30
	BOOL m_isStart;	// 49 = 0x31
	BOOL m_activeFlattened;	// 50 = 0x32
	BOOL m_alertFlattened;	// 51 = 0x33
	BOOL m_navigationTransitionFlattened;	// 52 = 0x34
	BOOL m_animating;	// 53 = 0x35
}
@property(assign, nonatomic) BOOL activeFlattened;	// G=0x320b9fcd; S=0x321c847d; @synthesize=m_activeFlattened
@property(assign, nonatomic) BOOL alertFlattened;	// G=0x320b9fbd; S=0x321c848d; @synthesize=m_alertFlattened
@property(assign, nonatomic) BOOL animating;	// G=0x320b9fad; S=0x321c84f9; @synthesize=m_animating
@property(readonly, assign, nonatomic) UITextRangeView *hostView;	// G=0x320b9e9d; 
@property(assign, nonatomic) BOOL isDotted;	// G=0x320b9e6d; S=0x320b9e7d; @synthesize=m_isDotted
@property(assign, nonatomic) BOOL isStart;	// G=0x320b9f3d; S=0x320b9eb1; @synthesize=m_isStart
@property(assign, nonatomic) BOOL navigationTransitionFlattened;	// G=0x320b9fdd; S=0x321c846d; @synthesize=m_navigationTransitionFlattened
+ (id)_grabberDot;	// 0x321c87e9
- (id)initWithFrame:(CGRect)frame;	// 0x320b9629
// declared property getter: - (BOOL)activeFlattened;	// 0x320b9fcd
// declared property getter: - (BOOL)alertFlattened;	// 0x320b9fbd
// declared property getter: - (BOOL)animating;	// 0x320b9fad
- (BOOL)autoscrolled;	// 0x321c8519
- (void)canExpandAfterAlert:(id)alert;	// 0x321c85dd
- (void)canExpandAfterBecomeActive:(id)active;	// 0x321c858d
- (void)canExpandAfterNavigationTransition:(id)transition;	// 0x321c853d
- (void)dealloc;	// 0x320ba3a5
- (void)didMoveToSuperview;	// 0x320b9f19
- (void)drawRect:(CGRect)rect;	// 0x321c86f9
// declared property getter: - (id)hostView;	// 0x320b9e9d
// declared property getter: - (BOOL)isDotted;	// 0x320b9e6d
- (BOOL)isRotating;	// 0x320b9ffd
- (BOOL)isScaling;	// 0x320ba065
- (BOOL)isScrolling;	// 0x320ba031
// declared property getter: - (BOOL)isStart;	// 0x320b9f3d
- (void)mustFlattenForAlert:(id)alert;	// 0x321c8605
- (void)mustFlattenForNavigationTransition:(id)navigationTransition;	// 0x321c8565
- (void)mustFlattenForResignActive:(id)resignActive;	// 0x321c85b5
// declared property getter: - (BOOL)navigationTransitionFlattened;	// 0x320b9fdd
- (void)removeFromSuperview;	// 0x320ba2a9
// declared property setter: - (void)setActiveFlattened:(BOOL)flattened;	// 0x321c847d
// declared property setter: - (void)setAlertFlattened:(BOOL)flattened;	// 0x321c848d
// declared property setter: - (void)setAnimating:(BOOL)animating;	// 0x321c84f9
- (void)setFrame:(CGRect)frame;	// 0x320b97d9
- (void)setHidden:(BOOL)hidden;	// 0x320b9ed1
// declared property setter: - (void)setIsDotted:(BOOL)dotted;	// 0x320b9e7d
// declared property setter: - (void)setIsStart:(BOOL)start;	// 0x320b9eb1
// declared property setter: - (void)setNavigationTransitionFlattened:(BOOL)flattened;	// 0x321c846d
- (void)updateDot;	// 0x320b9835
@end

