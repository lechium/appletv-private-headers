/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class NSArray, UIColor;

@interface UIMultiColumnsNavigationTransitionView : UIView <NSCoding> {
@private
	id _delegate;	// 48 = 0x30
	int _transition;	// 52 = 0x34
	UIView *_firstResponderViewToRestore;	// 56 = 0x38
	unsigned _isTransitioning : 1;	// 60 = 0x3c
	float _columnWidth;	// 64 = 0x40
	int _columnCount;	// 68 = 0x44
	NSArray *_fromViews;	// 72 = 0x48
	NSArray *_toViews;	// 76 = 0x4c
	NSArray *_viewsToRemove;	// 80 = 0x50
	NSArray *_viewsToAdd;	// 84 = 0x54
	NSArray *_displayedViews;	// 88 = 0x58
	CFDictionaryRef _dividerViews;	// 92 = 0x5c
	CFDictionaryRef _containerViews;	// 96 = 0x60
	UIColor *_dividersColor;	// 100 = 0x64
	float _dividersWidth;	// 104 = 0x68
}
@property(assign, nonatomic) int columnCount;	// G=0x33c5a9bd; S=0x33c5a9cd; @synthesize=_columnCount
@property(assign, nonatomic) float columnWidth;	// G=0x33c5a99d; S=0x33c5a9ad; @synthesize=_columnWidth
@property(assign, nonatomic) id delegate;	// G=0x33c5a97d; S=0x33c5a98d; @synthesize=_delegate
+ (double)defaultDurationForTransition:(int)transition;	// 0x33c59631
- (id)initWithCoder:(id)coder;	// 0x33c5939d
- (id)initWithFrame:(CGRect)frame;	// 0x33c592c1
- (id)_containerViewForView:(id)view;	// 0x33c5a7e5
- (id)_dividerViewForView:(id)view;	// 0x33c5a631
- (BOOL)_isTransitioningFromView:(id)view;	// 0x33c5a3ad
- (void)_navigationTransitionDidStop;	// 0x33c5a42d
- (void)_removeContainerViewForView:(id)view;	// 0x33c5a93d
- (void)_removeDividerViewForView:(id)view;	// 0x33c5a7a5
// declared property getter: - (int)columnCount;	// 0x33c5a9bd
// declared property getter: - (float)columnWidth;	// 0x33c5a99d
- (void)dealloc;	// 0x33c595a5
// declared property getter: - (id)delegate;	// 0x33c5a97d
- (void)encodeWithCoder:(id)coder;	// 0x33c594c1
- (BOOL)isTransitioning;	// 0x33c5a399
// declared property setter: - (void)setColumnCount:(int)count;	// 0x33c5a9cd
// declared property setter: - (void)setColumnWidth:(float)width;	// 0x33c5a9ad
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33c5a98d
- (BOOL)transition:(int)transition fromViews:(id)views toViews:(id)views3;	// 0x33c59681
- (BOOL)transition:(int)transition toViews:(id)views;	// 0x33c59661
@end

