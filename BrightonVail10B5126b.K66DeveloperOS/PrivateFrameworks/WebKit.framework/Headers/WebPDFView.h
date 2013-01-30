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

@class NSString;

@interface WebPDFView : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {
	BOOL dataSourceHasBeenSet;	// 38 = 0x26
	CGPDFDocumentRef _PDFDocument;	// 40 = 0x28
	NSString *_title;	// 44 = 0x2c
	CGRect *_pageRects;	// 48 = 0x30
}
@property(readonly, retain) NSString *title;	// G=0x365f4325; converted property
+ (Class)_representationClassForWebFrame:(id)webFrame;	// 0x365f3701
+ (CGColorRef)backgroundColor;	// 0x365f360d
+ (CGColorRef)shadowColor;	// 0x365f351d
+ (id)supportedMIMETypes;	// 0x3659cbd1
- (void)_checkPDFTitle;	// 0x365f3f59
- (void)_computePageRects;	// 0x365f3d89
- (id)_pagesInRect:(CGRect)rect;	// 0x365f3965
- (BOOL)canProvideDocumentSource;	// 0x365f431d
- (void)dataSourceUpdated:(id)updated;	// 0x365f3d5d
- (void)dealloc;	// 0x365f3759
- (CGPDFDocumentRef)doc;	// 0x365f4461
- (id)documentSource;	// 0x365f4321
- (void)drawPage:(CGPDFPageRef)page;	// 0x365f37cd
- (void)drawRect:(CGRect)rect;	// 0x365f3b81
- (void)finishedLoadingWithDataSource:(id)dataSource;	// 0x365f420d
- (void)layout;	// 0x365f3d65
- (unsigned)pageNumberForRect:(CGRect)rect;	// 0x365f4335
- (void)receivedData:(id)data withDataSource:(id)dataSource;	// 0x365f3d81
- (void)receivedError:(id)error withDataSource:(id)dataSource;	// 0x365f3d85
- (CGRect)rectForPageNumber:(unsigned)pageNumber;	// 0x365f4471
- (void)setDataSource:(id)source;	// 0x365f3c61
- (void)setNeedsLayout:(BOOL)layout;	// 0x365f3d61
// converted property getter: - (id)title;	// 0x365f4325
- (unsigned)totalPages;	// 0x365f4445
- (void)viewDidMoveToHostWindow;	// 0x365f3d7d
- (void)viewWillMoveToHostWindow:(id)view;	// 0x365f3d79
@end
