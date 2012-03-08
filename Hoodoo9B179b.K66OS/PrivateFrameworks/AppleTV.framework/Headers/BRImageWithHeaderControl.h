/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRHeaderControl, BRImageControl;

@interface BRImageWithHeaderControl : BRControl {
@private
	BRHeaderControl *_header;	// 48 = 0x30
	BRImageControl *_image;	// 52 = 0x34
}
+ (id)controlWithTitle:(id)title andImage:(id)image;	// 0x303f038d
- (id)init;	// 0x303f0405
- (id)accessibilityLabel;	// 0x303f07bd
- (id)accessibilityScreenContent;	// 0x303f07dd
- (void)dealloc;	// 0x303f04ed
- (BOOL)isAccessibilityElement;	// 0x303f07b9
- (void)layoutSubcontrols;	// 0x303f05f9
- (void)setImage:(id)image;	// 0x303f05bd
- (void)setTitle:(id)title;	// 0x303f054d
@end

