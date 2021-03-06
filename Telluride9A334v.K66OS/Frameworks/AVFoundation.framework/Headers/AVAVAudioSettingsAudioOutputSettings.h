/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVReencodedAudioSettingsForFig.h"
#import "AVDecodedAudioSettingsForFig.h"
#import "AVAudioOutputSettings.h"


@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings <AVReencodedAudioSettingsForFig, AVDecodedAudioSettingsForFig> {
@private
	BOOL _dictionaryWasFullyFormed;	// 8 = 0x8
}
+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)audioSettingsDictionary exceptionReason:(id *)reason;	// 0x354931b1
+ (id)eligibleOutputSettingsDictionaryKeys;	// 0x35493201
- (id)initWithAVAudioSettingsDictionary:(id)avaudioSettingsDictionary exceptionReason:(id *)reason;	// 0x35493ae9
- (id)audioOptions;	// 0x354932e5
- (AudioChannelLayout *)copyAudioChannelLayoutForSourceFormatDescription:(opaqueCMFormatDescription *)sourceFormatDescription audioChannelLayoutSize:(unsigned *)size;	// 0x35493405
- (void)getAudioStreamBasicDescription:(AudioStreamBasicDescription *)description forAudioFileTypeID:(unsigned long)audioFileTypeID sourceFormatDescription:(opaqueCMFormatDescription *)description3;	// 0x354934dd
- (BOOL)isDictionaryFullyFormed;	// 0x35490d71
- (BOOL)willYieldCompressedSamples;	// 0x35493a91
@end

