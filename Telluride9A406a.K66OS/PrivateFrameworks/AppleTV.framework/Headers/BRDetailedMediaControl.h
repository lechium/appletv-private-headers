/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

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
@property(retain) id actionProviders;	// G=0x33069545; S=0x330693b1; converted property
@property(retain) BRCoverArtPreviewControl *coverArtPreviewControl;	// G=0x33068dcd; S=0x33068d21; converted property
@property(assign) int detailControlStyle;	// G=0x33068cf1; S=0x33068be1; converted property
@property(retain) id detailedMetadataControl;	// G=0x330691e1; S=0x3306914d; converted property
@property(retain) id metadataProvider;	// G=0x3306913d; S=0x33069015; converted property
@property(retain) id previewBrowserProvider;	// G=0x33069319; S=0x330691f1; converted property
@property(retain) id textLineProvider;	// G=0x33069005; S=0x33068ddd; converted property
- (id)init;	// 0x33068711
- (void)_focusedActionChanged:(id)changed;	// 0x33069b1d
- (id)accessibilityScreenContent;	// 0x33069afd
// converted property getter: - (id)actionProviders;	// 0x33069545
- (BOOL)brEventAction:(id)action;	// 0x33068a0d
// converted property getter: - (id)coverArtPreviewControl;	// 0x33068dcd
- (void)dealloc;	// 0x330688f1
// converted property getter: - (int)detailControlStyle;	// 0x33068cf1
// converted property getter: - (id)detailedMetadataControl;	// 0x330691e1
- (void)enableDetailsToggling;	// 0x33068bcd
- (CGRect)focusCursorFrame;	// 0x33068ae5
- (void)invokeActionSelectionHandler;	// 0x3306959d
- (void)layoutSubcontrols;	// 0x33069675
// converted property getter: - (id)metadataProvider;	// 0x3306913d
// converted property getter: - (id)previewBrowserProvider;	// 0x33069319
- (void)setActionFocusedIndex:(long)index;	// 0x330695f9
// converted property setter: - (void)setActionProviders:(id)providers;	// 0x330693b1
- (void)setActionSelectionHandler:(id)handler;	// 0x3306957d
- (void)setActionStyle:(int)style;	// 0x330695d9
- (void)setAutoRefreshMetadata:(BOOL)metadata;	// 0x330693a1
// converted property setter: - (void)setCoverArtPreviewControl:(id)control;	// 0x33068d21
// converted property setter: - (void)setDetailControlStyle:(int)style;	// 0x33068be1
// converted property setter: - (void)setDetailedMetadataControl:(id)control;	// 0x3306914d
- (void)setExpiryText:(id)text;	// 0x33069329
- (void)setImageProxy:(id)proxy;	// 0x33068d01
- (void)setMediaType:(id)type;	// 0x330688d1
// converted property setter: - (void)setMetadataProvider:(id)provider;	// 0x33069015
// converted property setter: - (void)setPreviewBrowserProvider:(id)provider;	// 0x330691f1
- (void)setTextLine:(id)line;	// 0x33068f05
// converted property setter: - (void)setTextLineProvider:(id)provider;	// 0x33068ddd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33069645
// converted property getter: - (id)textLineProvider;	// 0x33069005
@end

