/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIControl.h> // Unknown library

@class UIView, NSArray;

@interface MPPlaybackTitlesView : UIControl {
	UIView *_contentView;	// 108 = 0x6c
	NSArray *_labels;	// 112 = 0x70
	NSArray *_titles;	// 116 = 0x74
	BOOL _showingLoadingUI;	// 120 = 0x78
	unsigned _marqueeScrollableIndex;	// 124 = 0x7c
	BOOL _marqueeScrollingActive;	// 128 = 0x80
}
@property(readonly, assign, nonatomic) UIView *contentView;	// G=0x35000bdd; 
@property(assign, nonatomic) unsigned marqueeScrollableIndex;	// G=0x35001b4d; S=0x35000c25; @synthesize=_marqueeScrollableIndex
@property(assign, nonatomic) BOOL marqueeScrollingActive;	// G=0x35001b5d; S=0x35000bed; @synthesize=_marqueeScrollingActive
@property(assign, nonatomic) BOOL showingLoadingUI;	// G=0x35001b3d; S=0x35000d51; @synthesize=_showingLoadingUI
@property(retain, nonatomic) NSArray *titles;	// G=0x35001b2d; S=0x35000ce9; @synthesize=_titles
- (id)init;	// 0x35000601
- (id)initWithFrame:(CGRect)frame;	// 0x35000721
- (id)_addLabel:(unsigned)label;	// 0x35000f1d
- (id)_addLoadingLabel;	// 0x35000d9d
- (void)_applicationDidBecomeActiveNotification:(id)_application;	// 0x35000d7d
- (void)_applicationDidEnterBackgroundNotification:(id)_application;	// 0x35000d8d
- (void)_layoutLabels;	// 0x350014b9
- (void)_layoutLoadingUI;	// 0x35001135
- (void)_tearDownLabels;	// 0x35001a69
- (void)_updateLabelMarqueeScrolling;	// 0x3500193d
// declared property getter: - (id)contentView;	// 0x35000bdd
- (void)dealloc;	// 0x350008e9
- (void)layoutSubviews;	// 0x350009cd
// declared property getter: - (unsigned)marqueeScrollableIndex;	// 0x35001b4d
// declared property getter: - (BOOL)marqueeScrollingActive;	// 0x35001b5d
// declared property setter: - (void)setMarqueeScrollableIndex:(unsigned)index;	// 0x35000c25
// declared property setter: - (void)setMarqueeScrollingActive:(BOOL)active;	// 0x35000bed
// declared property setter: - (void)setShowingLoadingUI:(BOOL)ui;	// 0x35000d51
// declared property setter: - (void)setTitles:(id)titles;	// 0x35000ce9
// declared property getter: - (BOOL)showingLoadingUI;	// 0x35001b3d
// declared property getter: - (id)titles;	// 0x35001b2d
@end

