/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreRottenTomatoesRatingControl : BRControl {
@private
	BRImageControl *_freshnessImageControl;	// 48 = 0x30
	BRTextControl *_percentageNumberControl;	// 52 = 0x34
	BRTextControl *_percentageGlyphControl;	// 56 = 0x38
	BOOL _trickLayouting;	// 60 = 0x3c
}
@property(assign) BOOL trickLayouting;	// G=0x301da075; S=0x301da085; @synthesize=_trickLayouting
+ (id)ratingControlWithItem:(id)item;	// 0x301d9895
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x301d99a9
- (id)initWithFeedElement:(id)feedElement;	// 0x301d9acd
- (id)initWithItem:(id)item;	// 0x301d98e1
- (void)_configureControlsWithFreshness:(int)freshness percentage:(id)percentage;	// 0x301da095
- (id)accessibilityLabel;	// 0x301d9fed
- (void)dealloc;	// 0x301d9bd1
- (void)layoutSubcontrols;	// 0x301d9c45
// declared property setter: - (void)setTrickLayouting:(BOOL)layouting;	// 0x301da085
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x301d9f79
// declared property getter: - (BOOL)trickLayouting;	// 0x301da075
@end

