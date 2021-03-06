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
	BRImageControl *_freshnessImageControl;	// 80 = 0x50
	BRTextControl *_percentageNumberControl;	// 84 = 0x54
	BRTextControl *_percentageGlyphControl;	// 88 = 0x58
	BOOL _trickLayouting;	// 92 = 0x5c
}
@property(assign) BOOL trickLayouting;	// G=0x1ef101; S=0x1ef119; @synthesize=_trickLayouting
+ (id)ratingControlWithItem:(id)item;	// 0x1ee929
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x1eea39
- (id)initWithFeedElement:(id)feedElement;	// 0x1eeb5d
- (id)initWithItem:(id)item;	// 0x1ee975
- (void)_configureControlsWithFreshness:(int)freshness percentage:(id)percentage;	// 0x1ef131
- (id)accessibilityLabel;	// 0x1ef075
- (void)dealloc;	// 0x1eec61
- (void)layoutSubcontrols;	// 0x1eecd9
// declared property setter: - (void)setTrickLayouting:(BOOL)layouting;	// 0x1ef119
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x1ef001
// declared property getter: - (BOOL)trickLayouting;	// 0x1ef101
@end

