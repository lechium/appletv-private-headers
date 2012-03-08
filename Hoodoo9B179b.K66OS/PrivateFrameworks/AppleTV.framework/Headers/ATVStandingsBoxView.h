/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRReflectionControl, NSString, BRTableView, BRTextControl, BRImage;

__attribute__((visibility("hidden")))
@interface ATVStandingsBoxView : BRControl {
@private
	BRImage *_backgroundImage;	// 48 = 0x30
	BRTextControl *_titleControl;	// 52 = 0x34
	BRImage *_overlayImage;	// 56 = 0x38
	BRReflectionControl *_reflectionControl;	// 60 = 0x3c
	BRTableView *_tableView;	// 64 = 0x40
	float _headerHeight;	// 68 = 0x44
}
@property(retain, nonatomic) BRImage *backgroundImage;	// G=0x301f1611; S=0x301f1621; 
@property(assign, nonatomic) float headerHeight;	// G=0x301f1a55; S=0x301f1a65; @synthesize=_headerHeight
@property(readonly, assign, nonatomic) BRTableView *tableView;	// G=0x301f1a75; @synthesize=_tableView
@property(copy, nonatomic) NSString *title;	// G=0x301f15bd; S=0x301f1571; 
- (id)init;	// 0x301f137d
- (id)accessibilityLabel;	// 0x301f1a0d
// declared property getter: - (id)backgroundImage;	// 0x301f1611
- (void)dealloc;	// 0x301f14d5
- (void)drawInContext:(CGContextRef)context;	// 0x301f16cd
// declared property getter: - (float)headerHeight;	// 0x301f1a55
- (BOOL)isAccessibilityElement;	// 0x301f1a09
- (void)layoutSubcontrols;	// 0x301f17c1
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x301f1621
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x301f1a65
// declared property setter: - (void)setTitle:(id)title;	// 0x301f1571
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x301f15f5
// declared property getter: - (id)tableView;	// 0x301f1a75
// declared property getter: - (id)title;	// 0x301f15bd
@end

