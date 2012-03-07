/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "WebPDFViewPlaceholderDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UIView.h"

@class NSURL, UIPDFDocument, WebPDFViewPlaceholder, UIColor, NSMutableArray, NSString, UITapGestureRecognizer, NSArray;
@protocol UIWebPDFViewDelegate;

@interface UIWebPDFView : UIView <WebPDFViewPlaceholderDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate> {
	NSMutableArray *_backingLayerImageViews;	// 48 = 0x30
@private
	CGPDFDocumentRef _cgPDFDocument;	// 52 = 0x34
	UIPDFDocument *_document;	// 56 = 0x38
	BOOL _hasScheduledCacheUpdate;	// 60 = 0x3c
	CGRect _documentBounds;	// 64 = 0x40
	NSObject<UIWebPDFViewDelegate> *_pdfDelegate;	// 80 = 0x50
	BOOL _delegateRespondsToDidScroll;	// 84 = 0x54
	UITapGestureRecognizer *_tapGestureRecognizer;	// 88 = 0x58
	NSURL *_documentURL;	// 92 = 0x5c
	BOOL _rotating;	// 96 = 0x60
	BOOL _zooming;	// 97 = 0x61
	BOOL _inDidZoom;	// 98 = 0x62
	float _initialZoomScale;	// 100 = 0x64
	CGAffineTransform _documentTransform;	// 104 = 0x68
	float _documentScale;	// 128 = 0x80
	int _ignoreContentOffsetChanges;	// 132 = 0x84
	CGPoint _contentOffsetAtScrollStart;	// 136 = 0x88
	NSMutableArray *_pageViews;	// 144 = 0x90
	IndexPair _installedPageIndices;	// 148 = 0x94
	WebPDFViewPlaceholder *pdfPlaceHolderView;	// 156 = 0x9c
	BOOL hidePageViewsUntilReadyToRender;	// 160 = 0xa0
	UIColor *backgroundColorForUnRenderedContent;	// 164 = 0xa4
	BOOL hideActivityIndicatorForUnRenderedContent;	// 168 = 0xa8
	NSString *documentPassword;	// 172 = 0xac
	NSArray *pageRects;	// 176 = 0xb0
}
@property(retain, nonatomic) UIColor *backgroundColorForUnRenderedContent;	// G=0x303c6dfd; S=0x303c6e0d; @synthesize
@property(readonly, assign, nonatomic) CGPDFDocumentRef cgPDFDocument;	// G=0x303c40ad; 
@property(readonly, assign, nonatomic) UIPDFDocument *document;	// G=0x303c40cd; 
@property(readonly, assign, nonatomic) CGRect documentBounds;	// G=0x303c6cf1; @synthesize=_documentBounds
@property(retain, nonatomic) NSString *documentPassword;	// G=0x303c6e51; S=0x303c6e61; @synthesize
@property(readonly, assign, nonatomic) float documentScale;	// G=0x303c6d9d; @synthesize=_documentScale
@property(assign, nonatomic) CGAffineTransform documentTransform;	// G=0x303c6d35; S=0x303c6d69; @synthesize=_documentTransform
@property(retain, nonatomic) NSURL *documentURL;	// G=0x303c6cad; S=0x303c6cbd; @synthesize=_documentURL
@property(assign, nonatomic) BOOL hideActivityIndicatorForUnRenderedContent;	// G=0x303c6e31; S=0x303c6e41; @synthesize
@property(assign, nonatomic) BOOL hidePageViewsUntilReadyToRender;	// G=0x303c6ddd; S=0x303c6ded; @synthesize
@property(assign, nonatomic) int ignoreContentOffsetChanges;	// G=0x303c6dcd; S=0x303c3fe1; @synthesize=_ignoreContentOffsetChanges
@property(assign, nonatomic) float initialZoomScale;	// G=0x303c6d15; S=0x303c6d25; @synthesize=_initialZoomScale
@property(retain, nonatomic) NSArray *pageRects;	// G=0x303c6e85; S=0x303c6e95; @synthesize
@property(assign, nonatomic) NSObject<UIWebPDFViewDelegate> *pdfDelegate;	// G=0x303c6ce1; S=0x303c400d; @synthesize=_pdfDelegate
@property(assign) WebPDFViewPlaceholder *pdfPlaceHolderView;	// G=0x303c6dad; S=0x303c6dbd; @synthesize
@property(readonly, assign, nonatomic) unsigned totalPages;	// G=0x303c405d; 
+ (void)setAsPDFDocRepAndView;	// 0x300d38f1
- (id)initWithWebPDFViewPlaceholder:(id)webPDFViewPlaceholder;	// 0x303c40dd
- (IndexPair)_addBackwardSubViewsInDocCoordsBounds:(CGRect)docCoordsBounds withPageRects:(id)pageRects usingIndices:(IndexPair)indices;	// 0x303c503d
- (IndexPair)_addForwardSubViewsInDocCoordsBounds:(CGRect)docCoordsBounds withPageRects:(id)pageRects usingIndices:(IndexPair)indices;	// 0x303c4eb9
- (id)_addPageAtIndex:(unsigned)index;	// 0x303c5489
- (void)_addSubViewsInViewCoordsBounds:(CGRect)viewCoordsBounds;	// 0x303c518d
- (BOOL)_checkIfDocumentNeedsUnlock;	// 0x303c6229
- (void)_define:(id)define;	// 0x303c6a1d
- (void)_didScroll;	// 0x303c5879
- (BOOL)_hasPageRects;	// 0x303c407d
- (id)_installViewAtIndex:(int)index inFrame:(CGRect)frame;	// 0x303c4b8d
- (id)_pageWithSelection;	// 0x303c6819
- (void)_recreateUIPDFDocument;	// 0x303c6361
- (void)_removeBackgroundImageObserverIfNeeded:(id)needed;	// 0x303c43dd
- (void)_removePageViewsNotInCurrentViewCoordsRect;	// 0x303c56b9
- (void)_removePageViewsNotInViewCoordsRect:(CGRect)viewCoordsRect;	// 0x303c551d
- (void)_scheduleRemovePageViewsNotInViewCoordsRect;	// 0x303c5705
- (id)_selection;	// 0x303c68fd
- (void)_tapGestureRecognized:(id)recognized;	// 0x303c6c4d
- (BOOL)_tryToUnlockDocumentWithPassword:(id)password;	// 0x303c6185
- (CGRect)_viewCachingBoundsInUIViewCoords;	// 0x303c48f9
- (CGRect)_viewportBoundsInUIVIewCoordsWithView:(id)view;	// 0x303c4839
- (CGRect)_viewportBoundsInUIViewCoords;	// 0x303c48b5
// declared property getter: - (id)backgroundColorForUnRenderedContent;	// 0x303c6dfd
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x303c6935
// declared property getter: - (CGPDFDocumentRef)cgPDFDocument;	// 0x303c40ad
- (void)clearSelection;	// 0x303c67ed
- (void)dealloc;	// 0x303c448d
- (void)didCompleteLayout;	// 0x303c6475
- (void)didReceiveMemoryWarning:(id)warning;	// 0x303c5915
- (void)didRotate:(id)rotate;	// 0x303c5a0d
- (void)didTouch:(id)touch inRect:(CGRect)rect withAnnotationDictionary:(CGPDFDictionaryRef)annotationDictionary;	// 0x303c6749
- (void)didZoom:(id)zoom;	// 0x303c5b0d
// declared property getter: - (id)document;	// 0x303c40cd
// declared property getter: - (CGRect)documentBounds;	// 0x303c6cf1
// declared property getter: - (id)documentPassword;	// 0x303c6e51
// declared property getter: - (float)documentScale;	// 0x303c6d9d
// declared property getter: - (CGAffineTransform)documentTransform;	// 0x303c6d35
// declared property getter: - (id)documentURL;	// 0x303c6cad
- (void)ensureCorrectPagesAreInstalled;	// 0x303c577d
- (unsigned)firstVisiblePageNumber;	// 0x303c5b4d
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x303c6c79
// declared property getter: - (BOOL)hideActivityIndicatorForUnRenderedContent;	// 0x303c6e31
// declared property getter: - (BOOL)hidePageViewsUntilReadyToRender;	// 0x303c6ddd
// declared property getter: - (int)ignoreContentOffsetChanges;	// 0x303c6dcd
// declared property getter: - (float)initialZoomScale;	// 0x303c6d15
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x303c49e5
// declared property getter: - (id)pageRects;	// 0x303c6e85
// declared property getter: - (id)pdfDelegate;	// 0x303c6ce1
// declared property getter: - (id)pdfPlaceHolderView;	// 0x303c6dad
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x303c6c39
- (void)prepareForSnapshot;	// 0x303c5d51
- (void)resetZoom:(id)zoom;	// 0x303c6701
// declared property setter: - (void)setBackgroundColorForUnRenderedContent:(id)unRenderedContent;	// 0x303c6e0d
// declared property setter: - (void)setDocumentPassword:(id)password;	// 0x303c6e61
// declared property setter: - (void)setDocumentTransform:(CGAffineTransform)transform;	// 0x303c6d69
// declared property setter: - (void)setDocumentURL:(id)url;	// 0x303c6cbd
// declared property setter: - (void)setHideActivityIndicatorForUnRenderedContent:(BOOL)unRenderedContent;	// 0x303c6e41
// declared property setter: - (void)setHidePageViewsUntilReadyToRender:(BOOL)render;	// 0x303c6ded
// declared property setter: - (void)setIgnoreContentOffsetChanges:(int)changes;	// 0x303c3fe1
// declared property setter: - (void)setInitialZoomScale:(float)scale;	// 0x303c6d25
// declared property setter: - (void)setPageRects:(id)rects;	// 0x303c6e95
// declared property setter: - (void)setPdfDelegate:(id)delegate;	// 0x303c400d
// declared property setter: - (void)setPdfPlaceHolderView:(id)view;	// 0x303c6dbd
- (void)snapshotComplete;	// 0x303c6039
// declared property getter: - (unsigned)totalPages;	// 0x303c405d
- (id)uiPDFDocument;	// 0x303c40bd
- (id)viewAtIndex:(int)index;	// 0x303c4729
- (void)viewWillClose;	// 0x303c6171
- (id)viewportView;	// 0x303c47e1
- (void)willRotate:(id)rotate;	// 0x303c5975
- (void)willScroll:(id)scroll;	// 0x303c5821
- (void)willZoom:(id)zoom;	// 0x303c5a75
- (void)zoom:(id)zoom to:(CGRect)to kind:(int)kind;	// 0x303c6665
@end
