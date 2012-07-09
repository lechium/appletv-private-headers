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
@property(assign, nonatomic) unsigned long outputBitsPerChannel;	// G=0x317ce1b9; S=0x317ce1cd; 
@property(assign, nonatomic) unsigned long outputChannelCount;	// G=0x317ce1f9; S=0x317ce20d; 
@property(assign, nonatomic) unsigned long outputDataRate;	// G=0x317ce239; S=0x317ce249; 
@property(assign, nonatomic) unsigned long outputFormat;	// G=0x317ce139; S=0x317ce14d; 
@property(assign, nonatomic) unsigned long outputFormatFlags;	// G=0x317ce179; S=0x317ce18d; 
@property(assign, nonatomic) float outputSampleRate;	// G=0x317ce0e1; S=0x317ce0fd; 
- (id)init;	// 0x317cd6b9
- (void)_bringUpToDate;	// 0x317cdf89
- (void)_buildApplicableDataRatesForSampleRates;	// 0x317cda69
- (void)_buildAudioConverter;	// 0x317cd829
- (void)_buildAvailableSampleRates;	// 0x317cd919
- (id)_fetchApplicableOutputDataRates;	// 0x317cdef9
- (float)_getAvailableOutputSampleRateFor:(float)aFor rounding:(int)rounding;	// 0x317ce615
- (float)applicableOutputSampleRateForDesiredSampleRate:(float)desiredSampleRate rounding:(int)rounding;	// 0x317ce259
- (unsigned long)availableOutputChannelCountForDesiredChannelCount:(unsigned long)desiredChannelCount rounding:(int)rounding;	// 0x317ce4f1
- (void)dealloc;	// 0x317cd745
- (void)finalize;	// 0x317cd7e5
// declared property getter: - (unsigned long)outputBitsPerChannel;	// 0x317ce1b9
// declared property getter: - (unsigned long)outputChannelCount;	// 0x317ce1f9
// declared property getter: - (unsigned long)outputDataRate;	// 0x317ce239
// declared property getter: - (unsigned long)outputFormat;	// 0x317ce139
// declared property getter: - (unsigned long)outputFormatFlags;	// 0x317ce179
// declared property getter: - (float)outputSampleRate;	// 0x317ce0e1
- (void)setInputPropertiesFromASBD:(AudioStreamBasicDescription)asbd;	// 0x317ce091
// declared property setter: - (void)setOutputBitsPerChannel:(unsigned long)channel;	// 0x317ce1cd
// declared property setter: - (void)setOutputChannelCount:(unsigned long)count;	// 0x317ce20d
// declared property setter: - (void)setOutputDataRate:(unsigned long)rate;	// 0x317ce249
// declared property setter: - (void)setOutputFormat:(unsigned long)format;	// 0x317ce14d
// declared property setter: - (void)setOutputFormatFlags:(unsigned long)flags;	// 0x317ce18d
// declared property setter: - (void)setOutputSampleRate:(float)rate;	// 0x317ce0fd
@end
