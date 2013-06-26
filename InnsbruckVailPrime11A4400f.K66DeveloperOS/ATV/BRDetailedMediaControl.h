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
@property(retain) id actionProviders;	// G=0x324a39; S=0x3248a1; converted property
@property(readonly, retain) BRActionShelfControl *actionShelf;	// G=0x324a29; converted property
@property(assign) int detailControlStyle;	// G=0x3243dd; S=0x3242cd; converted property
@property(retain) id detailedMetadataControl;	// G=0x3246e5; S=0x324641; converted property
@property(retain) id metadataProvider;	// G=0x324631; S=0x32451d; converted property
@property(retain) id previewBrowserProvider;	// G=0x324809; S=0x3246f5; converted property
+ (BOOL)_wantsCoverArt;	// 0x325075
- (id)init;	// 0x323df1
- (void)_focusedActionChanged:(id)changed;	// 0x325079
- (id)accessibilityScreenContent;	// 0x325055
// converted property getter: - (id)actionProviders;	// 0x324a39
// converted property getter: - (id)actionShelf;	// 0x324a29
- (BOOL)brEventAction:(id)action;	// 0x3240f1
- (void)dealloc;	// 0x323fe9
// converted property getter: - (int)detailControlStyle;	// 0x3243dd
// converted property getter: - (id)detailedMetadataControl;	// 0x3246e5
- (void)enableDetailsToggling;	// 0x3242b9
- (CGRect)focusCursorFrame;	// 0x3241bd
- (void)invokeActionSelectionHandler;	// 0x324a91
- (void)layoutSubcontrols;	// 0x324b69
// converted property getter: - (id)metadataProvider;	// 0x324631
// converted property getter: - (id)previewBrowserProvider;	// 0x324809
- (void)setActionFocusedIndex:(long)index;	// 0x324aed
// converted property setter: - (void)setActionProviders:(id)providers;	// 0x3248a1
- (void)setActionSelectionHandler:(id)handler;	// 0x324a71
- (void)setActionStyle:(int)style;	// 0x324acd
- (void)setAutoRefreshMetadata:(BOOL)metadata;	// 0x324891
// converted property setter: - (void)setDetailControlStyle:(int)style;	// 0x3242cd
// converted property setter: - (void)setDetailedMetadataControl:(id)control;	// 0x324641
- (void)setExpiryText:(id)text;	// 0x324819
- (void)setImageProxy:(id)proxy;	// 0x3243ed
- (void)setMediaType:(id)type;	// 0x323fc9
// converted property setter: - (void)setMetadataProvider:(id)provider;	// 0x32451d
// converted property setter: - (void)setPreviewBrowserProvider:(id)provider;	// 0x3246f5
- (void)setTextLine:(id)line;	// 0x32440d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x324b39
- (id)textLineControl;	// 0x32450d
@end
