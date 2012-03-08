/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString, BRImage;

__attribute__((visibility("hidden")))
@interface BRPairingPinControl : BRControl {
@private
	BRImage *_boxImage;	// 48 = 0x30
	NSString *_pin;	// 52 = 0x34
}
@property(retain) id PIN;	// G=0x302ba691; S=0x302ba525; converted property
- (id)init;	// 0x302ba405
// converted property getter: - (id)PIN;	// 0x302ba691
- (id)_layerForPINDigit:(id)pindigit;	// 0x302ba841
- (id)accessibilityLabel;	// 0x302ba7e5
- (void)dealloc;	// 0x302ba4c5
- (void)layoutSubcontrols;	// 0x302ba6a1
// converted property setter: - (void)setPIN:(id)pin;	// 0x302ba525
@end

