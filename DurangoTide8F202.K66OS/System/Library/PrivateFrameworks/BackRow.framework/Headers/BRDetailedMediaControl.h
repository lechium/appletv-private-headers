/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRActionShelfControl, BRCoverArtPreviewControl;
@protocol BRProvider;

@interface BRDetailedMediaControl : BRControl {
@private
	BRControl *_metadata;	// 44 = 0x2c
	BRCoverArtPreviewControl *_coverArtPreviewControl;	// 48 = 0x30
	BRControl *_textLine;	// 52 = 0x34
	BRControl *_previewBrowser;	// 56 = 0x38
	BRActionShelfControl *_actionShelf;	// 60 = 0x3c
	BRTextControl *_expiryText;	// 64 = 0x40
	id<BRProvider> _metadataProvider;	// 68 = 0x44
	id<BRProvider> _textLineProvider;	// 72 = 0x48
	id<BRProvider> _previewBrowserProvider;	// 76 = 0x4c
	int _style;	// 80 = 0x50
	BOOL _detailsTogglingEnabled;	// 84 = 0x54
	BOOL _autoRefreshMetadata;	// 85 = 0x55
}
@property(retain) id actionProviders;	// G=0x328f5fcd; S=0x328f5fed; converted property
@property(retain) BRCoverArtPreviewControl *coverArtPreviewControl;	// G=0x328f5e1d; S=0x328f639d; converted property
@property(assign) int detailControlStyle;	// G=0x328f5e0d; S=0x328b2589; converted property
@property(retain) id detailedMetadataControl;	// G=0x328f5e4d; S=0x328f6209; converted property
@property(retain) id metadataProvider;	// G=0x328f5e3d; S=0x328b2aad; converted property
@property(retain) id previewBrowserProvider;	// G=0x328f5e5d; S=0x328f60f5; converted property
@property(retain) id textLineProvider;	// G=0x328f5e2d; S=0x328b3b91; converted property
- (id)init;	// 0x328b22e5
- (void)_focusedActionChanged:(id)changed;	// 0x328f5e7d
- (id)accessibilityScreenContent;	// 0x328f5f19
// converted property getter: - (id)actionProviders;	// 0x328f5fcd
- (BOOL)brEventAction:(id)action;	// 0x328b4a01
// converted property getter: - (id)coverArtPreviewControl;	// 0x328f5e1d
- (void)dealloc;	// 0x328b6689
// converted property getter: - (int)detailControlStyle;	// 0x328f5e0d
// converted property getter: - (id)detailedMetadataControl;	// 0x328f5e4d
- (void)enableDetailsToggling;	// 0x328b3ca5
- (CGRect)focusCursorFrame;	// 0x328f68c9
- (void)invokeActionSelectionHandler;	// 0x328f5f79
- (void)layoutSubcontrols;	// 0x328f64c5
// converted property getter: - (id)metadataProvider;	// 0x328f5e3d
// converted property getter: - (id)previewBrowserProvider;	// 0x328f5e5d
- (void)setActionFocusedIndex:(long)index;	// 0x328f5f39
// converted property setter: - (void)setActionProviders:(id)providers;	// 0x328f5fed
- (void)setActionSelectionHandler:(id)handler;	// 0x328f5fad
- (void)setActionStyle:(int)style;	// 0x328f5f59
- (void)setAutoRefreshMetadata:(BOOL)metadata;	// 0x328f5e6d
// converted property setter: - (void)setCoverArtPreviewControl:(id)control;	// 0x328f639d
// converted property setter: - (void)setDetailControlStyle:(int)style;	// 0x328b2589
// converted property setter: - (void)setDetailedMetadataControl:(id)control;	// 0x328f6209
- (void)setExpiryText:(id)text;	// 0x328f607d
- (void)setImageProxy:(id)proxy;	// 0x328f643d
- (void)setMediaType:(id)type;	// 0x328f645d
// converted property setter: - (void)setMetadataProvider:(id)provider;	// 0x328b2aad
// converted property setter: - (void)setPreviewBrowserProvider:(id)provider;	// 0x328f60f5
- (void)setTextLine:(id)line;	// 0x328f6291
// converted property setter: - (void)setTextLineProvider:(id)provider;	// 0x328b3b91
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x328f647d
// converted property getter: - (id)textLineProvider;	// 0x328f5e2d
@end

