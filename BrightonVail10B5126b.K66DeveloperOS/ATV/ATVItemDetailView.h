/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRMetadataTitleControl, BRMediaShelfView, NSString, BRTableView, BRTextControl, BRCoverArtPreviewControl, BRCursorControl, BRHorizontalDividerControl;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVItemDetailView : BRControl {
	BRCoverArtPreviewControl *_mainImageControl;	// 84 = 0x54
	BRHorizontalDividerControl *_summaryTopDivider;	// 88 = 0x58
	BRHorizontalDividerControl *_summaryBottomDivider;	// 92 = 0x5c
	BRTextControl *_mainImageTextControl;	// 96 = 0x60
	BRTextControl *_summaryControl;	// 100 = 0x64
	BRCursorControl *_cursor;	// 104 = 0x68
	int _mainImageStyle;	// 108 = 0x6c
	int _displayMode;	// 112 = 0x70
	BRTableView *_table;	// 116 = 0x74
	BRMediaShelfView *_centerShelf;	// 120 = 0x78
	BRControl *_divider;	// 124 = 0x7c
	BRMediaShelfView *_bottomShelf;	// 128 = 0x80
	BRMetadataTitleControl *_titleControl;	// 132 = 0x84
	BOOL _verticallyCentered;	// 136 = 0x88
}
@property(retain, nonatomic) BRMediaShelfView *bottomShelf;	// G=0x131bb9; S=0x130db5; @synthesize=_bottomShelf
@property(retain, nonatomic) BRMediaShelfView *centerShelf;	// G=0x131b99; S=0x130d25; @synthesize=_centerShelf
@property(assign, nonatomic) int displayMode;	// G=0x131b69; S=0x131b79; @synthesize=_displayMode
@property(retain, nonatomic) BRControl *divider;	// G=0x131ba9; S=0x130e35; @synthesize=_divider
@property(retain, nonatomic) id<BRImageProxy> mainImageProxy;	// G=0x130ced; S=0x130ccd; @dynamic
@property(assign, nonatomic) int mainImageStyle;	// G=0x131b49; S=0x131b59; @synthesize=_mainImageStyle
@property(retain, nonatomic) NSString *mainImageText;	// G=0x130f11; S=0x130eb5; @dynamic
@property(readonly, assign, nonatomic) float metadataWidth;	// G=0x131051; @dynamic
@property(retain, nonatomic) NSString *summary;	// G=0x131019; S=0x130f49; @dynamic
@property(readonly, assign, nonatomic) BRTableView *table;	// G=0x131b89; @synthesize=_table
@property(readonly, assign, nonatomic) BRMetadataTitleControl *titleControl;	// G=0x131bc9; @synthesize=_titleControl
@property(assign, nonatomic) BOOL verticallyCentered;	// G=0x131bd9; S=0x131be9; @synthesize=_verticallyCentered
- (id)init;	// 0x1309c1
- (void)_setCenterShelfCoverFlowMargin;	// 0x1319fd
- (id)accessibilityLabel;	// 0x131ae1
- (id)accessibilityScreenContent;	// 0x131b29
// declared property getter: - (id)bottomShelf;	// 0x131bb9
- (BOOL)brEventAction:(id)action;	// 0x131089
// declared property getter: - (id)centerShelf;	// 0x131b99
- (void)dealloc;	// 0x130bb5
// declared property getter: - (int)displayMode;	// 0x131b69
// declared property getter: - (id)divider;	// 0x131ba9
- (void)layoutSubcontrols;	// 0x1311b5
// declared property getter: - (id)mainImageProxy;	// 0x130ced
// declared property getter: - (int)mainImageStyle;	// 0x131b49
// declared property getter: - (id)mainImageText;	// 0x130f11
// declared property getter: - (float)metadataWidth;	// 0x131051
// declared property setter: - (void)setBottomShelf:(id)shelf;	// 0x130db5
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x130d25
// declared property setter: - (void)setDisplayMode:(int)mode;	// 0x131b79
// declared property setter: - (void)setDivider:(id)divider;	// 0x130e35
// declared property setter: - (void)setMainImageProxy:(id)proxy;	// 0x130ccd
// declared property setter: - (void)setMainImageStyle:(int)style;	// 0x131b59
// declared property setter: - (void)setMainImageText:(id)text;	// 0x130eb5
// declared property setter: - (void)setSummary:(id)summary;	// 0x130f49
// declared property setter: - (void)setVerticallyCentered:(BOOL)centered;	// 0x131be9
// declared property getter: - (id)summary;	// 0x131019
// declared property getter: - (id)table;	// 0x131b89
// declared property getter: - (id)titleControl;	// 0x131bc9
// declared property getter: - (BOOL)verticallyCentered;	// 0x131bd9
@end

