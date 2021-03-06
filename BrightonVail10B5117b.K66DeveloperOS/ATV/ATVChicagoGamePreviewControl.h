/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"
#import "BRCyclerDataSource.h"

@class BRCyclerControl, ATVFeedUniformTextTableViewController, ATVFeedTextTableDataSet, BRImage, BRHorizontalDividerControl, BRMerchant, BRTableView, NSMutableArray, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface ATVChicagoGamePreviewControl : BRControl <BRCyclerDataSource> {
	BRHorizontalDividerControl *_topDivider;	// 84 = 0x54
	BRHorizontalDividerControl *_bottomDivider;	// 88 = 0x58
	NSMutableArray *_bannerControls;	// 92 = 0x5c
	BRTableView *_summaryTable;	// 96 = 0x60
	ATVFeedUniformTextTableViewController *_tableViewController;	// 100 = 0x64
	BRCyclerControl *_cycler;	// 104 = 0x68
	CGRect _scoreboardBackgroundImageFrame;	// 108 = 0x6c
	BRMerchant *_merchant;	// 124 = 0x7c
	NSArray *_bannerItems;	// 128 = 0x80
	NSString *_text;	// 132 = 0x84
	NSString *_rightJustifiedText;	// 136 = 0x88
	NSString *_topTableLabel;	// 140 = 0x8c
	NSString *_bottomTableLabel;	// 144 = 0x90
	BRImage *_scoreboardBackgroundImage;	// 148 = 0x94
}
@property(copy, nonatomic) NSArray *bannerItems;	// G=0xd5b31; S=0xd521d; @synthesize=_bannerItems
@property(copy, nonatomic) NSString *bottomTableLabel;	// G=0xd5b81; S=0xd5165; @synthesize=_bottomTableLabel
@property(retain) ATVFeedTextTableDataSet *dataSet;	// G=0xd51b5; S=0xd51d5; 
@property(retain) BRMerchant *merchant;	// G=0xd5b0d; S=0xd5b21; @synthesize=_merchant
@property(copy, nonatomic) NSString *rightJustifiedText;	// G=0xd5b59; S=0xd50c5; @synthesize=_rightJustifiedText
@property(retain) BRImage *scoreboardBackgroundImage;	// G=0xd5b95; S=0xd5ba9; @synthesize=_scoreboardBackgroundImage
@property(copy, nonatomic) NSString *text;	// G=0xd5b45; S=0xd5075; @synthesize=_text
@property(copy, nonatomic) NSString *topTableLabel;	// G=0xd5b6d; S=0xd5115; @synthesize=_topTableLabel
- (id)init;	// 0xd4bd5
- (id)accessibilityLabel;	// 0xd5a79
// declared property getter: - (id)bannerItems;	// 0xd5b31
// declared property getter: - (id)bottomTableLabel;	// 0xd5b81
- (void)controlWasActivated;	// 0xd5029
- (id)cycler:(id)cycler itemAtIndex:(int)index;	// 0xd5485
// declared property getter: - (id)dataSet;	// 0xd51b5
- (void)dealloc;	// 0xd4ead
- (void)drawRect:(CGRect)rect;	// 0xd54a5
- (void)layoutSubcontrols;	// 0xd58b1
// declared property getter: - (id)merchant;	// 0xd5b0d
- (long)numberOfItemsInCycler:(id)cycler;	// 0xd5465
// declared property getter: - (id)rightJustifiedText;	// 0xd5b59
// declared property getter: - (id)scoreboardBackgroundImage;	// 0xd5b95
// declared property setter: - (void)setBannerItems:(id)items;	// 0xd521d
// declared property setter: - (void)setBottomTableLabel:(id)label;	// 0xd5165
// declared property setter: - (void)setDataSet:(id)set;	// 0xd51d5
// declared property setter: - (void)setMerchant:(id)merchant;	// 0xd5b21
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0xd50c5
// declared property setter: - (void)setScoreboardBackgroundImage:(id)image;	// 0xd5ba9
// declared property setter: - (void)setText:(id)text;	// 0xd5075
// declared property setter: - (void)setTopTableLabel:(id)label;	// 0xd5115
// declared property getter: - (id)text;	// 0xd5b45
// declared property getter: - (id)topTableLabel;	// 0xd5b6d
@end

