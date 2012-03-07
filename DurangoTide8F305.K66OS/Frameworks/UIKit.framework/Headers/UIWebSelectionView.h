/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIWebTextRangeView, NSTimer, UIWebSelectionOutline, UIWebSelectionHandle, UIWebDocumentView, UIWebSelection, UIWebSelectionGraph, UIWebSelectionNode;

__attribute__((visibility("hidden")))
@interface UIWebSelectionView : UIView {
@private
	UIView *_center;	// 44 = 0x2c
	CGRect _selectionFrame;	// 48 = 0x30
	UIWebSelectionHandle *_top;	// 64 = 0x40
	UIWebSelectionHandle *_right;	// 68 = 0x44
	UIWebSelectionHandle *_bottom;	// 72 = 0x48
	UIWebSelectionHandle *_left;	// 76 = 0x4c
	UIWebSelectionOutline *_outline;	// 80 = 0x50
	UIWebTextRangeView *_textRangeView;	// 84 = 0x54
	UIWebDocumentView *_documentView;	// 88 = 0x58
	UIWebSelectionNode *_selectionNode;	// 92 = 0x5c
	UIWebSelectionGraph *_selectionGraph;	// 96 = 0x60
	float _growThreshold;	// 100 = 0x64
	float _shrinkThreshold;	// 104 = 0x68
	struct {
		UIWebSelectionHandle *scrollingHandle;
		double startTime;
		int direction;
		NSTimer *timer;
	} _autoscrollData;	// 108 = 0x6c
	struct {
		UIWebSelectionHandle *activeHandle;
		CGPoint handleCenterStart;
		float handleOffset;
	} _blockSelectionData;	// 128 = 0x80
	struct {
		UIWebSelectionHandle *start;
		UIWebSelectionHandle *end;
		CGSize startingOffset;
		BOOL anchorAtStart;
		struct {
			BOOL flipPossible;
			BOOL rectsChanged;
			CGRect originalSelectionRect;
		} flipData;
	} _rangedSelectionData;	// 144 = 0x90
	BOOL _creatingSelection;	// 184 = 0xb8
	int _nestedLayoutCalls;	// 188 = 0xbc
	BOOL _calloutBarIsHideBeforeRotation;	// 192 = 0xc0
	BOOL _rotating;	// 193 = 0xc1
}
@property(readonly, assign, nonatomic) UIWebSelection *selection;	// G=0x321d0485; 
@property(assign, nonatomic) CGRect selectionFrame;	// G=0x321cffad; S=0x32082131; 
@property(retain, nonatomic) UIWebSelectionNode *selectionNode;	// G=0x32082121; S=0x321d2ebd; @synthesize=_selectionNode
- (id)initWithWebDocumentView:(id)webDocumentView;	// 0x31ffa8fd
- (void)_didScroll;	// 0x321d083d
- (void)_subscribeToScrollNotificationsIfNecessary:(id)scrollNotificationsIfNecessary;	// 0x321cffc9
- (id)activeHandle;	// 0x321d17c5
- (BOOL)activelyManipulatingBlockSelectionHandle;	// 0x321d0411
- (BOOL)activelyManipulatingTextSelectionHandle;	// 0x321d044d
- (void)animateSloppyReleaseOfHandleInText:(id)text withMagnifier:(id)magnifier;	// 0x321d2a49
- (int)autoscrollDirectionsForHandle:(id)handle;	// 0x321d3135
- (void)autoscrollTimerFired:(id)fired;	// 0x321d2be1
- (void)calloutBar:(id)bar selectedCommand:(id)command;	// 0x321d0c25
- (BOOL)canFlip;	// 0x321d29c5
- (void)clearSelection;	// 0x3208207d
- (void)computeExpandAndContractThresholdsForActiveHandle;	// 0x321d32d9
- (void)considerFlipping;	// 0x321d291d
- (void)contractForActiveHandle;	// 0x321d37b9
- (void)dealloc;	// 0x321d0d81
- (CGRect)desiredBox;	// 0x321d4119
- (void)endSelectionCreationWithPoint:(CGPoint)point;	// 0x321d109d
- (void)expandForActiveHandle;	// 0x321d3849
- (id)handleWithPosition:(int)position;	// 0x31ffadcd
- (id)handles;	// 0x321d0a41
- (void)hideControls;	// 0x32082049
- (void)hideControlsBeforeRotation;	// 0x321d0b61
- (void)hideCopyCallout;	// 0x3208205d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x321d0d49
- (void)layoutChanged;	// 0x31ffc47d
- (id)nodeInPristineGraphAtPoint:(CGPoint)point;	// 0x321d05e5
- (void)removeFromSuperview;	// 0x3207cced
- (void)resetSelection;	// 0x321d215d
- (void)scaleChanged;	// 0x321d0fe1
// declared property getter: - (id)selection;	// 0x321d0485
- (void)selectionChanged;	// 0x321d06a5
// declared property getter: - (CGRect)selectionFrame;	// 0x321cffad
// declared property getter: - (id)selectionNode;	// 0x32082121
- (void)setHandleCenters;	// 0x320821d5
// declared property setter: - (void)setSelectionFrame:(CGRect)frame;	// 0x32082131
- (void)setSelectionFrame:(CGRect)frame animated:(BOOL)animated;	// 0x321d0ab1
// declared property setter: - (void)setSelectionNode:(id)node;	// 0x321d2ebd
- (void)shiftWebRangeSelectionAnimationDidStop:(id)shiftWebRangeSelectionAnimation finished:(id)finished;	// 0x321d07b1
- (BOOL)shouldContractForActiveHandle;	// 0x321d0879
- (BOOL)shouldExpandForActiveHandle;	// 0x321d095d
- (BOOL)shouldSwitchToBlockModeForHandle:(id)handle;	// 0x321d3015
- (void)showControls;	// 0x321d2579
- (void)showControlsAfterRotation;	// 0x321d0be5
- (void)showCopyCallout;	// 0x321d38d9
- (void)startSelectionCreationWithPoint:(CGPoint)point;	// 0x321d187d
- (void)stopAnyAutoscrolling;	// 0x321d07c5
- (void)switchToBlockModeForHandle:(id)handle;	// 0x321d1669
- (void)switchToTextModeForHandle:(id)handle;	// 0x321d1391
- (id)tintView;	// 0x31ffaacd
- (void)touchChanged:(id)changed forHandle:(id)handle;	// 0x321d1b01
- (void)touchChanged:(id)changed forHandleInText:(id)text;	// 0x321d3d55
- (void)updateAutoscrollForHandle:(id)handle;	// 0x321d2d8d
- (void)updateForChangedLayoutWhileManipulatingBlockSelectionHandle;	// 0x321d27a5
- (void)updateForChangedLayoutWhileManipulatingTextSelectionHandle;	// 0x321d0369
- (void)updateFrameAndHandles;	// 0x321d2291
- (void)updateSelectionCreationWithPoint:(CGPoint)point;	// 0x321d04a9
- (void)updateSelectionRects;	// 0x321d0721
@end
