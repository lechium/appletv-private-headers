/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRScrollControl, BRImageControl, BRListView, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRMenuView : BRControl {
	float _verticalSpacer;	// 84 = 0x54
	BRImageControl *_titleImage;	// 88 = 0x58
	float _titleImageVerticalOffset;	// 92 = 0x5c
	BRTextControl *_title;	// 96 = 0x60
	BRTextControl *_menuDescription;	// 100 = 0x64
	BRListView *_list;	// 104 = 0x68
	BRScrollControl *_scroller;	// 108 = 0x6c
	int _listAlignment;	// 112 = 0x70
	XXStruct_qlg9jA _listWidth;	// 116 = 0x74
	XXStruct_qlg9jA _listLeadingGap;	// 120 = 0x78
	XXStruct_qlg9jA _listTrailingGap;	// 124 = 0x7c
}
@property(readonly, retain) BRListView *list;	// G=0x3872bd; converted property
@property(readonly, assign, nonatomic) int listAlignment;	// G=0x387b35; @synthesize=_listAlignment
@property(assign) CGRect listFrame;	// G=0x387309; S=0x3872cd; converted property
@property(assign, nonatomic) XXStruct_qlg9jA listLeadingGap;	// G=0x387b71; S=0x387b8d; @synthesize=_listLeadingGap
@property(assign, nonatomic) XXStruct_qlg9jA listTrailingGap;	// G=0x387b9d; S=0x387bb9; @synthesize=_listTrailingGap
@property(assign, nonatomic) XXStruct_qlg9jA listWidth;	// G=0x387b45; S=0x387b61; @synthesize=_listWidth
@property(retain) BRTextControl *menuDescription;	// G=0x387285; S=0x387271; converted property
@property(readonly, retain) BRScrollControl *scroller;	// G=0x387b21; converted property
@property(retain) BRTextControl *title;	// G=0x3870ed; S=0x3870d9; converted property
+ (id)menuViewWithListAlignment:(int)listAlignment;	// 0x386be5
- (id)init;	// 0x386c21
- (id)initWithListAlignment:(int)listAlignment;	// 0x386c35
- (id)accessibilityLabel;	// 0x387b01
- (id)accessibilitySecondaryLabel;	// 0x387b11
- (void)dealloc;	// 0x386ea1
- (BOOL)isRandomNavigationCandidate;	// 0x387b31
- (void)layoutSubcontrols;	// 0x387339
// converted property getter: - (id)list;	// 0x3872bd
// declared property getter: - (int)listAlignment;	// 0x387b35
// converted property getter: - (CGRect)listFrame;	// 0x387309
// declared property getter: - (XXStruct_qlg9jA)listLeadingGap;	// 0x387b71
// declared property getter: - (XXStruct_qlg9jA)listTrailingGap;	// 0x387b9d
// declared property getter: - (XXStruct_qlg9jA)listWidth;	// 0x387b45
// converted property getter: - (id)menuDescription;	// 0x387285
// converted property getter: - (id)scroller;	// 0x387b21
// converted property setter: - (void)setListFrame:(CGRect)frame;	// 0x3872cd
// declared property setter: - (void)setListLeadingGap:(XXStruct_qlg9jA)gap;	// 0x387b8d
// declared property setter: - (void)setListTrailingGap:(XXStruct_qlg9jA)gap;	// 0x387bb9
// declared property setter: - (void)setListWidth:(XXStruct_qlg9jA)width;	// 0x387b61
// converted property setter: - (void)setMenuDescription:(id)description;	// 0x387271
- (void)setMenuDescription:(id)description withAttributes:(id)attributes;	// 0x387125
// converted property setter: - (void)setTitle:(id)title;	// 0x3870d9
- (void)setTitle:(id)title withAttributes:(id)attributes;	// 0x386ffd
- (void)setTitleImage:(id)image withVerticalOffset:(float)verticalOffset;	// 0x386f51
- (void)setVerticalSpacer:(float)spacer;	// 0x386f41
// converted property getter: - (id)title;	// 0x3870ed
@end

