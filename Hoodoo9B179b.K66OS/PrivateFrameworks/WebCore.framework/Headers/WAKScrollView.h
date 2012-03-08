/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WAKView.h"
#import "WebCore-Structs.h"
#import "WebCoreFrameScrollView.h"


@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {
@private
	WAKView *_documentView;	// 68 = 0x44
	id _delegate;	// 72 = 0x48
	CGPoint _scrollOrigin;	// 76 = 0x4c
}
@property(retain) id contentView;	// G=0x3348626d; S=0x33b0d6a5; converted property
@property(assign) id delegate;	// G=0x334c256d; S=0x334327c9; converted property
@property(retain) WAKView *documentView;	// G=0x3343e295; S=0x3343e11d; converted property
@property(assign) BOOL drawsBackground;	// G=0x33b0d415; S=0x334327d9; converted property
@property(assign) BOOL hasHorizontalScroller;	// G=0x33b0d411; S=0x334327e1; converted property
@property(assign) BOOL hasVerticalScroller;	// G=0x33b0d40d; S=0x334327dd; converted property
@property(assign) int horizontalScrollingMode;	// G=0x33b0d435; S=0x33b0d429; converted property
@property(readonly, assign) CGPoint scrollOrigin;	// G=0x334c1f9d; converted property
@property(assign) int verticalScrollingMode;	// G=0x33b0d439; S=0x33b0d42d; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x334324e5
- (CGRect)actualDocumentVisibleRect;	// 0x334c1911
// converted property getter: - (id)contentView;	// 0x3348626d
- (void)dealloc;	// 0x33617cb5
// converted property getter: - (id)delegate;	// 0x334c256d
- (id)description;	// 0x33b0d441
// converted property getter: - (id)documentView;	// 0x3343e295
- (CGRect)documentVisibleRect;	// 0x3348623d
- (void)drawRect:(CGRect)rect;	// 0x33b0d425
// converted property getter: - (BOOL)drawsBackground;	// 0x33b0d415
// converted property getter: - (BOOL)hasHorizontalScroller;	// 0x33b0d411
// converted property getter: - (BOOL)hasVerticalScroller;	// 0x33b0d40d
- (float)horizontalLineScroll;	// 0x33b0d41d
// converted property getter: - (int)horizontalScrollingMode;	// 0x33b0d435
- (BOOL)inProgrammaticScroll;	// 0x33b0d43d
- (void)reflectScrolledClipView:(id)view;	// 0x33b0d421
// converted property getter: - (CGPoint)scrollOrigin;	// 0x334c1f9d
- (void)scrollWheel:(id)wheel;	// 0x33b0d56d
- (void)scrollingModes:(int *)modes vertical:(int *)vertical;	// 0x3343f5bd
- (void)setActualScrollPosition:(CGPoint)position;	// 0x33642731
// converted property setter: - (void)setContentView:(id)view;	// 0x33b0d6a5
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x334327c9
// converted property setter: - (void)setDocumentView:(id)view;	// 0x3343e11d
// converted property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x334327d9
// converted property setter: - (void)setHasHorizontalScroller:(BOOL)scroller;	// 0x334327e1
// converted property setter: - (void)setHasVerticalScroller:(BOOL)scroller;	// 0x334327dd
// converted property setter: - (void)setHorizontalScrollingMode:(int)mode;	// 0x33b0d429
- (void)setLineScroll:(float)scroll;	// 0x3343282d
- (void)setScrollBarsSuppressed:(BOOL)suppressed repaintOnUnsuppress:(BOOL)unsuppress;	// 0x334ef57d
- (void)setScrollOrigin:(CGPoint)origin updatePositionAtAll:(BOOL)all immediately:(BOOL)immediately;	// 0x33b0d65d
- (void)setScrollingMode:(int)mode;	// 0x33b0d431
- (void)setScrollingModes:(int)modes vertical:(int)vertical andLock:(BOOL)lock;	// 0x3343f7e5
// converted property setter: - (void)setVerticalScrollingMode:(int)mode;	// 0x33b0d42d
- (float)verticalLineScroll;	// 0x33b0d419
// converted property getter: - (int)verticalScrollingMode;	// 0x33b0d439
@end

