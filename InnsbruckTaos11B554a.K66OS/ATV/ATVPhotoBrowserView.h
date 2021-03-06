/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRGridView, BRPhotoBrowserBannerButton, BRPhotoBrowserHeaderControl, BRPhotoBrowserCorkBoardControl, BRCursorControl, BRScrollControl;

__attribute__((visibility("hidden")))
@interface ATVPhotoBrowserView : BRControl {
	BRPhotoBrowserHeaderControl *headerView;	// 84 = 0x54
	BRPhotoBrowserBannerButton *slideshowButton;	// 88 = 0x58
	BRGridView *gridView;	// 92 = 0x5c
	BRPhotoBrowserCorkBoardControl *_corkBoardControl;	// 96 = 0x60
	BRScrollControl *_scrollControl;	// 100 = 0x64
	BRCursorControl *_cursorControl;	// 104 = 0x68
	int _style;	// 108 = 0x6c
}
@property(retain, nonatomic) BRPhotoBrowserCorkBoardControl *_corkBoardControl;	// G=0x3d5be5; S=0x3d5bf5; @synthesize
@property(retain, nonatomic) BRCursorControl *_cursorControl;	// G=0x3d5c25; S=0x3d5c35; @synthesize
@property(retain, nonatomic) BRScrollControl *_scrollControl;	// G=0x3d5c05; S=0x3d5c15; @synthesize
@property(readonly, assign, nonatomic) BRGridView *gridView;	// G=0x3d5bd5; @synthesize
@property(readonly, assign, nonatomic) BRPhotoBrowserHeaderControl *headerView;	// G=0x3d5bb5; @synthesize
@property(readonly, assign, nonatomic) BRPhotoBrowserBannerButton *slideshowButton;	// G=0x3d5bc5; @synthesize
@property(assign, nonatomic) int style;	// G=0x3d5c45; S=0x3d5c55; @synthesize=_style
+ (id)photoBrowserViewWithStyle:(int)style;	// 0x3d5695
- (id)initWithPhotoBrowserViewStyle:(int)photoBrowserViewStyle;	// 0x3d56dd
// declared property getter: - (id)_corkBoardControl;	// 0x3d5be5
// declared property getter: - (id)_cursorControl;	// 0x3d5c25
- (id)_iconWithName:(id)name;	// 0x3d6271
// declared property getter: - (id)_scrollControl;	// 0x3d5c05
- (void)_setupControls;	// 0x3d5c65
- (void)dealloc;	// 0x3d57c9
- (void)focusControlAtIndex:(long)index;	// 0x3d5ad5
// declared property getter: - (id)gridView;	// 0x3d5bd5
// declared property getter: - (id)headerView;	// 0x3d5bb5
- (void)layoutSubcontrols;	// 0x3d587d
// declared property setter: - (void)setStyle:(int)style;	// 0x3d5c55
// declared property setter: - (void)set_corkBoardControl:(id)control;	// 0x3d5bf5
// declared property setter: - (void)set_cursorControl:(id)control;	// 0x3d5c35
// declared property setter: - (void)set_scrollControl:(id)control;	// 0x3d5c15
// declared property getter: - (id)slideshowButton;	// 0x3d5bc5
// declared property getter: - (int)style;	// 0x3d5c45
@end

