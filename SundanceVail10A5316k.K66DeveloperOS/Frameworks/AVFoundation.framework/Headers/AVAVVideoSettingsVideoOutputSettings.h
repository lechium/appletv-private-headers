/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVReencodedVideoSettingsForFig.h"
#import "AVVideoOutputSettings.h"

@class NSDictionary;

@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig> {
@private
	NSDictionary *_adaptedVideoCompressionProperties;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) unsigned long videoCodecType;	// G=0x36796e31; 
@property(readonly, assign, nonatomic) NSDictionary *videoCompressionProperties;	// G=0x36796e79; 
@property(readonly, assign, nonatomic) NSDictionary *videoEncoderSpecification;	// G=0x36796e75; 
+ (BOOL)_validateVideoCompressionProperties:(id)properties againstSupportedPropertyDictionary:(id)dictionary forCodecType:(id)codecType exceptionReason:(id *)reason;	// 0x36795e41
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x36795df1
+ (id)eligibleOutputSettingsDictionaryKeys;	// 0x36795d65
- (id)initWithAVVideoSettingsDictionary:(id)avvideoSettingsDictionary exceptionReason:(id *)reason;	// 0x3679624d
- (id)initWithTrustedAVVideoSettingsDictionary:(id)trustedAVVideoSettingsDictionary;	// 0x36796b51
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)reason;	// 0x36796c35
- (void)dealloc;	// 0x36796be1
- (int)height;	// 0x36796de1
- (BOOL)isCodecAvailableOnCurrentSystem;	// 0x36796c31
// declared property getter: - (unsigned long)videoCodecType;	// 0x36796e31
// declared property getter: - (id)videoCompressionProperties;	// 0x36796e79
// declared property getter: - (id)videoEncoderSpecification;	// 0x36796e75
- (int)width;	// 0x36796d91
- (BOOL)willYieldCompressedSamples;	// 0x36796c2d
@end

