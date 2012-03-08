/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRMarqueeTextControl, BRTextControl, NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRAutoScrollingTextControl : BRControl {
@private
	NSAttributedString *_text;	// 48 = 0x30
	BRMarqueeTextControl *_scrollingTextControl;	// 52 = 0x34
	BRTextControl *_textControl;	// 56 = 0x38
	BOOL _crossfadeEnabled;	// 60 = 0x3c
	BOOL _autoScrollEnabled;	// 61 = 0x3d
	BOOL _displaysText;	// 62 = 0x3e
	BOOL _useAlphaFadeMask;	// 63 = 0x3f
	BOOL _animationUsesDelay;	// 64 = 0x40
}
@property(assign) BOOL animationUsesDelay;	// G=0x3305710d; S=0x330570fd; converted property
@property(retain) id attributedString;	// G=0x33056fe1; S=0x33056f25; converted property
@property(assign) BOOL autoScrollEnabled;	// G=0x33057041; S=0x33057011; converted property
@property(assign) BOOL crossfadeEnabled;	// G=0x33057001; S=0x33056ff1; converted property
@property(assign) BOOL displaysText;	// G=0x330570ed; S=0x33057051; converted property
@property(assign) BOOL useAlphaFadeMask;	// G=0x3305712d; S=0x3305711d; converted property
- (id)init;	// 0x33056df9
- (void)_removeMarqueeControl;	// 0x330577e5
- (void)_removeTextControl;	// 0x3305779d
// converted property getter: - (BOOL)animationUsesDelay;	// 0x3305710d
// converted property getter: - (id)attributedString;	// 0x33056fe1
// converted property getter: - (BOOL)autoScrollEnabled;	// 0x33057041
// converted property getter: - (BOOL)crossfadeEnabled;	// 0x33057001
- (void)dealloc;	// 0x33056e3d
// converted property getter: - (BOOL)displaysText;	// 0x330570ed
- (void)layoutSubcontrols;	// 0x3305713d
- (id)preferredActionForKey:(id)key;	// 0x33057699
// converted property setter: - (void)setAnimationUsesDelay:(BOOL)delay;	// 0x330570fd
// converted property setter: - (void)setAttributedString:(id)string;	// 0x33056f25
// converted property setter: - (void)setAutoScrollEnabled:(BOOL)enabled;	// 0x33057011
// converted property setter: - (void)setCrossfadeEnabled:(BOOL)enabled;	// 0x33056ff1
// converted property setter: - (void)setDisplaysText:(BOOL)text;	// 0x33057051
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x33056eb1
// converted property setter: - (void)setUseAlphaFadeMask:(BOOL)mask;	// 0x3305711d
// converted property getter: - (BOOL)useAlphaFadeMask;	// 0x3305712d
@end

