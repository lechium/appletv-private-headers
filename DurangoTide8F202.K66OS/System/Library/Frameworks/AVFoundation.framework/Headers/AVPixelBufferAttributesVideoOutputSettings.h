/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVVideoOutputSettings.h"
#import "AVDecodedVideoSettingsForFig.h"

@class NSDictionary;

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig> {
}
@property(readonly, assign, nonatomic) int height;	// G=0x304103bd; 
@property(readonly, assign, nonatomic) NSDictionary *pixelBufferAttributes;	// G=0x304103a9; 
@property(readonly, assign, nonatomic) int width;	// G=0x304103fd; 
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x30410521
+ (id)eligibleOutputSettingsDictionaryKeys;	// 0x30410569
- (id)initWithPixelBufferAttributes:(id)pixelBufferAttributes exceptionReason:(id *)reason;	// 0x3041043d
// declared property getter: - (int)height;	// 0x304103bd
- (BOOL)isDictionaryFullyFormed;	// 0x30410021
// declared property getter: - (id)pixelBufferAttributes;	// 0x304103a9
// declared property getter: - (int)width;	// 0x304103fd
- (BOOL)willYieldCompressedSamples;	// 0x3041001d
@end

