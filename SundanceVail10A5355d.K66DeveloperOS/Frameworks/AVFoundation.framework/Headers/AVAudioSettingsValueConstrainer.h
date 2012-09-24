/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray;

@interface AVAudioSettingsValueConstrainer : NSObject {
	AudioStreamBasicDescription _inputASBD;	// 4 = 0x4
	AudioStreamBasicDescription _outputASBD;	// 44 = 0x2c
	OpaqueAudioConverter *_audioConverter;	// 84 = 0x54
	unsigned long _outputDataRate;	// 88 = 0x58
	BOOL _needNewConverter;	// 92 = 0x5c
	BOOL _needAvailableSampleRates;	// 93 = 0x5d
	BOOL _needApplicableParameters;	// 94 = 0x5e
	NSArray *_availableOutputSampleRates;	// 96 = 0x60
	NSMutableArray *_availableOutputDataRates;	// 100 = 0x64
	NSMutableArray *_applicableOutputSampleRatesForDataRate;	// 104 = 0x68
	NSMutableArray *_applicableOutputDataRatesForSampleRate;	// 108 = 0x6c
}
@property(assign, nonatomic) unsigned long outputBitsPerChannel;	// G=0x326e16b1; S=0x326e16c5; 
@property(assign, nonatomic) unsigned long outputChannelCount;	// G=0x326e16f1; S=0x326e1705; 
@property(assign, nonatomic) unsigned long outputDataRate;	// G=0x326e1731; S=0x326e1741; 
@property(assign, nonatomic) unsigned long outputFormat;	// G=0x326e1631; S=0x326e1645; 
@property(assign, nonatomic) unsigned long outputFormatFlags;	// G=0x326e1671; S=0x326e1685; 
@property(assign, nonatomic) float outputSampleRate;	// G=0x326e15d9; S=0x326e15f5; 
- (id)init;	// 0x326e0bb1
- (void)_bringUpToDate;	// 0x326e1481
- (void)_buildApplicableDataRatesForSampleRates;	// 0x326e0f61
- (void)_buildAudioConverter;	// 0x326e0d21
- (void)_buildAvailableSampleRates;	// 0x326e0e11
- (id)_fetchApplicableOutputDataRates;	// 0x326e13f1
- (float)_getAvailableOutputSampleRateFor:(float)aFor rounding:(int)rounding;	// 0x326e1b0d
- (float)applicableOutputSampleRateForDesiredSampleRate:(float)desiredSampleRate rounding:(int)rounding;	// 0x326e1751
- (unsigned long)availableOutputChannelCountForDesiredChannelCount:(unsigned long)desiredChannelCount rounding:(int)rounding;	// 0x326e19e9
- (void)dealloc;	// 0x326e0c3d
- (void)finalize;	// 0x326e0cdd
// declared property getter: - (unsigned long)outputBitsPerChannel;	// 0x326e16b1
// declared property getter: - (unsigned long)outputChannelCount;	// 0x326e16f1
// declared property getter: - (unsigned long)outputDataRate;	// 0x326e1731
// declared property getter: - (unsigned long)outputFormat;	// 0x326e1631
// declared property getter: - (unsigned long)outputFormatFlags;	// 0x326e1671
// declared property getter: - (float)outputSampleRate;	// 0x326e15d9
- (void)setInputPropertiesFromASBD:(AudioStreamBasicDescription)asbd;	// 0x326e1589
// declared property setter: - (void)setOutputBitsPerChannel:(unsigned long)channel;	// 0x326e16c5
// declared property setter: - (void)setOutputChannelCount:(unsigned long)count;	// 0x326e1705
// declared property setter: - (void)setOutputDataRate:(unsigned long)rate;	// 0x326e1741
// declared property setter: - (void)setOutputFormat:(unsigned long)format;	// 0x326e1645
// declared property setter: - (void)setOutputFormatFlags:(unsigned long)flags;	// 0x326e1685
// declared property setter: - (void)setOutputSampleRate:(float)rate;	// 0x326e15f5
@end
