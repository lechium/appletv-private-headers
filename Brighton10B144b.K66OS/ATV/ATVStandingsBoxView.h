/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRReflectionControl, NSString, BRImage, BRTableView, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVStandingsBoxView : BRControl {
	BRImage *_backgroundImage;	// 84 = 0x54
	BRTextControl *_titleControl;	// 88 = 0x58
	BRImage *_overlayImage;	// 92 = 0x5c
	BRReflectionControl *_reflectionControl;	// 96 = 0x60
	BRTableView *_tableView;	// 100 = 0x64
	float _headerHeight;	// 104 = 0x68
}
@property(retain, nonatomic) BRImage *backgroundImage;	// G=0x11ea0d; S=0x11ea1d; 
@property(assign, nonatomic) float headerHeight;	// G=0x11ee55; S=0x11ee65; @synthesize=_headerHeight
@property(readonly, assign, nonatomic) BRTableView *tableView;	// G=0x11ee75; @synthesize=_tableView
@property(copy, nonatomic) NSString *title;	// G=0x11e9b9; S=0x11e96d; 
- (id)init;	// 0x11e779
- (id)accessibilityLabel;	// 0x11ee0d
// declared property getter: - (id)backgroundImage;	// 0x11ea0d
- (void)dealloc;	// 0x11e8cd
- (void)drawRect:(CGRect)rect;	// 0x11eab9
// declared property getter: - (float)headerHeight;	// 0x11ee55
- (BOOL)isAccessibilityElement;	// 0x11ee09
- (void)layoutSubcontrols;	// 0x11ebb1
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x11ea1d
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x11ee65
// declared property setter: - (void)setTitle:(id)title;	// 0x11e96d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x11e9f1
// declared property getter: - (id)tableView;	// 0x11ee75
// declared property getter: - (id)title;	// 0x11e9b9
@end
