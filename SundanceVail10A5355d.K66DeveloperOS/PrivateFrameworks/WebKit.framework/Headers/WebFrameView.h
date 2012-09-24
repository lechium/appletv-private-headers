/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "WebCoreFrameView.h"
#import <WAKView.h> // Unknown library

@class WebFrameViewPrivate;

@interface WebFrameView : WAKView <WebCoreFrameView> {
	WebFrameViewPrivate *_private;	// 40 = 0x28
}
@property(assign) BOOL allowsScrolling;	// G=0x316c82e1; S=0x3169686d; converted property
+ (BOOL)_canShowMIMETypeAsHTML:(id)html;	// 0x3168b49d
+ (Class)_viewClassForMIMEType:(id)mimetype allowingPlugins:(BOOL)plugins;	// 0x3169311d
+ (id)_viewTypesAllowImageTypeOmission:(BOOL)omission;	// 0x31684c31
- (id)initWithFrame:(CGRect)frame;	// 0x31675b95
- (float)_area;	// 0x316c9825
- (id)_contentView;	// 0x316c9b31
- (Class)_customScrollViewClass;	// 0x316c9b59
- (BOOL)_firstResponderIsFormControl;	// 0x316c9229
- (void)_forwardMouseEvent:(id)event;	// 0x316c922d
- (void)_frameSizeChanged;	// 0x3168c4a5
- (void)_goBack;	// 0x316c8bb1
- (void)_goForward;	// 0x316c8bd9
- (BOOL)_hasScrollBars;	// 0x316c99b1
- (float)_horizontalKeyboardScrollDistance;	// 0x316c8d11
- (float)_horizontalPageScrollDistance;	// 0x316c8d39
- (void)_install;	// 0x31678711
- (BOOL)_isFlippedDocument;	// 0x316c8759
- (BOOL)_isScrollable;	// 0x316c9869
- (BOOL)_isVerticalDocument;	// 0x316c8715
- (id)_largestChildWithScrollBars;	// 0x316c9a01
- (id)_largestScrollableChild;	// 0x316c9881
- (id)_makeDocumentViewForDataSource:(id)dataSource;	// 0x316c8135
- (BOOL)_pageHorizontally:(BOOL)horizontally;	// 0x316c8e55
- (BOOL)_pageInBlockProgressionDirection:(BOOL)blockProgressionDirection;	// 0x316c8ef9
- (BOOL)_pageVertically:(BOOL)vertically;	// 0x316c8db1
- (BOOL)_scrollHorizontallyBy:(float)by;	// 0x316c8c89
- (BOOL)_scrollLineHorizontally:(BOOL)horizontally;	// 0x316c9025
- (BOOL)_scrollLineVertically:(BOOL)vertically;	// 0x316c8f81
- (BOOL)_scrollOverflowInDirection:(int)direction granularity:(int)granularity;	// 0x316c8689
- (BOOL)_scrollToBeginningOfDocument;	// 0x316c87a5
- (BOOL)_scrollToEndOfDocument;	// 0x316c88e9
- (BOOL)_scrollVerticallyBy:(float)by;	// 0x316c8c01
- (id)_scrollView;	// 0x316778b5
- (void)_setDocumentView:(id)view;	// 0x31678399
- (void)_setWebFrame:(id)frame;	// 0x316772e5
- (float)_verticalKeyboardScrollDistance;	// 0x316c810d
- (float)_verticalPageScrollDistance;	// 0x316c8209
- (Class)_viewClassForMIMEType:(id)mimetype;	// 0x31693035
- (id)_webView;	// 0x316930f1
- (Frame *)_web_frame;	// 0x3168c531
- (id)_webcore_effectiveFirstResponder;	// 0x316c970d
- (BOOL)acceptsFirstResponder;	// 0x316c8335
// converted property getter: - (BOOL)allowsScrolling;	// 0x316c82e1
- (BOOL)becomeFirstResponder;	// 0x316c8339
- (void)dealloc;	// 0x31692339
- (id)documentView;	// 0x31678441
- (BOOL)documentViewShouldHandlePrint;	// 0x316c9765
- (void)drawRect:(CGRect)rect;	// 0x31682d65
- (void)finalize;	// 0x316c8281
- (void)frameSizeChanged;	// 0x3168c43d
- (BOOL)isOpaque;	// 0x316c845d
- (void)keyDown:(id)down;	// 0x316c92d5
- (void)mouseDown:(id)down;	// 0x316c92b5
- (void)mouseUp:(id)up;	// 0x316c92c5
- (void)printDocumentView;	// 0x316c97c5
- (void)scrollLineDown:(id)down;	// 0x316c91d1
- (void)scrollLineUp:(id)up;	// 0x316c9179
- (void)scrollPageDown:(id)down;	// 0x316c9121
- (void)scrollPageUp:(id)up;	// 0x316c90c9
- (void)scrollToBeginningOfDocument:(id)document;	// 0x316c8ac1
- (void)scrollToEndOfDocument:(id)document;	// 0x316c8b39
- (BOOL)scrollView:(id)view shouldScrollToPoint:(CGPoint)point;	// 0x316942a9
// converted property setter: - (void)setAllowsScrolling:(BOOL)scrolling;	// 0x3169686d
- (void)setFrameSize:(CGSize)size;	// 0x316c8609
- (void)setNextKeyView:(id)view;	// 0x316c83f5
- (void)viewDidMoveToWindow;	// 0x3167bafd
- (CGRect)visibleRect;	// 0x316c8485
- (id)webFrame;	// 0x3167bb99
@end
