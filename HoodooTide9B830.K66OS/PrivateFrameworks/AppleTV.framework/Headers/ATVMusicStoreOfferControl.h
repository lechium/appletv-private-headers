/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOfferControl : BRControl {
@private
	BRTextControl *_topLineTextControl;	// 48 = 0x30
	BRTextControl *_bottomLineTextControl;	// 52 = 0x34
	BRImageControl *_hdImageControl;	// 56 = 0x38
	BRImageControl *_ddImageControl;	// 60 = 0x3c
	BRImageControl *_ccImageControl;	// 64 = 0x40
	BRImageControl *_digitalExtrasControl;	// 68 = 0x44
	BOOL _displaysBottomLineText;	// 72 = 0x48
}
@property(assign) BOOL displaysBottomLineText;	// G=0x328de561; S=0x328de571; @synthesize=_displaysBottomLineText
- (id)init;	// 0x328dd519
- (id)accessibilityLabel;	// 0x328de455
- (void)dealloc;	// 0x328dd561
// declared property getter: - (BOOL)displaysBottomLineText;	// 0x328de561
- (void)layoutSubcontrols;	// 0x328dde41
- (void)setClosedCaption:(BOOL)caption;	// 0x328ddc1d
// declared property setter: - (void)setDisplaysBottomLineText:(BOOL)text;	// 0x328de571
- (void)setDolbyDigital:(BOOL)digital;	// 0x328ddb45
- (void)setHasDigitalExtras:(BOOL)extras;	// 0x328ddcf5
- (void)setWidescreen:(BOOL)widescreen andHD:(BOOL)hd and1080p:(BOOL)p;	// 0x328dd611
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x328dddcd
@end

