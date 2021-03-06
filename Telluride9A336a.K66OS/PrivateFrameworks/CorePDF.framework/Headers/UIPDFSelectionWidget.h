/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"

@class UIPDFPageView;

@protocol UIPDFSelectionWidget
@property(readonly, assign, nonatomic) CGPoint currentSelectionPointOnPage;
@property(readonly, assign, nonatomic) CGPoint initialSelectionPointOnPage;
@property(assign, nonatomic) UIPDFPageView *pageView;
// declared property getter: - (CGPoint)currentSelectionPointOnPage;
- (void)endTracking;
- (void)hide;
- (BOOL)hitTest:(CGPoint)test fixedPoint:(CGPoint *)point preceeds:(BOOL *)preceeds;
// declared property getter: - (CGPoint)initialSelectionPointOnPage;
- (void)layout;
// declared property getter: - (id)pageView;
- (void)remove;
- (CGPoint)selectedPointFor:(CGPoint)aFor;
- (CGRect)selectionRectangle;
// declared property setter: - (void)setPageView:(id)view;
- (void)setSelectedGrabber:(unsigned)grabber;
- (void)setSelection:(id)selection;
- (void)track:(CGPoint)track;
- (CGPoint)viewOffset;
@end

