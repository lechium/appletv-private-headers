/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"
#import "BRMetadataContainer.h"

@class NSMutableArray, BRTextControl, BRHorizontalDividerControl, BRMetadataTitleControl;

__attribute__((visibility("hidden")))
@interface BRDetailedMetadataControl : BRControl <BRMetadataContainer> {
	int _displayOption;	// 84 = 0x54
	BRMetadataTitleControl *_titleControl;	// 88 = 0x58
	BRHorizontalDividerControl *_topDivider;	// 92 = 0x5c
	BRHorizontalDividerControl *_middleDivider;	// 96 = 0x60
	BRTextControl *_summaryControl;	// 100 = 0x64
	NSMutableArray *_detailControls;	// 104 = 0x68
	int _currentDetailIndex;	// 108 = 0x6c
}
@property(assign, nonatomic) int currentDetailIndex;	// G=0x2c4991; S=0x2c49a1; @synthesize=_currentDetailIndex
@property(retain, nonatomic) NSMutableArray *detailControls;	// G=0x2c4971; S=0x2c4981; @synthesize=_detailControls
@property(readonly, assign, nonatomic) BRMetadataTitleControl *titleControl;	// G=0x2c4961; @synthesize=_titleControl
- (id)init;	// 0x2c3611
- (id)_currentDetailControl;	// 0x2c48f9
- (id)_detailControlAtIndex:(int)index;	// 0x2c4919
- (id)_detailControlsWithDetails:(id)details;	// 0x2c3ce9
- (id)_labelControlWithLabel:(id)label;	// 0x2c3c35
- (id)accessibilityLabel;	// 0x2c488d
- (void)addDetailPage:(id)page;	// 0x2c4175
- (void)addDetailStrings:(id)strings withLabel:(id)label;	// 0x2c3e89
- (void)addSplitDetailsWithTopDetailStrings:(id)topDetailStrings topLabel:(id)label bottomDetailStrings:(id)strings bottomLabel:(id)label4;	// 0x2c3ef9
// declared property getter: - (int)currentDetailIndex;	// 0x2c4991
- (void)dealloc;	// 0x2c37a5
// declared property getter: - (id)detailControls;	// 0x2c4971
- (void)layoutSubcontrols;	// 0x2c41dd
- (float)renderedHeightForWidth:(float)width;	// 0x2c4675
// declared property setter: - (void)setCurrentDetailIndex:(int)index;	// 0x2c49a1
// declared property setter: - (void)setDetailControls:(id)controls;	// 0x2c4981
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x2c412d
- (void)setRating:(id)rating;	// 0x2c3885
- (void)setSummary:(id)summary;	// 0x2c38a5
- (void)setTitle:(id)title;	// 0x2c3845
- (void)setTitleSubtext:(id)subtext;	// 0x2c3865
- (void)setTopRightImage:(id)image;	// 0x2c3a6d
// declared property getter: - (id)titleControl;	// 0x2c4961
- (void)toggleSummaryMetadataView;	// 0x2c3a8d
@end

