/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRActionShelfControl, BRTextControl, BRCoverArtPreviewControl;
@protocol BRProvider;

__attribute__((visibility("hidden")))
@interface BRDetailedMediaControl : BRControl {
	BRControl *_metadata;	// 84 = 0x54
	BRCoverArtPreviewControl *_coverArtPreviewControl;	// 88 = 0x58
	BRControl *_textLine;	// 92 = 0x5c
	BRControl *_previewBrowser;	// 96 = 0x60
	BRActionShelfControl *_actionShelf;	// 100 = 0x64
	BRTextControl *_expiryText;	// 104 = 0x68
	id<BRProvider> _metadataProvider;	// 108 = 0x6c
	id<BRProvider> _previewBrowserProvider;	// 112 = 0x70
	int _style;	// 116 = 0x74
	BOOL _detailsTogglingEnabled;	// 120 = 0x78
	BOOL _autoRefreshMetadata;	// 121 = 0x79
}
@property(retain) id actionProviders;	// G=0x35e9e1; S=0x35e849; converted property
@property(readonly, retain) BRActionShelfControl *actionShelf;	// G=0x35e9d1; converted property
@property(assign) int detailControlStyle;	// G=0x35e385; S=0x35e275; converted property
@property(retain) id detailedMetadataControl;	// G=0x35e68d; S=0x35e5e9; converted property
@property(retain) id metadataProvider;	// G=0x35e5d9; S=0x35e4c5; converted property
@property(retain) id previewBrowserProvider;	// G=0x35e7b1; S=0x35e69d; converted property
+ (BOOL)_wantsCoverArt;	// 0x35f01d
- (id)init;	// 0x35dd99
- (void)_focusedActionChanged:(id)changed;	// 0x35f021
- (id)accessibilityScreenContent;	// 0x35effd
// converted property getter: - (id)actionProviders;	// 0x35e9e1
// converted property getter: - (id)actionShelf;	// 0x35e9d1
- (BOOL)brEventAction:(id)action;	// 0x35e099
- (void)dealloc;	// 0x35df91
// converted property getter: - (int)detailControlStyle;	// 0x35e385
// converted property getter: - (id)detailedMetadataControl;	// 0x35e68d
- (void)enableDetailsToggling;	// 0x35e261
- (CGRect)focusCursorFrame;	// 0x35e165
- (void)invokeActionSelectionHandler;	// 0x35ea39
- (void)layoutSubcontrols;	// 0x35eb11
// converted property getter: - (id)metadataProvider;	// 0x35e5d9
// converted property getter: - (id)previewBrowserProvider;	// 0x35e7b1
- (void)setActionFocusedIndex:(long)index;	// 0x35ea95
// converted property setter: - (void)setActionProviders:(id)providers;	// 0x35e849
- (void)setActionSelectionHandler:(id)handler;	// 0x35ea19
- (void)setActionStyle:(int)style;	// 0x35ea75
- (void)setAutoRefreshMetadata:(BOOL)metadata;	// 0x35e839
// converted property setter: - (void)setDetailControlStyle:(int)style;	// 0x35e275
// converted property setter: - (void)setDetailedMetadataControl:(id)control;	// 0x35e5e9
- (void)setExpiryText:(id)text;	// 0x35e7c1
- (void)setImageProxy:(id)proxy;	// 0x35e395
- (void)setMediaType:(id)type;	// 0x35df71
// converted property setter: - (void)setMetadataProvider:(id)provider;	// 0x35e4c5
// converted property setter: - (void)setPreviewBrowserProvider:(id)provider;	// 0x35e69d
- (void)setTextLine:(id)line;	// 0x35e3b5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35eae1
- (id)textLineControl;	// 0x35e4b5
@end

