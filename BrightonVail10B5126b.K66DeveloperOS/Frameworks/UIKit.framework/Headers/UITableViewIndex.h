/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UIFont, NSArray, UIColor, NSString;

__attribute__((visibility("hidden")))
@interface UITableViewIndex : UIControl {
	NSArray *_titles;	// 108 = 0x6c
	UIFont *_font;	// 112 = 0x70
	int _selectedSection;	// 116 = 0x74
	BOOL _pastTop;	// 120 = 0x78
	BOOL _pastBottom;	// 121 = 0x79
	CGSize _cachedSize;	// 124 = 0x7c
	CGSize _cachedSizeToFit;	// 132 = 0x84
	UIColor *_indexColor;	// 140 = 0x8c
	UIColor *_indexBackgroundColor;	// 144 = 0x90
}
@property(retain, nonatomic) UIFont *font;	// G=0x32b842bd; S=0x32d6a069; 
@property(retain, nonatomic) UIColor *indexBackgroundColor;	// G=0x32d6a195; S=0x32b83f51; 
@property(retain, nonatomic) UIColor *indexColor;	// G=0x32d6a15d; S=0x32b83ef9; 
@property(readonly, assign, nonatomic) BOOL pastBottom;	// G=0x32d6a1cd; @synthesize=_pastBottom
@property(readonly, assign, nonatomic) BOOL pastTop;	// G=0x32c59401; @synthesize=_pastTop
@property(readonly, assign, nonatomic) int selectedSection;	// G=0x32c225e5; @synthesize=_selectedSection
@property(readonly, assign, nonatomic) NSString *selectedSectionTitle;	// G=0x32c225f5; 
@property(retain, nonatomic) NSArray *titles;	// G=0x32d6a059; S=0x32b83fe5; 
- (id)initWithFrame:(CGRect)frame;	// 0x32b83da5
- (id)_createTouchesWithMouseEvent:(GSEventRef)mouseEvent phase:(int)phase;	// 0x32d6a1dd
- (id)_displayTitles;	// 0x32b8aaa9
- (void)_selectSectionForTouch:(id)touch withEvent:(id)event;	// 0x32c22231
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32c22201
- (void)cancelTrackingWithEvent:(id)event;	// 0x32d6a0e9
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32c593e9
- (void)dealloc;	// 0x32d69fcd
- (void)drawRect:(CGRect)rect;	// 0x32b8a40d
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32c235c1
// declared property getter: - (id)font;	// 0x32b842bd
// declared property getter: - (id)indexBackgroundColor;	// 0x32d6a195
// declared property getter: - (id)indexColor;	// 0x32d6a15d
- (unsigned)maximumNumberOfTitlesWithoutTruncationForHeight:(float)height;	// 0x32d6a0c1
- (void)mouseDown:(GSEventRef)down;	// 0x32d6a315
- (void)mouseDragged:(GSEventRef)dragged;	// 0x32d6a39d
- (void)mouseUp:(GSEventRef)up;	// 0x32d6a425
// declared property getter: - (BOOL)pastBottom;	// 0x32d6a1cd
// declared property getter: - (BOOL)pastTop;	// 0x32c59401
// declared property getter: - (int)selectedSection;	// 0x32c225e5
// declared property getter: - (id)selectedSectionTitle;	// 0x32c225f5
// declared property setter: - (void)setFont:(id)font;	// 0x32d6a069
// declared property setter: - (void)setIndexBackgroundColor:(id)color;	// 0x32b83f51
// declared property setter: - (void)setIndexColor:(id)color;	// 0x32b83ef9
// declared property setter: - (void)setTitles:(id)titles;	// 0x32b83fe5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32b84071
// declared property getter: - (id)titles;	// 0x32d6a059
@end
