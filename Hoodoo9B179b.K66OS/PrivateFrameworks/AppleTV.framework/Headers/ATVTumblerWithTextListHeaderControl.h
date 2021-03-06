/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTumblerControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVTumblerWithTextListHeaderControl : BRControl {
@private
	float _tumblerMaxWidth;	// 48 = 0x30
	BRTumblerControl *_tumbler;	// 52 = 0x34
	BRTextControl *_customText;	// 56 = 0x38
	BOOL _customTextOnTop;	// 60 = 0x3c
}
@property(readonly, assign) BRTextControl *customText;	// G=0x3020e04d; @synthesize=_customText
@property(assign, nonatomic) BOOL customTextOnTop;	// G=0x3020e05d; S=0x3020da21; @synthesize=_customTextOnTop
@property(readonly, assign) BRTumblerControl *tumbler;	// G=0x3020e03d; @synthesize=_tumbler
@property(assign, nonatomic) float tumblerMaxWidth;	// G=0x3020e01d; S=0x3020e02d; @synthesize=_tumblerMaxWidth
- (id)init;	// 0x3020d909
- (id)accessibilityLabel;	// 0x3020dfb9
- (BOOL)brEventAction:(id)action;	// 0x3020da51
// declared property getter: - (id)customText;	// 0x3020e04d
// declared property getter: - (BOOL)customTextOnTop;	// 0x3020e05d
- (void)dealloc;	// 0x3020d9c1
- (void)layoutSubcontrols;	// 0x3020db99
// declared property setter: - (void)setCustomTextOnTop:(BOOL)top;	// 0x3020da21
// declared property setter: - (void)setTumblerMaxWidth:(float)width;	// 0x3020e02d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3020da75
// declared property getter: - (id)tumbler;	// 0x3020e03d
// declared property getter: - (float)tumblerMaxWidth;	// 0x3020e01d
@end

