/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIPopoverBackgroundView, UIActionSheet, UIPopoverController;

__attribute__((visibility("hidden")))
@interface _UIPopoverView : UIView {
@private
	UIView *_contentView;	// 48 = 0x30
	UIPopoverBackgroundView *_backgroundView;	// 52 = 0x34
	Class _backgroundViewClass;	// 56 = 0x38
	UIImageView *_toolbarShine;	// 60 = 0x3c
	BOOL _showsBackgroundComponentHighlights;	// 64 = 0x40
	BOOL _showsBackgroundViewHighlight;	// 65 = 0x41
	BOOL _showsContentViewHighlight;	// 66 = 0x42
	UIActionSheet *_presentedActionSheet;	// 68 = 0x44
	UIPopoverController *_popoverController;	// 72 = 0x48
}
@property(assign, nonatomic) unsigned arrowDirection;	// G=0x33d3cb61; S=0x33d3cb81; 
@property(assign, nonatomic) float arrowOffset;	// G=0x33d3cb05; S=0x33d3cb25; 
@property(assign, nonatomic) int backgroundStyle;	// G=0x33d3cbbd; S=0x33d3cbdd; 
@property(readonly, retain) UIPopoverBackgroundView *backgroundView;	// G=0x33d3ca3d; converted property
@property(readonly, retain) UIView *contentView;	// G=0x33d3ca05; converted property
@property(assign, nonatomic) UIPopoverController *popoverController;	// G=0x33d3d3d5; S=0x33d3d3e5; @synthesize=_popoverController
@property(retain, nonatomic) UIActionSheet *presentedActionSheet;	// G=0x33d3d3a1; S=0x33d3d3b1; @synthesize=_presentedActionSheet
@property(assign, nonatomic) BOOL showsBackgroundComponentHighlights;	// G=0x33d3d341; S=0x33d3d351; @synthesize=_showsBackgroundComponentHighlights
@property(assign, nonatomic) BOOL showsBackgroundViewHighlight;	// G=0x33d3d361; S=0x33d3d371; @synthesize=_showsBackgroundViewHighlight
@property(assign, nonatomic) BOOL showsContentViewHighlight;	// G=0x33d3d381; S=0x33d3d391; @synthesize=_showsContentViewHighlight
@property(readonly, retain) UIImageView *toolbarShine;	// G=0x33d3caf1; converted property
+ (id)popoverViewContainingView:(id)view;	// 0x33aa743d
- (id)initWithFrame:(CGRect)frame;	// 0x33d3c4f9
- (id)initWithFrame:(CGRect)frame backgroundViewClass:(Class)aClass;	// 0x33d3c299
- (BOOL)_allowsCustomizationOfContent;	// 0x33d3cb01
- (BOOL)_isIgnoringTapsInDimmingView;	// 0x33d3d1b5
- (BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(CGRect)newFrame;	// 0x33d3c9e5
- (void)_presentationInPopoverDidBeginForViewController:(id)_presentationInPopover;	// 0x33d3d285
- (void)_presentationInPopoverDidEndForViewController:(id)_presentationInPopover;	// 0x33d3d2dd
- (void)_presentationInPopoverWillBeginForViewController:(id)_presentationInPopover;	// 0x33d3d28d
- (void)_presentationInPopoverWillEndForViewController:(id)_presentationInPopover;	// 0x33d3d289
- (void)_setFrame:(CGRect)frame arrowOffset:(float)offset;	// 0x33d3ce25
- (void)_setIgnoreTapsInDimmingView:(BOOL)dimmingView;	// 0x33d3d1e9
- (int)_style;	// 0x33d3c9e1
- (id)_viewForModalPresentationOfViewController:(id)viewController;	// 0x33d3d15d
// declared property getter: - (unsigned)arrowDirection;	// 0x33d3cb61
// declared property getter: - (float)arrowOffset;	// 0x33d3cb05
// declared property getter: - (int)backgroundStyle;	// 0x33d3cbbd
// converted property getter: - (id)backgroundView;	// 0x33d3ca3d
// converted property getter: - (id)contentView;	// 0x33d3ca05
- (void)dealloc;	// 0x33d3c525
- (void)layoutSubviews;	// 0x33d3c701
- (void)motionBegan:(int)began withEvent:(id)event;	// 0x33d3c9f9
- (void)motionCancelled:(int)cancelled withEvent:(id)event;	// 0x33d3ca01
- (void)motionEnded:(int)ended withEvent:(id)event;	// 0x33d3c9fd
// declared property getter: - (id)popoverController;	// 0x33d3d3d5
// declared property getter: - (id)presentedActionSheet;	// 0x33d3d3a1
// declared property setter: - (void)setArrowDirection:(unsigned)direction;	// 0x33d3cb81
// declared property setter: - (void)setArrowOffset:(float)offset;	// 0x33d3cb25
// declared property setter: - (void)setBackgroundStyle:(int)style;	// 0x33d3cbdd
// declared property setter: - (void)setPopoverController:(id)controller;	// 0x33d3d3e5
// declared property setter: - (void)setPresentedActionSheet:(id)sheet;	// 0x33d3d3b1
// declared property setter: - (void)setShowsBackgroundComponentHighlights:(BOOL)highlights;	// 0x33d3d351
// declared property setter: - (void)setShowsBackgroundViewHighlight:(BOOL)highlight;	// 0x33d3d371
// declared property setter: - (void)setShowsContentViewHighlight:(BOOL)highlight;	// 0x33d3d391
- (void)setUseToolbarShine:(BOOL)shine;	// 0x33d3cc21
// declared property getter: - (BOOL)showsBackgroundComponentHighlights;	// 0x33d3d341
// declared property getter: - (BOOL)showsBackgroundViewHighlight;	// 0x33d3d361
// declared property getter: - (BOOL)showsContentViewHighlight;	// 0x33d3d381
- (id)standardChromeView;	// 0x33d3ca75
- (BOOL)toolbarIsVisible;	// 0x33d3d26d
// converted property getter: - (id)toolbarShine;	// 0x33d3caf1
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x33d3c9e9
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x33d3c9f5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x33d3c9f1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x33d3c9ed
- (id)viewController;	// 0x33d3d225
- (void)willMoveToWindow:(id)window;	// 0x33d3c599
@end
