/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreRottenTomatoesRatingControl : BRControl {
	BRImageControl *_freshnessImageControl;	// 84 = 0x54
	BRTextControl *_percentageNumberControl;	// 88 = 0x58
	BRTextControl *_percentageGlyphControl;	// 92 = 0x5c
	BOOL _trickLayouting;	// 96 = 0x60
}
@property(assign) BOOL trickLayouting;	// G=0x2213a5; S=0x2213bd; @synthesize=_trickLayouting
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x220cb9
- (id)initWithFeedElement:(id)feedElement;	// 0x220de1
- (id)initWithItem:(id)item;	// 0x220bd9
- (id)initWithItem:(id)item textColor:(id)color;	// 0x220bed
- (void)_configureControlsWithFreshness:(int)freshness percentage:(id)percentage textColor:(id)color;	// 0x2213d5
- (id)accessibilityLabel;	// 0x221319
- (void)dealloc;	// 0x220efd
- (void)layoutSubcontrols;	// 0x220f75
// declared property setter: - (void)setTrickLayouting:(BOOL)layouting;	// 0x2213bd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2212a5
// declared property getter: - (BOOL)trickLayouting;	// 0x2213a5
@end

