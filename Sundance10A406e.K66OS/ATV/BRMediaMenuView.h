/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuView.h"
#import "AppleTV-Structs.h"

@class NSString, BRTextControl, BRControl;

__attribute__((visibility("hidden")))
@interface BRMediaMenuView : BRMenuView {
	BRControl *_preview;	// 112 = 0x70
	NSString *_previewLabel;	// 116 = 0x74
	BRControl *_listHeader;	// 120 = 0x78
	BRTextControl *_descriptionControl;	// 124 = 0x7c
	XXStruct_qlg9jA _headerMaxWidth;	// 128 = 0x80
	BOOL _headerCanExpandListWidth;	// 132 = 0x84
	XXStruct_qlg9jA _previewTrailingGap;	// 136 = 0x88
	XXStruct_qlg9jA _headerSpaceAbove;	// 140 = 0x8c
	XXStruct_qlg9jA _headerSpaceBelow;	// 144 = 0x90
}
@property(assign, nonatomic) BOOL headerCanExpandListWidth;	// G=0x31e245; S=0x31e255; @synthesize=_headerCanExpandListWidth
@property(assign, nonatomic) XXStruct_qlg9jA headerMaxWidth;	// G=0x31e219; S=0x31e235; @synthesize=_headerMaxWidth
@property(assign) XXStruct_qlg9jA headerSpaceAbove;	// G=0x31e291; S=0x31e2a9; @synthesize=_headerSpaceAbove
@property(assign) XXStruct_qlg9jA headerSpaceBelow;	// G=0x31e2c1; S=0x31e2d9; @synthesize=_headerSpaceBelow
@property(retain) id listDescription;	// G=0x31dad1; S=0x31d9e9; converted property
@property(retain) BRControl *listHeader;	// G=0x31d9d9; S=0x31d7b5; converted property
@property(retain) BRControl *preview;	// G=0x31d741; S=0x31d6b1; converted property
@property(retain) NSString *previewLabel;	// G=0x31d7a5; S=0x31d751; converted property
@property(assign, nonatomic) XXStruct_qlg9jA previewTrailingGap;	// G=0x31e265; S=0x31e281; @synthesize=_previewTrailingGap
- (id)initWithListAlignment:(int)listAlignment;	// 0x31d5c5
- (id)accessibilityLabel;	// 0x31e1b1
- (id)accessibilityScreenContent;	// 0x31e1f9
- (BOOL)brEventAction:(id)action;	// 0x31db09
- (void)dealloc;	// 0x31d639
// declared property getter: - (BOOL)headerCanExpandListWidth;	// 0x31e245
// declared property getter: - (XXStruct_qlg9jA)headerMaxWidth;	// 0x31e219
// declared property getter: - (XXStruct_qlg9jA)headerSpaceAbove;	// 0x31e291
// declared property getter: - (XXStruct_qlg9jA)headerSpaceBelow;	// 0x31e2c1
- (void)layoutSubcontrols;	// 0x31db85
// converted property getter: - (id)listDescription;	// 0x31dad1
// converted property getter: - (id)listHeader;	// 0x31d9d9
// converted property getter: - (id)preview;	// 0x31d741
// converted property getter: - (id)previewLabel;	// 0x31d7a5
// declared property getter: - (XXStruct_qlg9jA)previewTrailingGap;	// 0x31e265
// declared property setter: - (void)setHeaderCanExpandListWidth:(BOOL)width;	// 0x31e255
// declared property setter: - (void)setHeaderMaxWidth:(XXStruct_qlg9jA)width;	// 0x31e235
// declared property setter: - (void)setHeaderSpaceAbove:(XXStruct_qlg9jA)above;	// 0x31e2a9
// declared property setter: - (void)setHeaderSpaceBelow:(XXStruct_qlg9jA)below;	// 0x31e2d9
// converted property setter: - (void)setListDescription:(id)description;	// 0x31d9e9
// converted property setter: - (void)setListHeader:(id)header;	// 0x31d7b5
// converted property setter: - (void)setPreview:(id)preview;	// 0x31d6b1
// converted property setter: - (void)setPreviewLabel:(id)label;	// 0x31d751
// declared property setter: - (void)setPreviewTrailingGap:(XXStruct_qlg9jA)gap;	// 0x31e281
@end
