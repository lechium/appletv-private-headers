/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRReflectionControl, BRTableView, BRTextControl, NSString, BRImage;

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
@property(retain, nonatomic) BRImage *backgroundImage;	// G=0x32fca529; S=0x32fca539; 
@property(assign, nonatomic) float headerHeight;	// G=0x32fca925; S=0x32fca935; @synthesize=_headerHeight
@property(readonly, assign, nonatomic) BRTableView *tableView;	// G=0x32fca945; @synthesize=_tableView
@property(copy, nonatomic) NSString *title;	// G=0x32fca4d5; S=0x32fca489; 
- (id)init;	// 0x32fca295
- (id)accessibilityLabel;	// 0x32fca8dd
// declared property getter: - (id)backgroundImage;	// 0x32fca529
- (void)dealloc;	// 0x32fca3ed
- (void)drawInContext:(CGContextRef)context;	// 0x32fca5e5
// declared property getter: - (float)headerHeight;	// 0x32fca925
- (BOOL)isAccessibilityElement;	// 0x32fca8d9
- (void)layoutSubcontrols;	// 0x32fca6d9
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x32fca539
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x32fca935
// declared property setter: - (void)setTitle:(id)title;	// 0x32fca489
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32fca50d
// declared property getter: - (id)tableView;	// 0x32fca945
// declared property getter: - (id)title;	// 0x32fca4d5
@end
