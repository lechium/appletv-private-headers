/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl, BRActionShelfControl, BRCoverArtPreviewControl;
@protocol BRProvider;

__attribute__((visibility("hidden")))
@interface BRDetailedMediaControl : BRControl {
	BRControl *_metadata;	// 80 = 0x50
	BRCoverArtPreviewControl *_coverArtPreviewControl;	// 84 = 0x54
	BRControl *_textLine;	// 88 = 0x58
	BRControl *_previewBrowser;	// 92 = 0x5c
	BRActionShelfControl *_actionShelf;	// 96 = 0x60
	BRTextControl *_expiryText;	// 100 = 0x64
	id<BRProvider> _metadataProvider;	// 104 = 0x68
	id<BRProvider> _textLineProvider;	// 108 = 0x6c
	id<BRProvider> _previewBrowserProvider;	// 112 = 0x70
	int _style;	// 116 = 0x74
	BOOL _detailsTogglingEnabled;	// 120 = 0x78
	BOOL _autoRefreshMetadata;	// 121 = 0x79
}
@property(retain) id actionProviders;	// G=0x29a081; S=0x299ef9; converted property
@property(retain) BRCoverArtPreviewControl *coverArtPreviewControl;	// G=0x299949; S=0x29988d; converted property
@property(assign) int detailControlStyle;	// G=0x29985d; S=0x299749; converted property
@property(retain) id detailedMetadataControl;	// G=0x299d39; S=0x299c95; converted property
@property(retain) id metadataProvider;	// G=0x299c85; S=0x299b75; converted property
@property(retain) id previewBrowserProvider;	// G=0x299e59; S=0x299d49; converted property
@property(retain) id textLineProvider;	// G=0x299b65; S=0x299959; converted property
- (id)init;	// 0x299281
- (void)_focusedActionChanged:(id)changed;	// 0x29a6c1
- (id)accessibilityScreenContent;	// 0x29a6a1
// converted property getter: - (id)actionProviders;	// 0x29a081
- (BOOL)brEventAction:(id)action;	// 0x299561
// converted property getter: - (id)coverArtPreviewControl;	// 0x299949
- (void)dealloc;	// 0x299445
// converted property getter: - (int)detailControlStyle;	// 0x29985d
// converted property getter: - (id)detailedMetadataControl;	// 0x299d39
- (void)enableDetailsToggling;	// 0x299735
- (CGRect)focusCursorFrame;	// 0x299639
- (void)invokeActionSelectionHandler;	// 0x29a0d9
- (void)layoutSubcontrols;	// 0x29a1b1
// converted property getter: - (id)metadataProvider;	// 0x299c85
// converted property getter: - (id)previewBrowserProvider;	// 0x299e59
- (void)setActionFocusedIndex:(long)index;	// 0x29a135
// converted property setter: - (void)setActionProviders:(id)providers;	// 0x299ef9
- (void)setActionSelectionHandler:(id)handler;	// 0x29a0b9
- (void)setActionStyle:(int)style;	// 0x29a115
- (void)setAutoRefreshMetadata:(BOOL)metadata;	// 0x299ee9
// converted property setter: - (void)setCoverArtPreviewControl:(id)control;	// 0x29988d
// converted property setter: - (void)setDetailControlStyle:(int)style;	// 0x299749
// converted property setter: - (void)setDetailedMetadataControl:(id)control;	// 0x299c95
- (void)setExpiryText:(id)text;	// 0x299e69
- (void)setImageProxy:(id)proxy;	// 0x29986d
- (void)setMediaType:(id)type;	// 0x299425
// converted property setter: - (void)setMetadataProvider:(id)provider;	// 0x299b75
// converted property setter: - (void)setPreviewBrowserProvider:(id)provider;	// 0x299d49
- (void)setTextLine:(id)line;	// 0x299a69
// converted property setter: - (void)setTextLineProvider:(id)provider;	// 0x299959
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x29a181
// converted property getter: - (id)textLineProvider;	// 0x299b65
@end
