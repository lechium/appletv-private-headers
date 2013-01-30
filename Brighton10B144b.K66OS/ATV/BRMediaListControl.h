/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSTimer, BRHeaderControl, BRListControl;

__attribute__((visibility("hidden")))
@interface BRMediaListControl : BRControl {
	BRListControl *_list;	// 84 = 0x54
	BRControl *_preview;	// 88 = 0x58
	float _previewDelay;	// 92 = 0x5c
	NSTimer *_previewDelayTimer;	// 96 = 0x60
	BRHeaderControl *_header;	// 100 = 0x64
	BOOL _shareItemArtwork;	// 104 = 0x68
}
@property(readonly, assign, nonatomic) BRHeaderControl *header;	// G=0x2f6915; @synthesize=_header
@property(retain) id listProviders;	// G=0x2f6565; S=0x2f6529; converted property
@property(assign) long selection;	// G=0x2f6841; S=0x2f6805; converted property
@property(assign) BOOL shareItemArtwork;	// G=0x2f6925; S=0x2f693d; @synthesize=_shareItemArtwork
@property(retain) id subtitle;	// G=0x2f66ad; S=0x2f6669; converted property
@property(retain) id title;	// G=0x2f65c9; S=0x2f6585; converted property
@property(retain) id titleImage;	// G=0x2f6649; S=0x2f65e9; converted property
- (id)init;	// 0x2f602d
- (void)_cleanupPreviewDelayTimer;	// 0x2f6a19
- (void)_previewDelayTimerHandler:(id)handler;	// 0x2f6a45
- (void)_scrollWillStart:(id)_scroll;	// 0x2f6955
- (void)_scrollWillStop:(id)_scroll;	// 0x2f6965
- (void)_updatePreviewWithDelay;	// 0x2f6975
- (id)accessibilityLabel;	// 0x2f68d5
- (id)accessibilityScreenContent;	// 0x2f68f5
- (void)controlWasActivated;	// 0x2f63b1
- (void)controlWasDeactivated;	// 0x2f6471
- (void)dealloc;	// 0x2f6135
// declared property getter: - (id)header;	// 0x2f6915
- (long)itemCount;	// 0x2f6861
- (void)layoutSubcontrols;	// 0x2f61d9
- (id)listProviderRequester;	// 0x2f67f5
// converted property getter: - (id)listProviders;	// 0x2f6565
- (void)reload;	// 0x2f6899
// converted property getter: - (long)selection;	// 0x2f6841
// converted property setter: - (void)setListProviders:(id)providers;	// 0x2f6529
// converted property setter: - (void)setSelection:(long)selection;	// 0x2f6805
// declared property setter: - (void)setShareItemArtwork:(BOOL)artwork;	// 0x2f693d
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x2f6669
// converted property setter: - (void)setTitle:(id)title;	// 0x2f6585
// converted property setter: - (void)setTitleImage:(id)image;	// 0x2f65e9
// declared property getter: - (BOOL)shareItemArtwork;	// 0x2f6925
// converted property getter: - (id)subtitle;	// 0x2f66ad
// converted property getter: - (id)title;	// 0x2f65c9
// converted property getter: - (id)titleImage;	// 0x2f6649
- (void)updatePreview;	// 0x2f66cd
@end
