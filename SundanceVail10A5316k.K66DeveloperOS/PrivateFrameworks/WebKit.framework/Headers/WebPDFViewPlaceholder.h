/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebPDFDocumentRepresentation.h"
#import "WebKit-Structs.h"
#import <WAKView.h> // Unknown library
#import "WebPDFDocumentView.h"

@class NSArray, WebDataSource, NSString, NSObject;
@protocol WebPDFViewPlaceholderDelegate;

@interface WebPDFViewPlaceholder : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {
@private
	NSString *_title;	// 40 = 0x28
	NSArray *_pageRects;	// 44 = 0x2c
	CGPDFDocumentRef _document;	// 48 = 0x30
	WebDataSource *_dataSource;	// 52 = 0x34
	NSObject<WebPDFViewPlaceholderDelegate> *_delegate;	// 56 = 0x38
	BOOL _didFinishLoadAndMemoryMap;	// 60 = 0x3c
}
@property(assign) NSObject<WebPDFViewPlaceholderDelegate> *delegate;	// G=0x35072ad1; S=0x35072ae5; @synthesize=_delegate
@property(readonly, assign) CGPDFDocumentRef doc;	// G=0x35071869; 
@property(readonly, assign) CGPDFDocumentRef document;	// G=0x3507171d; @synthesize=_document
@property(retain) NSArray *pageRects;	// G=0x35072afd; S=0x35072b11; @synthesize=_pageRects
@property(retain) NSString *title;	// G=0x35072b21; S=0x35072b35; @synthesize=_title
@property(readonly, assign) unsigned totalPages;	// G=0x35071879; 
+ (Class)_representationClassForWebFrame:(id)webFrame;	// 0x35071895
+ (void)setAsPDFDocRepAndView;	// 0x350021cd
+ (id)supportedMIMETypes;	// 0x350119e1
- (CGSize)_computePageRects:(CGPDFDocumentRef)rects;	// 0x35071fd1
- (void)_doPostLoadOrUnlockTasks;	// 0x35071bb1
- (void)_evaluateJSForDocument:(CGPDFDocumentRef)document;	// 0x35071cd5
- (CGRect)_getPDFPageBounds:(CGPDFPageRef)bounds;	// 0x35071ee9
- (void)_notifyDidCompleteLayout;	// 0x35071a3d
- (void)_updateTitleForDocumentIfAvailable;	// 0x35071e3d
- (void)_updateTitleForURL:(id)url;	// 0x35071d89
- (BOOL)canProvideDocumentSource;	// 0x35071ccd
- (void)dataSourceMemoryMapFailed;	// 0x35071c79
- (void)dataSourceMemoryMapped;	// 0x35071c09
- (void)dataSourceUpdated:(id)updated;	// 0x35071b09
- (void)dealloc;	// 0x350718b1
// declared property getter: - (id)delegate;	// 0x35072ad1
- (void)didUnlockDocument;	// 0x350724f9
// declared property getter: - (CGPDFDocumentRef)doc;	// 0x35071869
// declared property getter: - (CGPDFDocumentRef)document;	// 0x3507171d
- (id)documentSource;	// 0x35071cd1
- (void)finishedLoadingWithDataSource:(id)dataSource;	// 0x35071c89
- (void)layout;	// 0x35071b19
// declared property getter: - (id)pageRects;	// 0x35072afd
- (void)receivedData:(id)data withDataSource:(id)dataSource;	// 0x35071ba9
- (void)receivedError:(id)error withDataSource:(id)dataSource;	// 0x35071bad
- (CGRect)rectForPageNumber:(unsigned)pageNumber;	// 0x35072509
- (void)setDataSource:(id)source;	// 0x35071965
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35072ae5
- (void)setDocument:(CGPDFDocumentRef)document;	// 0x3507179d
// declared property setter: - (void)setPageRects:(id)rects;	// 0x35072b11
// declared property setter: - (void)setTitle:(id)title;	// 0x35072b35
- (void)simulateClickOnLinkToURL:(id)url;	// 0x3507259d
// declared property getter: - (id)title;	// 0x35072b21
// declared property getter: - (unsigned)totalPages;	// 0x35071879
- (void)viewDidMoveToHostWindow;	// 0x35071ba5
- (void)viewWillMoveToHostWindow:(id)view;	// 0x35071ba1
@end

