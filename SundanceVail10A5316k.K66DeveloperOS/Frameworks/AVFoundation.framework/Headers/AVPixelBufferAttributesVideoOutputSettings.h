/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVDecodedVideoSettingsForFig.h"
#import "AVVideoOutputSettings.h"

@class NSDictionary;

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig> {
}
@property(readonly, assign, nonatomic) NSDictionary *pixelBufferAttributes;	// G=0x36795cd9; 
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x367959f5
+ (id)eligibleOutputSettingsDictionaryKeys;	// 0x3679599d
- (id)initWithPixelBufferAttributes:(id)pixelBufferAttributes exceptionReason:(id *)reason;	// 0x36795a45
- (id)initWithTrustedPixelBufferAttributes:(id)trustedPixelBufferAttributes;	// 0x36795bfd
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)reason;	// 0x36795cd5
- (int)height;	// 0x36795c7d
- (BOOL)isCodecAvailableOnCurrentSystem;	// 0x36795cd1
// declared property getter: - (id)pixelBufferAttributes;	// 0x36795cd9
- (int)width;	// 0x36795c2d
- (BOOL)willYieldCompressedSamples;	// 0x36795ccd
@end

