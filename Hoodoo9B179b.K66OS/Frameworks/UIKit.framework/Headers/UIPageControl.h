/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class NSMutableArray;

@interface UIPageControl : UIControl {
@private
	NSMutableArray *_indicators;	// 72 = 0x48
	int _currentPage;	// 76 = 0x4c
	int _displayedPage;	// 80 = 0x50
	struct {
		unsigned hideForSinglePage : 1;
		unsigned defersCurrentPageDisplay : 1;
	} _pageControlFlags;	// 84 = 0x54
}
@property(assign, nonatomic) int currentPage;	// G=0x3311a229; S=0x3311a1f9; @dynamic
@property(assign, nonatomic) BOOL defersCurrentPageDisplay;	// G=0x3311a2e1; S=0x3311a2b5; @dynamic
@property(assign, nonatomic) BOOL hidesForSinglePage;	// G=0x3311a2a1; S=0x3311a239; @dynamic
@property(assign, nonatomic) int numberOfPages;	// G=0x3311a1d9; S=0x33119ef5; @dynamic
- (id)initWithCoder:(id)coder;	// 0x33119b51
- (id)initWithFrame:(CGRect)frame;	// 0x33119af1
- (void)_commonPageControlInit;	// 0x33119ac1
- (int)_displayedPage;	// 0x3311ac8d
- (id)_pageIndicatorCurrentImageForPage:(int)page;	// 0x33119ee5
- (id)_pageIndicatorImageForPage:(int)page;	// 0x33119ed5
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33119cd5
- (void)_setCurrentPage:(int)page;	// 0x3311ac9d
- (void)_setDisplayedPage:(int)page;	// 0x3311ab9d
- (void)_updateCurrentPageDisplay;	// 0x3311ace1
// declared property getter: - (int)currentPage;	// 0x3311a229
- (void)dealloc;	// 0x33119e89
// declared property getter: - (BOOL)defersCurrentPageDisplay;	// 0x3311a2e1
- (void)encodeWithCoder:(id)coder;	// 0x33119da1
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x3311a6a9
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3311a865
// declared property getter: - (BOOL)hidesForSinglePage;	// 0x3311a2a1
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x33149621
- (void)layoutSubviews;	// 0x3311a449
// declared property getter: - (int)numberOfPages;	// 0x3311a1d9
// declared property setter: - (void)setCurrentPage:(int)page;	// 0x3311a1f9
// declared property setter: - (void)setDefersCurrentPageDisplay:(BOOL)display;	// 0x3311a2b5
// declared property setter: - (void)setHidesForSinglePage:(BOOL)singlePage;	// 0x3311a239
// declared property setter: - (void)setNumberOfPages:(int)pages;	// 0x33119ef5
- (CGSize)sizeForNumberOfPages:(int)pages;	// 0x3311aa8d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3311a2f5
- (void)updateCurrentPageDisplay;	// 0x3311aa61
@end

