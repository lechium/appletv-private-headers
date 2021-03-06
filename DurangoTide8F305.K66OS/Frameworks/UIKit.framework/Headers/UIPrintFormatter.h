/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class UIPrintPageRenderer;

@interface UIPrintFormatter : NSObject <NSCopying> {
@private
	UIPrintPageRenderer *_printPageRenderer;	// 4 = 0x4
	float _maximumContentHeight;	// 8 = 0x8
	float _maximumContentWidth;	// 12 = 0xc
	UIEdgeInsets _contentInsets;	// 16 = 0x10
	int _startPage;	// 32 = 0x20
	int _pageCount;	// 36 = 0x24
	BOOL _needsRecalc;	// 40 = 0x28
}
@property(assign, nonatomic) UIEdgeInsets contentInsets;	// G=0x32247989; S=0x32247a55; @synthesize=_contentInsets
@property(assign, nonatomic) float maximumContentHeight;	// G=0x322479b5; S=0x32247add; @synthesize=_maximumContentHeight
@property(assign, nonatomic) float maximumContentWidth;	// G=0x322479a5; S=0x32247b11; @synthesize=_maximumContentWidth
@property(readonly, assign, nonatomic) int pageCount;	// G=0x322479d5; @synthesize=_pageCount
@property(assign, nonatomic) UIPrintPageRenderer *printPageRenderer;	// G=0x322479c5; S=0x32247a2d; @synthesize=_printPageRenderer
@property(assign, nonatomic) int startPage;	// G=0x32247969; S=0x32247979; @synthesize=_startPage
- (id)init;	// 0x32247b89
- (CGRect)_pageContentRect:(BOOL)rect;	// 0x32247c29
- (void)_recalcIfNecessary;	// 0x322479f9
- (int)_recalcPageCount;	// 0x32247959
- (void)_setNeedsRecalc;	// 0x32247949
// declared property getter: - (UIEdgeInsets)contentInsets;	// 0x32247989
- (id)copyWithZone:(NSZone *)zone;	// 0x32247bf9
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x3224795d
// declared property getter: - (float)maximumContentHeight;	// 0x322479b5
// declared property getter: - (float)maximumContentWidth;	// 0x322479a5
// declared property getter: - (int)pageCount;	// 0x322479d5
// declared property getter: - (id)printPageRenderer;	// 0x322479c5
- (CGRect)rectForPageAtIndex:(int)index;	// 0x32247dd1
- (void)removeFromPrintPageRenderer;	// 0x32247b45
// declared property setter: - (void)setContentInsets:(UIEdgeInsets)insets;	// 0x32247a55
// declared property setter: - (void)setMaximumContentHeight:(float)height;	// 0x32247add
// declared property setter: - (void)setMaximumContentWidth:(float)width;	// 0x32247b11
// declared property setter: - (void)setPrintPageRenderer:(id)renderer;	// 0x32247a2d
// declared property setter: - (void)setStartPage:(int)page;	// 0x32247979
// declared property getter: - (int)startPage;	// 0x32247969
@end

