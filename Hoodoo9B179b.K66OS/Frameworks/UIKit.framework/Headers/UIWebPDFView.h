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

@class NSURL, NSArray, UIColor, UIPDFDocument, NSString, WebPDFViewPlaceholder, NSMutableArray, UITapGestureRecognizer;
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
@property(retain, nonatomic) UIColor *backgroundColorForUnRenderedContent;	// G=0x3325e43d; S=0x3325e44d; @synthesize
@property(readonly, assign, nonatomic) CGPDFDocumentRef cgPDFDocument;	// G=0x3325b6ed; 
@property(readonly, assign, nonatomic) UIPDFDocument *document;	// G=0x3325b70d; 
@property(readonly, assign, nonatomic) CGRect documentBounds;	// G=0x3325e331; @synthesize=_documentBounds
@property(retain, nonatomic) NSString *documentPassword;	// G=0x3325e491; S=0x3325e4a1; @synthesize
@property(readonly, assign, nonatomic) float documentScale;	// G=0x3325e3dd; @synthesize=_documentScale
@property(assign, nonatomic) CGAffineTransform documentTransform;	// G=0x3325e375; S=0x3325e3a9; @synthesize=_documentTransform
@property(retain, nonatomic) NSURL *documentURL;	// G=0x3325e2ed; S=0x3325e2fd; @synthesize=_documentURL
@property(assign, nonatomic) BOOL hideActivityIndicatorForUnRenderedContent;	// G=0x3325e471; S=0x3325e481; @synthesize
@property(assign, nonatomic) BOOL hidePageViewsUntilReadyToRender;	// G=0x3325e41d; S=0x3325e42d; @synthesize
@property(assign, nonatomic) int ignoreContentOffsetChanges;	// G=0x3325e40d; S=0x3325b621; @synthesize=_ignoreContentOffsetChanges
@property(assign, nonatomic) float initialZoomScale;	// G=0x3325e355; S=0x3325e365; @synthesize=_initialZoomScale
@property(retain, nonatomic) NSArray *pageRects;	// G=0x3325e4c5; S=0x3325e4d5; @synthesize
@property(assign, nonatomic) NSObject<UIWebPDFViewDelegate> *pdfDelegate;	// G=0x3325e321; S=0x3325b64d; @synthesize=_pdfDelegate
@property(assign) WebPDFViewPlaceholder *pdfPlaceHolderView;	// G=0x3325e3ed; S=0x3325e3fd; @synthesize
@property(readonly, assign, nonatomic) unsigned totalPages;	// G=0x3325b69d; 
+ (void)setAsPDFDocRepAndView;	// 0x32f62df1
- (id)initWithWebPDFViewPlaceholder:(id)webPDFViewPlaceholder;	// 0x3325b71d
- (IndexPair)_addBackwardSubViewsInDocCoordsBounds:(CGRect)docCoordsBounds withPageRects:(id)pageRects usingIndices:(IndexPair)indices;	// 0x3325c67d
- (IndexPair)_addForwardSubViewsInDocCoordsBounds:(CGRect)docCoordsBounds withPageRects:(id)pageRects usingIndices:(IndexPair)indices;	// 0x3325c4f9
- (id)_addPageAtIndex:(unsigned)index;	// 0x3325cac9
- (void)_addSubViewsInViewCoordsBounds:(CGRect)viewCoordsBounds;	// 0x3325c7cd
- (BOOL)_checkIfDocumentNeedsUnlock;	// 0x3325d869
- (void)_define:(id)define;	// 0x3325e05d
- (void)_didScroll;	// 0x3325ceb9
- (BOOL)_hasPageRects;	// 0x3325b6bd
- (id)_installViewAtIndex:(int)index inFrame:(CGRect)frame;	// 0x3325c1cd
- (id)_pageWithSelection;	// 0x3325de59
- (void)_recreateUIPDFDocument;	// 0x3325d9a1
- (void)_removeBackgroundImageObserverIfNeeded:(id)needed;	// 0x3325ba1d
- (void)_removePageViewsNotInCurrentViewCoordsRect;	// 0x3325ccf9
- (void)_removePageViewsNotInViewCoordsRect:(CGRect)viewCoordsRect;	// 0x3325cb5d
- (void)_scheduleRemovePageViewsNotInViewCoordsRect;	// 0x3325cd45
- (id)_selection;	// 0x3325df3d
- (void)_tapGestureRecognized:(id)recognized;	// 0x3325e28d
- (BOOL)_tryToUnlockDocumentWithPassword:(id)password;	// 0x3325d7c5
- (CGRect)_viewCachingBoundsInUIViewCoords;	// 0x3325bf39
- (CGRect)_viewportBoundsInUIVIewCoordsWithView:(id)view;	// 0x3325be79
- (CGRect)_viewportBoundsInUIViewCoords;	// 0x3325bef5
// declared property getter: - (id)backgroundColorForUnRenderedContent;	// 0x3325e43d
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x3325df75
// declared property getter: - (CGPDFDocumentRef)cgPDFDocument;	// 0x3325b6ed
- (void)clearSelection;	// 0x3325de2d
- (void)dealloc;	// 0x3325bacd
- (void)didCompleteLayout;	// 0x3325dab5
- (void)didReceiveMemoryWarning:(id)warning;	// 0x3325cf55
- (void)didRotate:(id)rotate;	// 0x3325d04d
- (void)didTouch:(id)touch inRect:(CGRect)rect withAnnotationDictionary:(CGPDFDictionaryRef)annotationDictionary;	// 0x3325dd89
- (void)didZoom:(id)zoom;	// 0x3325d14d
// declared property getter: - (id)document;	// 0x3325b70d
// declared property getter: - (CGRect)documentBounds;	// 0x3325e331
// declared property getter: - (id)documentPassword;	// 0x3325e491
// declared property getter: - (float)documentScale;	// 0x3325e3dd
// declared property getter: - (CGAffineTransform)documentTransform;	// 0x3325e375
// declared property getter: - (id)documentURL;	// 0x3325e2ed
- (void)ensureCorrectPagesAreInstalled;	// 0x3325cdbd
- (unsigned)firstVisiblePageNumber;	// 0x3325d18d
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x3325e2b9
// declared property getter: - (BOOL)hideActivityIndicatorForUnRenderedContent;	// 0x3325e471
// declared property getter: - (BOOL)hidePageViewsUntilReadyToRender;	// 0x3325e41d
// declared property getter: - (int)ignoreContentOffsetChanges;	// 0x3325e40d
// declared property getter: - (float)initialZoomScale;	// 0x3325e355
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3325c025
// declared property getter: - (id)pageRects;	// 0x3325e4c5
// declared property getter: - (id)pdfDelegate;	// 0x3325e321
// declared property getter: - (id)pdfPlaceHolderView;	// 0x3325e3ed
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x3325e279
- (void)prepareForSnapshot;	// 0x3325d391
- (void)resetZoom:(id)zoom;	// 0x3325dd41
// declared property setter: - (void)setBackgroundColorForUnRenderedContent:(id)unRenderedContent;	// 0x3325e44d
// declared property setter: - (void)setDocumentPassword:(id)password;	// 0x3325e4a1
// declared property setter: - (void)setDocumentTransform:(CGAffineTransform)transform;	// 0x3325e3a9
// declared property setter: - (void)setDocumentURL:(id)url;	// 0x3325e2fd
// declared property setter: - (void)setHideActivityIndicatorForUnRenderedContent:(BOOL)unRenderedContent;	// 0x3325e481
// declared property setter: - (void)setHidePageViewsUntilReadyToRender:(BOOL)render;	// 0x3325e42d
// declared property setter: - (void)setIgnoreContentOffsetChanges:(int)changes;	// 0x3325b621
// declared property setter: - (void)setInitialZoomScale:(float)scale;	// 0x3325e365
// declared property setter: - (void)setPageRects:(id)rects;	// 0x3325e4d5
// declared property setter: - (void)setPdfDelegate:(id)delegate;	// 0x3325b64d
// declared property setter: - (void)setPdfPlaceHolderView:(id)view;	// 0x3325e3fd
- (void)snapshotComplete;	// 0x3325d679
// declared property getter: - (unsigned)totalPages;	// 0x3325b69d
- (id)uiPDFDocument;	// 0x3325b6fd
- (id)viewAtIndex:(int)index;	// 0x3325bd69
- (void)viewWillClose;	// 0x3325d7b1
- (id)viewportView;	// 0x3325be21
- (void)willRotate:(id)rotate;	// 0x3325cfb5
- (void)willScroll:(id)scroll;	// 0x3325ce61
- (void)willZoom:(id)zoom;	// 0x3325d0b5
- (void)zoom:(id)zoom to:(CGRect)to kind:(int)kind;	// 0x3325dca5
@end

