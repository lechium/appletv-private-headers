/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRCoverArtPreviewControl, BRCursorControl, BRMediaShelfView, BRDividerControl, NSString, BRTextControl, BRTableView, BRMetadataTitleControl;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVItemDetailView : BRControl {
@private
	BRCoverArtPreviewControl *_mainImageControl;	// 48 = 0x30
	BRDividerControl *_summaryTopDivider;	// 52 = 0x34
	BRDividerControl *_summaryBottomDivider;	// 56 = 0x38
	BRTextControl *_mainImageTextControl;	// 60 = 0x3c
	BRTextControl *_summaryControl;	// 64 = 0x40
	BRCursorControl *_cursor;	// 68 = 0x44
	int _mainImageStyle;	// 72 = 0x48
	int _displayMode;	// 76 = 0x4c
	BRTableView *_table;	// 80 = 0x50
	BRMediaShelfView *_centerShelf;	// 84 = 0x54
	BRControl *_divider;	// 88 = 0x58
	BRMediaShelfView *_bottomShelf;	// 92 = 0x5c
	BRMetadataTitleControl *_titleControl;	// 96 = 0x60
}
@property(retain, nonatomic) BRMediaShelfView *bottomShelf;	// G=0x32acf259; S=0x32ace6dd; @synthesize=_bottomShelf
@property(retain, nonatomic) BRMediaShelfView *centerShelf;	// G=0x32acf239; S=0x32ace645; @synthesize=_centerShelf
@property(assign, nonatomic) int displayMode;	// G=0x32acf209; S=0x32acf219; @synthesize=_displayMode
@property(retain, nonatomic) BRControl *divider;	// G=0x32acf249; S=0x32ace765; @synthesize=_divider
@property(retain, nonatomic) id<BRImageProxy> mainImageProxy;	// G=0x32ace60d; S=0x32ace5ed; @dynamic
@property(assign, nonatomic) int mainImageStyle;	// G=0x32acf1e9; S=0x32acf1f9; @synthesize=_mainImageStyle
@property(retain, nonatomic) NSString *mainImageText;	// G=0x32ace849; S=0x32ace7ed; @dynamic
@property(readonly, assign, nonatomic) float metadataWidth;	// G=0x32ace925; @dynamic
@property(retain, nonatomic) NSString *summary;	// G=0x32ace8ed; S=0x32ace881; @dynamic
@property(readonly, assign, nonatomic) BRTableView *table;	// G=0x32acf229; @synthesize=_table
@property(readonly, assign, nonatomic) BRMetadataTitleControl *titleControl;	// G=0x32acf269; @synthesize=_titleControl
- (id)init;	// 0x32ace255
- (id)accessibilityLabel;	// 0x32acf181
// declared property getter: - (id)bottomShelf;	// 0x32acf259
- (BOOL)brEventAction:(id)action;	// 0x32ace961
// declared property getter: - (id)centerShelf;	// 0x32acf239
- (void)dealloc;	// 0x32ace4d9
// declared property getter: - (int)displayMode;	// 0x32acf209
// declared property getter: - (id)divider;	// 0x32acf249
- (void)layoutSubcontrols;	// 0x32acea8d
// declared property getter: - (id)mainImageProxy;	// 0x32ace60d
// declared property getter: - (int)mainImageStyle;	// 0x32acf1e9
// declared property getter: - (id)mainImageText;	// 0x32ace849
// declared property getter: - (float)metadataWidth;	// 0x32ace925
// declared property setter: - (void)setBottomShelf:(id)shelf;	// 0x32ace6dd
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x32ace645
// declared property setter: - (void)setDisplayMode:(int)mode;	// 0x32acf219
// declared property setter: - (void)setDivider:(id)divider;	// 0x32ace765
// declared property setter: - (void)setMainImageProxy:(id)proxy;	// 0x32ace5ed
// declared property setter: - (void)setMainImageStyle:(int)style;	// 0x32acf1f9
// declared property setter: - (void)setMainImageText:(id)text;	// 0x32ace7ed
// declared property setter: - (void)setSummary:(id)summary;	// 0x32ace881
// declared property getter: - (id)summary;	// 0x32ace8ed
// declared property getter: - (id)table;	// 0x32acf229
// declared property getter: - (id)titleControl;	// 0x32acf269
@end
