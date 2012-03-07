/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRMenuView.h"

@class NSString, BRTextControl;

@interface BRMediaMenuView : BRMenuView {
@private
	BRControl *_preview;	// 76 = 0x4c
	NSString *_previewLabel;	// 80 = 0x50
	BRControl *_listHeader;	// 84 = 0x54
	BRTextControl *_listErrorText;	// 88 = 0x58
	float _headerMaxWidth;	// 92 = 0x5c
}
@property(assign, nonatomic) float headerMaxWidth;	// G=0x330085b5; S=0x330085c5; @synthesize=_headerMaxWidth
@property(retain) BRControl *listHeader;	// G=0x330085a5; S=0x33008615; converted property
@property(retain) BRControl *preview;	// G=0x33008585; S=0x330086b9; converted property
@property(retain) NSString *previewLabel;	// G=0x33008595; S=0x33008681; converted property
- (id)accessibilityLabel;	// 0x330085f5
- (id)accessibilityScreenContent;	// 0x330085d5
- (BOOL)brEventAction:(id)action;	// 0x33008725
- (void)dealloc;	// 0x330087b5
// declared property getter: - (float)headerMaxWidth;	// 0x330085b5
- (void)layoutSubcontrols;	// 0x33008959
// converted property getter: - (id)listHeader;	// 0x330085a5
// converted property getter: - (id)preview;	// 0x33008585
// converted property getter: - (id)previewLabel;	// 0x33008595
// declared property setter: - (void)setHeaderMaxWidth:(float)width;	// 0x330085c5
- (void)setListErrorText:(id)text;	// 0x33008835
// converted property setter: - (void)setListHeader:(id)header;	// 0x33008615
// converted property setter: - (void)setPreview:(id)preview;	// 0x330086b9
// converted property setter: - (void)setPreviewLabel:(id)label;	// 0x33008681
@end
