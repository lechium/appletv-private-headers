/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray;

@interface UIPrintPageRenderer : NSObject {
@private
	int _pageCount;	// 4 = 0x4
	float _headerHeight;	// 8 = 0x8
	float _footerHeight;	// 12 = 0xc
	CGRect _paperRect;	// 16 = 0x10
	CGRect _printableRect;	// 32 = 0x20
	NSMutableArray *_printFormatters;	// 48 = 0x30
	CGContextRef _printContext;	// 52 = 0x34
}
@property(assign, nonatomic) float footerHeight;	// G=0x359db731; S=0x359db1e5; @synthesize=_footerHeight
@property(assign, nonatomic) float headerHeight;	// G=0x359db721; S=0x359db13d; @synthesize=_headerHeight
@property(assign, nonatomic) CGRect paperRect;	// G=0x359db741; S=0x359db765; @synthesize=_paperRect
@property(copy, nonatomic) NSArray *printFormatters;	// G=0x359db7c1; S=0x359dae11; @synthesize=_printFormatters
@property(assign, nonatomic) CGRect printableRect;	// G=0x359db781; S=0x359db7a5; @synthesize=_printableRect
- (void)_drawPage:(int)page;	// 0x359db5e1
- (void)_endPrintContext:(id)context success:(BOOL)success;	// 0x359db6c5
- (int)_maxFormatterPage;	// 0x359db049
- (void)_removePrintFormatter:(id)formatter;	// 0x359db009
- (BOOL)_startPrintContext:(id)context printSettings:(id)settings;	// 0x359db519
- (void)addPrintFormatter:(id)formatter startingAtPageAtIndex:(int)index;	// 0x359dae55
- (void)dealloc;	// 0x359dadad
- (void)drawContentForPageAtIndex:(int)index inRect:(CGRect)rect;	// 0x359db511
- (void)drawFooterForPageAtIndex:(int)index inRect:(CGRect)rect;	// 0x359db515
- (void)drawHeaderForPageAtIndex:(int)index inRect:(CGRect)rect;	// 0x359db50d
- (void)drawPageAtIndex:(int)index inRect:(CGRect)rect;	// 0x359db28d
- (void)drawPrintFormatter:(id)formatter forPageAtIndex:(int)index;	// 0x359db4b1
// declared property getter: - (float)footerHeight;	// 0x359db731
// declared property getter: - (float)headerHeight;	// 0x359db721
- (int)numberOfPages;	// 0x359db129
// declared property getter: - (CGRect)paperRect;	// 0x359db741
- (void)prepareForDrawingPages:(NSRange)drawingPages;	// 0x359db139
// declared property getter: - (id)printFormatters;	// 0x359db7c1
- (id)printFormattersForPageAtIndex:(int)index;	// 0x359daeed
// declared property getter: - (CGRect)printableRect;	// 0x359db781
// declared property setter: - (void)setFooterHeight:(float)height;	// 0x359db1e5
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x359db13d
// declared property setter: - (void)setPaperRect:(CGRect)rect;	// 0x359db765
// declared property setter: - (void)setPrintFormatters:(id)formatters;	// 0x359dae11
// declared property setter: - (void)setPrintableRect:(CGRect)rect;	// 0x359db7a5
@end

