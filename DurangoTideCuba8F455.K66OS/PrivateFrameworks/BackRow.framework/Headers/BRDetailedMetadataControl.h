/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRMetadataDetailControl, BRDividerControl, BRMetadataTitleControl, BRTextControl;

@interface BRDetailedMetadataControl : BRControl {
@private
	int _displayOption;	// 44 = 0x2c
	BRMetadataDetailControl *_detailControl;	// 48 = 0x30
	BRMetadataTitleControl *_titleControl;	// 52 = 0x34
	BRDividerControl *_topDivider;	// 56 = 0x38
	BRDividerControl *_middleDivider;	// 60 = 0x3c
	BRTextControl *_summaryControl;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) BRMetadataTitleControl *titleControl;	// G=0x32f69a21; @synthesize=_titleControl
- (id)init;	// 0x32f28d99
- (id)accessibilityLabel;	// 0x32f69fd1
- (void)addDetailControls:(id)controls withLabel:(id)label;	// 0x32f29a49
- (void)addDetailStrings:(id)strings withLabel:(id)label;	// 0x32f29b71
- (void)dealloc;	// 0x32f2cab9
- (void)layoutSubcontrols;	// 0x32f69c01
- (float)renderedHeightForWidth:(float)width;	// 0x32f69a51
- (void)setRating:(id)rating;	// 0x32f2927d
- (void)setSummary:(id)summary;	// 0x32f29621
- (void)setTitle:(id)title;	// 0x32f291c1
- (void)setTitleSubtext:(id)subtext;	// 0x32f29811
- (void)setTopRightImage:(id)image;	// 0x32f69a31
// declared property getter: - (id)titleControl;	// 0x32f69a21
- (void)toggleSummaryMetadataView;	// 0x32f364d1
@end
