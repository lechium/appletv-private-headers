/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ATVCursorTracker, BRGridView, BRPhotoBrowserHeaderControl, ATVCarouselView;

__attribute__((visibility("hidden")))
@interface ATVPhotoBatchBrowserView : BRControl {
	BRPhotoBrowserHeaderControl *_header;	// 84 = 0x54
	ATVCursorTracker *_cursorTracker;	// 88 = 0x58
	id _onContainerLayout;	// 92 = 0x5c
	BRControl *_photoContainer;	// 96 = 0x60
}
@property(readonly, assign, nonatomic) ATVCarouselView *carousel;	// G=0x3d4271; 
@property(retain, nonatomic) ATVCursorTracker *cursorTracker;	// G=0x3d41a9; S=0x3d41b9; @synthesize=_cursorTracker
@property(readonly, assign, nonatomic) BRGridView *grid;	// G=0x3d455d; 
@property(retain, nonatomic) BRPhotoBrowserHeaderControl *header;	// G=0x3d4171; S=0x3d4181; @synthesize=_header
@property(copy, nonatomic) id onContainerLayout;	// G=0x3d41e1; S=0x3d41f5; @synthesize=_onContainerLayout
@property(retain, nonatomic) BRControl *photoContainer;	// G=0x3d4205; S=0x3d3e2d; @synthesize=_photoContainer
- (id)init;	// 0x3d3c99
- (void).cxx_destruct;	// 0x3d4215
- (id)accessibilityLabel;	// 0x3d4129
// declared property getter: - (id)carousel;	// 0x3d4271
- (void)configureCarouselAsPhotoContainer;	// 0x3d42f5
- (void)configureGridAsPhotoContainer;	// 0x3d4665
// declared property getter: - (id)cursorTracker;	// 0x3d41a9
- (void)focusGridControlAtIndex:(int)index;	// 0x3d47a1
// declared property getter: - (id)grid;	// 0x3d455d
// declared property getter: - (id)header;	// 0x3d4171
- (void)layoutSubcontrols;	// 0x3d3ee9
// declared property getter: - (id)onContainerLayout;	// 0x3d41e1
// declared property getter: - (id)photoContainer;	// 0x3d4205
// declared property setter: - (void)setCursorTracker:(id)tracker;	// 0x3d41b9
// declared property setter: - (void)setHeader:(id)header;	// 0x3d4181
// declared property setter: - (void)setOnContainerLayout:(id)layout;	// 0x3d41f5
// declared property setter: - (void)setPhotoContainer:(id)container;	// 0x3d3e2d
@end

