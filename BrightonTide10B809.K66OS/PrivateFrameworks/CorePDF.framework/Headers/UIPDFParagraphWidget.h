/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "UIPDFSelectionWidget.h"
#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class CALayer, CAShapeLayer, UIPDFPageView;

@interface UIPDFParagraphWidget : NSObject <UIPDFSelectionWidget> {
	CAShapeLayer *_trackingBorder;	// 4 = 0x4
	CGRect _initialRect;	// 8 = 0x8
	BOOL _tracking;	// 24 = 0x18
	CGRect _currentTrackingRect;	// 28 = 0x1c
	CALayer *_leftGrabber;	// 44 = 0x2c
	CALayer *_rightGrabber;	// 48 = 0x30
	CALayer *_topGrabber;	// 52 = 0x34
	CALayer *_bottomGrabber;	// 56 = 0x38
	CALayer *_selectedGrabber;	// 60 = 0x3c
	CGRect _boundsInPDFSpace;	// 64 = 0x40
	UIPDFPageView *_pageView;	// 80 = 0x50
	CGPoint _initialSelectionPointOnPage;	// 84 = 0x54
}
@property(readonly, assign, nonatomic) CGPoint currentSelectionPointOnPage;	// G=0x33889c55; 
@property(readonly, assign, nonatomic) CGPoint initialSelectionPointOnPage;	// G=0x33889d3d; @synthesize=_initialSelectionPointOnPage
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x33889d1d; S=0x33889d2d; @synthesize=_pageView
- (id)init;	// 0x338881a9
- (CGRect)adjustRect:(CGRect)rect toPoint:(CGPoint)point;	// 0x3388950d
// declared property getter: - (CGPoint)currentSelectionPointOnPage;	// 0x33889c55
- (void)dealloc;	// 0x338883b1
- (void)endTracking;	// 0x33889add
- (void)hide;	// 0x33889c6d
- (BOOL)hitTest:(CGPoint)test fixedPoint:(CGPoint *)point preceeds:(BOOL *)preceeds;	// 0x33888b2d
// declared property getter: - (CGPoint)initialSelectionPointOnPage;	// 0x33889d3d
- (void)layout;	// 0x338890d1
// declared property getter: - (id)pageView;	// 0x33889d1d
- (void)remove;	// 0x33888a95
- (CGPoint)selectedPointFor:(CGPoint)aFor;	// 0x338890ad
- (CGRect)selectionBoundsInEffectsSpace;	// 0x338883f1
- (CGRect)selectionRectangle;	// 0x33889bed
// declared property setter: - (void)setPageView:(id)view;	// 0x33889d2d
- (void)setSelectedGrabber:(unsigned)grabber;	// 0x33889509
- (void)setSelectedGrabberPosition:(CGRect)position;	// 0x3388960d
- (void)setSelection:(id)selection;	// 0x33888559
- (void)track:(CGPoint)track;	// 0x3388970d
- (CGPoint)viewOffset;	// 0x338890b9
@end
