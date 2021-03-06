/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIView.h> // Unknown library

@class UIImageView, UITableView;

@interface UIMovieChapterListView : UIView {
	UIImageView *_backgroundImageView;	// 44 = 0x2c
	unsigned _pinnedRow;	// 48 = 0x30
	UITableView *_table;	// 52 = 0x34
	float _topPadding;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) UITableView *table;	// G=0x335f039d; @synthesize=_table
@property(assign, nonatomic) float topPadding;	// G=0x335f038d; S=0x335f03fd; @synthesize=_topPadding
- (id)init;	// 0x335f0dc9
- (void)layoutSubviews;	// 0x335f102d
- (void)pinVisibleRow:(unsigned)row;	// 0x335f0431
// declared property setter: - (void)setTopPadding:(float)padding;	// 0x335f03fd
// declared property getter: - (id)table;	// 0x335f039d
// declared property getter: - (float)topPadding;	// 0x335f038d
@end

