/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIWebRotationDelegate.h"
#import "UIKit-Structs.h"
#import "UIActionSheetDelegate.h"
#import "_UIWebDoubleTapDelegate.h"
#import "_UIRotatingActionSheetDelegate.h"
#import "UIWebPDFViewPrivateDelegate.h"
#import "UIDocumentPasswordViewDelegate.h"
#import "UIWebPDFViewDelegate.h"
#import <NSObject.h> // Unknown library

@class UIHighlightView, UIDocumentPasswordView, NSDictionary, NSArray, UIView, UIColor, WebPDFNSNumberFormatter, _UIRotatingActionSheet, UIWebPDFSearchController, UIWebPDFView, UIWebPDFLabelView;
@protocol UIWebPDFViewHandlerDelegate;

@interface UIWebPDFViewHandler : NSObject <UIWebPDFViewPrivateDelegate, UIDocumentPasswordViewDelegate, UIActionSheetDelegate, _UIRotatingActionSheetDelegate, UIWebPDFViewDelegate, _UIWebDoubleTapDelegate, _UIWebRotationDelegate> {
@private
	UIWebPDFView *_pdfView;	// 4 = 0x4
	BOOL _scalesPageToFit;	// 8 = 0x8
	float _initialZoomScale;	// 12 = 0xc
	NSObject<UIWebPDFViewHandlerDelegate> *_pdfHandlerDelegate;	// 16 = 0x10
	UIHighlightView *_linkHighlightView;	// 20 = 0x14
	UIWebPDFLabelView *_pageLabelView;	// 24 = 0x18
	BOOL _showPageLabels;	// 28 = 0x1c
	BOOL _showsShadowsForHTMLContent;	// 29 = 0x1d
	BOOL _cachedScrollViewShadowsState;	// 30 = 0x1e
	UIDocumentPasswordView *_passwordEntryView;	// 32 = 0x20
	UIWebPDFSearchController *_searchController;	// 36 = 0x24
	UIColor *_backgroundColorForUnRenderedContent;	// 40 = 0x28
	BOOL _hideActivityIndicatorForUnRenderedContent;	// 44 = 0x2c
	BOOL _hidePageViewsUntilReadyToRender;	// 45 = 0x2d
	WebPDFNSNumberFormatter *_labelViewFormatter;	// 48 = 0x30
	PDFHistoryItem _pendingHistoryItemRestore;	// 52 = 0x34
	_UIRotatingActionSheet *_linkActionSheet;	// 68 = 0x44
	NSDictionary *_linkActionInfo;	// 72 = 0x48
	NSArray *_linkActions;	// 76 = 0x4c
	CGRect _rectOfInterest;	// 80 = 0x50
	BOOL _rectOfInterestConsidersHeight;	// 96 = 0x60
}
@property(retain, nonatomic) UIColor *backgroundColorForUnRenderedContent;	// G=0x3042556d; S=0x3012c0b5; @synthesize=_backgroundColorForUnRenderedContent
@property(readonly, assign, nonatomic) UIView *frontView;	// G=0x3012c525; 
@property(assign, nonatomic) BOOL hideActivityIndicatorForUnRenderedContent;	// G=0x3042557d; S=0x30421625; @synthesize=_hideActivityIndicatorForUnRenderedContent
@property(assign, nonatomic) BOOL hidePageViewsUntilReadyToRender;	// G=0x3042555d; S=0x304215f5; @synthesize=_hidePageViewsUntilReadyToRender
@property(assign, nonatomic) NSObject<UIWebPDFViewHandlerDelegate> *pdfHandlerDelegate;	// G=0x3042554d; S=0x3012c115; @synthesize=_pdfHandlerDelegate
@property(readonly, assign, nonatomic) UIWebPDFView *pdfView;	// G=0x3012c555; 
@property(assign, nonatomic) BOOL scalesPageToFit;	// G=0x3042553d; S=0x30214739; @synthesize=_scalesPageToFit
@property(readonly, assign, nonatomic) UIWebPDFSearchController *searchController;	// G=0x30421725; 
@property(assign, nonatomic) BOOL showPageLabels;	// G=0x3042552d; S=0x3012c125; @synthesize=_showPageLabels
- (id)init;	// 0x3012bf21
- (id)_absoluteUrlRelativeToDocumentURL:(id)documentURL;	// 0x30422861
- (id)_actionForType:(int)type;	// 0x30422cfd
- (id)_actionsForInteractionInfo:(id)interactionInfo;	// 0x30423095
- (void)_adjustContentOffsetForKeyboardIfNeeded;	// 0x30423a29
- (void)_adjustZoomScalesForScrollViewInternal:(id)scrollViewInternal;	// 0x30422091
- (void)_completeLinkClick:(id)click;	// 0x3042293d
- (void)_createPDFViewIfNeeded:(id)needed;	// 0x30421ac1
- (void)_ensurePDFViewInHierarchyForWebDocView:(id)webDocView;	// 0x30421ca1
- (CGRect)_frameForDocumentBounds:(CGRect)documentBounds;	// 0x30421875
- (id)_getLabelViewFormatter;	// 0x30424579
- (id)_getPDFDocumentViewForWebView:(id)webView;	// 0x301c5d61
- (void)_keyboardDidShow:(id)_keyboard;	// 0x30423d2d
- (void)_notifyDelegateDidClickLink:(id)_notifyDelegate;	// 0x30422bc5
- (void)_notifyDelegateWillClickLink:(id)_notifyDelegate;	// 0x30422b6d
- (float)_pinValueForVerticalEdge:(unsigned)verticalEdge inScrollView:(id)scrollView;	// 0x30425325
- (void)_postdidDetermineDocumentBounds;	// 0x30423f8d
- (CGRect)_rectForPasswordView:(id)passwordView;	// 0x30421981
- (CGRect)_rectForPdfView:(CGRect)pdfView;	// 0x304217f1
- (void)_removePDFViewIfWebDocViewIsNotPDF:(id)pdf;	// 0x301c6a61
- (void)_removePDFViewIfWebDocViewIsNotSamePDF:(id)pdf;	// 0x30421a2d
- (void)_replacePDFViewIfPresentWithWebDocView:(id)webDocView;	// 0x301c6a99
- (void)_resultRects:(id)rects andResultViews:(id)views forSearchResult:(id)searchResult inViewCoordinates:(id)viewCoordinates;	// 0x30424915
- (id)_scroller:(id)scroller;	// 0x301c5d29
- (void)_setSearchControllerDocumentToSearch;	// 0x30421655
- (void)_showLinkSheet:(id)sheet;	// 0x30423171
- (void)_showPasswordEntryViewForFile:(id)file;	// 0x30423ea9
- (void)_showPasswordErrorAlert;	// 0x304238d1
- (void)_updateViewHierarchyForDocumentView:(id)documentView ignoreIfSame:(BOOL)same;	// 0x30421df1
- (unsigned)_verticalEdgeForContentOffsetInScrollView:(id)scrollView;	// 0x304253e1
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x304235dd
- (void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;	// 0x3042367d
- (CGRect)activeRectForRectOfInterest:(CGRect)interest;	// 0x304252e9
- (void)adjustZoomScalesForScrollView;	// 0x3042230d
// declared property getter: - (id)backgroundColorForUnRenderedContent;	// 0x3042556d
- (void)clearActionSheet;	// 0x30422c79
- (void)clearAllViews;	// 0x3021645d
- (void)clearLinkHighlight;	// 0x30216575
- (void)clearPageLabel;	// 0x302165b1
- (BOOL)considerHeightForDoubleTap;	// 0x30425249
- (BOOL)considerHeightOfRectOfInterestForRotation;	// 0x3042530d
- (id)contentView;	// 0x304250f1
- (id)createLinkHighlight;	// 0x30422455
- (id)createPageLabel;	// 0x3042385d
- (float)currentDocumentScale;	// 0x30425135
- (void)dealloc;	// 0x302163d9
- (void)didBeginEditingPassword:(id)password inView:(id)view;	// 0x30423d61
- (void)didDetermineDocumentBounds:(id)bounds;	// 0x30424051
- (void)didEndEditingPassword:(id)password inView:(id)view;	// 0x30423dcd
- (void)didReceiveMemoryWarning:(id)warning;	// 0x304217b5
- (void)didScroll:(id)scroll;	// 0x304243a5
- (XXStruct_NwkmQC)doubleTapScalesForSize:(CGSize)size;	// 0x304251d1
- (id)enclosingScrollView;	// 0x304250dd
- (void)ensureCorrectPagesAreInstalled;	// 0x30214ef5
// declared property getter: - (id)frontView;	// 0x3012c525
- (void)handleLinkClick:(id)click inRect:(CGRect)rect;	// 0x30422c1d
- (void)handleLongPressOnLink:(id)link atPoint:(CGPoint)point inRect:(CGRect)rect contentRect:(CGRect)rect4;	// 0x30423481
- (void)handleScrollToAnchor:(id)anchor;	// 0x30424865
- (float)heightToKeepVisible;	// 0x304252e5
// declared property getter: - (BOOL)hideActivityIndicatorForUnRenderedContent;	// 0x3042557d
// declared property getter: - (BOOL)hidePageViewsUntilReadyToRender;	// 0x3042555d
- (void)highlightRect:(CGRect)rect;	// 0x30422541
- (id)hostViewForSheet:(id)sheet;	// 0x3042368d
- (CGRect)initialPresentationRectInHostViewForSheet:(id)sheet;	// 0x3042376d
- (float)minimumScaleForSize:(CGSize)size;	// 0x30425179
- (float)minimumVerticalContentOffset;	// 0x304252e1
- (id)passwordForPDFView:(id)pdfview;	// 0x30424305
// declared property getter: - (id)pdfHandlerDelegate;	// 0x3042554d
// declared property getter: - (id)pdfView;	// 0x3012c555
- (void)pdfView:(id)view zoomToRect:(CGRect)rect forPoint:(CGPoint)point considerHeight:(BOOL)height;	// 0x30424251
- (CGRect)presentationRectInHostViewForSheet:(id)sheet;	// 0x30423839
- (CGRect)rectOfInterestForPoint:(CGPoint)point;	// 0x304251ad
- (CGRect)rectOfInterestForRotation;	// 0x304252bd
- (void)removeViewFromSuperview;	// 0x304243f5
- (void)resetZoom:(id)zoom;	// 0x304242c1
- (void)restoreStateFromHistoryItem:(id)historyItem forWebView:(id)webView;	// 0x301d13f9
- (void)restoreStateFromPendingHistoryItem;	// 0x30425019
- (void)revealSearchResult:(id)result andZoomIn:(BOOL)anIn;	// 0x30424bc1
- (void)rotateEnclosingScrollViewToFrame:(CGRect)frame;	// 0x30425475
- (void)saveStateToHistoryItem:(id)historyItem forWebView:(id)webView;	// 0x301c8bd5
- (XXStruct_NwkmQC)scalesForContainerSize:(CGSize)containerSize;	// 0x30424f1d
// declared property getter: - (BOOL)scalesPageToFit;	// 0x3042553d
- (void)scrollToPageNumber:(int)pageNumber animate:(BOOL)animate;	// 0x304226c1
// declared property getter: - (id)searchController;	// 0x30421725
// declared property setter: - (void)setBackgroundColorForUnRenderedContent:(id)unRenderedContent;	// 0x3012c0b5
// declared property setter: - (void)setHideActivityIndicatorForUnRenderedContent:(BOOL)unRenderedContent;	// 0x30421625
// declared property setter: - (void)setHidePageViewsUntilReadyToRender:(BOOL)render;	// 0x304215f5
// declared property setter: - (void)setPdfHandlerDelegate:(id)delegate;	// 0x3012c115
// declared property setter: - (void)setScalesPageToFit:(BOOL)fit;	// 0x30214739
// declared property setter: - (void)setShowPageLabels:(BOOL)labels;	// 0x3012c125
// declared property getter: - (BOOL)showPageLabels;	// 0x3042552d
- (void)updateBoundariesOfScrollView:(id)scrollView withScales:(XXStruct_NwkmQC)scales;	// 0x30425259
- (void)updatePageNumberLabelWithUserScrolling:(BOOL)userScrolling animated:(BOOL)animated;	// 0x304245b9
- (void)updateViewHierarchyForDocumentViewLoadComplete:(id)documentViewLoadComplete;	// 0x301c89b1
- (void)updateViewHierarchyForDocumentViewNewLoad:(id)documentViewNewLoad;	// 0x301c5c95
- (void)updateViewHierarchyForDocumentViewTabSwitch:(id)documentViewTabSwitch;	// 0x30424545
- (void)updateViewHierarchyForDocumentViewTabSwitch:(id)documentViewTabSwitch restoringZoomScale:(float)scale andScrollPt:(CGPoint)pt;	// 0x30424449
- (void)updateViewHierarchyForFirstNonEmptyLayoutInFrame:(id)frame;	// 0x301c6a51
- (void)updateViewSettings;	// 0x30421e71
- (void)userDidEnterPassword:(id)user forPasswordView:(id)passwordView;	// 0x30423971
- (CGRect)visibleContentRect;	// 0x30425145
- (float)zoomedDocumentScale;	// 0x30425101
@end

