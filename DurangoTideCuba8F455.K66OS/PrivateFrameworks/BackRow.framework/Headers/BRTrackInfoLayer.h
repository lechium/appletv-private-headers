/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSArray, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRTrackInfoLayer : BRControl {
@private
	BRControl *_background;	// 44 = 0x2c
	BRImageControl *_art;	// 48 = 0x30
	NSArray *_lines;	// 52 = 0x34
	float _maxLength;	// 56 = 0x38
	long _maxLines;	// 60 = 0x3c
}
- (id)init;	// 0x32f8cded
- (void)_updateSublayers;	// 0x32f8cbfd
- (id)accessibilityLabel;	// 0x32f8d3cd
- (void)dealloc;	// 0x32f8cd81
- (void)layoutSubcontrols;	// 0x32f8d0e5
- (void)setImage:(id)image;	// 0x32f8ccd9
- (void)setLines:(id)lines withImage:(id)image;	// 0x32f8ce95
- (void)setMaxLines:(long)lines;	// 0x32f8ccb9
@end

