/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "UIPDFSelectionWidget.h"
#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class CALayer, UIPDFPageView;

@interface UIPDFTextRangeWidget : NSObject <UIPDFSelectionWidget> {
	CALayer *_leftSelectionGrabber;	// 4 = 0x4
	CALayer *_leftBar;	// 8 = 0x8
	CALayer *_rightSelectionGrabber;	// 12 = 0xc
	CALayer *_rightBar;	// 16 = 0x10
	CALayer *_leftHandle;	// 20 = 0x14
	CALayer *_rightHandle;	// 24 = 0x18
	CALayer *_fixedSelectionGrabber;	// 28 = 0x1c
	UIPDFPageView *_pageView;	// 32 = 0x20
	float _handleHeight;	// 36 = 0x24
	float _handleWidth;	// 40 = 0x28
	CGPoint _initialSelectionPointOnPage;	// 44 = 0x2c
	float _offsetX;	// 52 = 0x34
	float _offsetY;	// 56 = 0x38
	BOOL _hiDPI;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) CGPoint currentSelectionPointOnPage;	// G=0x33321a5d; 
@property(readonly, assign, nonatomic) CGPoint initialSelectionPointOnPage;	// G=0x33321c89; @synthesize=_initialSelectionPointOnPage
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x33321c69; S=0x33321c79; @synthesize=_pageView
- (id)init;	// 0x33320099
// declared property getter: - (CGPoint)currentSelectionPointOnPage;	// 0x33321a5d
- (void)dealloc;	// 0x3332039d
- (void)endTracking;	// 0x33321a35
- (void)hide;	// 0x33321be5
- (BOOL)hitTest:(CGPoint)test fixedPoint:(CGPoint *)point preceeds:(BOOL *)preceeds;	// 0x333212bd
// declared property getter: - (CGPoint)initialSelectionPointOnPage;	// 0x33321c89
- (void)layout;	// 0x333219f5
- (void)layoutLeftSelectionGrabber:(CGRect)grabber transform:(CGAffineTransform *)transform width:(float)width extraHeight:(float)height unitSize:(CGSize)size;	// 0x333203e1
- (void)layoutRightSelectionGrabber:(CGRect)grabber transform:(CGAffineTransform *)transform width:(float)width extraHeight:(float)height unitSize:(CGSize)size;	// 0x333208b9
- (void)layoutWidget;	// 0x33320dad
// declared property getter: - (id)pageView;	// 0x33321c69
- (void)remove;	// 0x33321225
- (CGPoint)selectedPointFor:(CGPoint)aFor;	// 0x33321275
- (CGRect)selectionRectangle;	// 0x33321a39
// declared property setter: - (void)setPageView:(id)view;	// 0x33321c79
- (void)setSelectedGrabber:(unsigned)grabber;	// 0x3332115d
- (void)setSelection:(id)selection;	// 0x3332118d
- (void)track:(CGPoint)track;	// 0x33321a31
- (CGPoint)viewOffset;	// 0x3332187d
@end

