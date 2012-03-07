/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRActionShelfControl, BRCoverArtPreviewControl;
@protocol BRProvider;

@interface BRDetailedMediaControl : BRControl {
@private
	BRControl *_metadata;	// 48 = 0x30
	BRCoverArtPreviewControl *_coverArtPreviewControl;	// 52 = 0x34
	BRControl *_textLine;	// 56 = 0x38
	BRControl *_previewBrowser;	// 60 = 0x3c
	BRActionShelfControl *_actionShelf;	// 64 = 0x40
	BRTextControl *_expiryText;	// 68 = 0x44
	id<BRProvider> _metadataProvider;	// 72 = 0x48
	id<BRProvider> _textLineProvider;	// 76 = 0x4c
	id<BRProvider> _previewBrowserProvider;	// 80 = 0x50
	int _style;	// 84 = 0x54
	BOOL _detailsTogglingEnabled;	// 88 = 0x58
	BOOL _autoRefreshMetadata;	// 89 = 0x59
}
@property(retain) id actionProviders;	// G=0x341ddf3d; S=0x341ddda9; converted property
@property(retain) BRCoverArtPreviewControl *coverArtPreviewControl;	// G=0x341dd7c5; S=0x341dd719; converted property
@property(assign) int detailControlStyle;	// G=0x341dd6e9; S=0x341dd5d9; converted property
@property(retain) id detailedMetadataControl;	// G=0x341ddbd9; S=0x341ddb45; converted property
@property(retain) id metadataProvider;	// G=0x341ddb35; S=0x341dda0d; converted property
@property(retain) id previewBrowserProvider;	// G=0x341ddd11; S=0x341ddbe9; converted property
@property(retain) id textLineProvider;	// G=0x341dd9fd; S=0x341dd7d5; converted property
- (id)init;	// 0x341dd109
- (void)_focusedActionChanged:(id)changed;	// 0x341de515
- (id)accessibilityScreenContent;	// 0x341de4f5
// converted property getter: - (id)actionProviders;	// 0x341ddf3d
- (BOOL)brEventAction:(id)action;	// 0x341dd405
// converted property getter: - (id)coverArtPreviewControl;	// 0x341dd7c5
- (void)dealloc;	// 0x341dd2e9
// converted property getter: - (int)detailControlStyle;	// 0x341dd6e9
// converted property getter: - (id)detailedMetadataControl;	// 0x341ddbd9
- (void)enableDetailsToggling;	// 0x341dd5c5
- (CGRect)focusCursorFrame;	// 0x341dd4dd
- (void)invokeActionSelectionHandler;	// 0x341ddf95
- (void)layoutSubcontrols;	// 0x341de06d
// converted property getter: - (id)metadataProvider;	// 0x341ddb35
// converted property getter: - (id)previewBrowserProvider;	// 0x341ddd11
- (void)setActionFocusedIndex:(long)index;	// 0x341ddff1
// converted property setter: - (void)setActionProviders:(id)providers;	// 0x341ddda9
- (void)setActionSelectionHandler:(id)handler;	// 0x341ddf75
- (void)setActionStyle:(int)style;	// 0x341ddfd1
- (void)setAutoRefreshMetadata:(BOOL)metadata;	// 0x341ddd99
// converted property setter: - (void)setCoverArtPreviewControl:(id)control;	// 0x341dd719
// converted property setter: - (void)setDetailControlStyle:(int)style;	// 0x341dd5d9
// converted property setter: - (void)setDetailedMetadataControl:(id)control;	// 0x341ddb45
- (void)setExpiryText:(id)text;	// 0x341ddd21
- (void)setImageProxy:(id)proxy;	// 0x341dd6f9
- (void)setMediaType:(id)type;	// 0x341dd2c9
// converted property setter: - (void)setMetadataProvider:(id)provider;	// 0x341dda0d
// converted property setter: - (void)setPreviewBrowserProvider:(id)provider;	// 0x341ddbe9
- (void)setTextLine:(id)line;	// 0x341dd8fd
// converted property setter: - (void)setTextLineProvider:(id)provider;	// 0x341dd7d5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x341de03d
// converted property getter: - (id)textLineProvider;	// 0x341dd9fd
@end
