/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreRottenTomatoesRatingControl : BRControl {
	BRImageControl *_freshnessImageControl;	// 84 = 0x54
	BRTextControl *_percentageNumberControl;	// 88 = 0x58
	BRTextControl *_percentageGlyphControl;	// 92 = 0x5c
	BOOL _trickLayouting;	// 96 = 0x60
}
@property(assign) BOOL trickLayouting;	// G=0x208aad; S=0x208ac5; @synthesize=_trickLayouting
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x2083c1
- (id)initWithFeedElement:(id)feedElement;	// 0x2084e9
- (id)initWithItem:(id)item;	// 0x2082e1
- (id)initWithItem:(id)item textColor:(id)color;	// 0x2082f5
- (void)_configureControlsWithFreshness:(int)freshness percentage:(id)percentage textColor:(id)color;	// 0x208add
- (id)accessibilityLabel;	// 0x208a21
- (void)dealloc;	// 0x208605
- (void)layoutSubcontrols;	// 0x20867d
// declared property setter: - (void)setTrickLayouting:(BOOL)layouting;	// 0x208ac5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2089ad
// declared property getter: - (BOOL)trickLayouting;	// 0x208aad
@end

