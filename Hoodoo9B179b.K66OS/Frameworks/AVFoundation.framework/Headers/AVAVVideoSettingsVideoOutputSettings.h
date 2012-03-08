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
	BOOL _dictionaryWasFullyFormed;	// 8 = 0x8
	NSDictionary *_adaptedVideoCompressionProperties;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned long videoCodecType;	// G=0x30b0ecf1; 
@property(readonly, assign, nonatomic) NSDictionary *videoCompressionProperties;	// G=0x30b0ed39; 
@property(readonly, assign, nonatomic) NSDictionary *videoEncoderSpecification;	// G=0x30b0ed35; 
+ (BOOL)_validateVideoCompressionProperties:(id)properties againstSupportedPropertyDictionary:(id)dictionary forCodecType:(id)codecType exceptionReason:(id *)reason;	// 0x30b0dec5
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x30b0de75
+ (id)eligibleOutputSettingsDictionaryKeys;	// 0x30b0ddf1
- (id)initWithAVVideoSettingsDictionary:(id)avvideoSettingsDictionary exceptionReason:(id *)reason;	// 0x30b0e2c5
- (void)dealloc;	// 0x30b0ebf9
- (int)height;	// 0x30b0eca5
- (BOOL)isDictionaryFullyFormed;	// 0x30b0ec49
// declared property getter: - (unsigned long)videoCodecType;	// 0x30b0ecf1
// declared property getter: - (id)videoCompressionProperties;	// 0x30b0ed39
// declared property getter: - (id)videoEncoderSpecification;	// 0x30b0ed35
- (int)width;	// 0x30b0ec59
- (BOOL)willYieldCompressedSamples;	// 0x30b0ec45
@end

