/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class NSSet, NSDictionary;

@interface AVOutputSettings : NSObject <NSCopying> {
@private
	NSDictionary *_outputSettingsDictionary;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isCodecAvailableOnCurrentSystem) BOOL codecAvailableOnCurrentSystem;	// G=0x36791e59; 
@property(readonly, assign, nonatomic) NSSet *compatibleMediaTypes;	// G=0x36791df1; 
@property(readonly, assign, nonatomic) NSDictionary *outputSettingsDictionary;	// G=0x36791ef5; @synthesize=_outputSettingsDictionary
@property(readonly, assign, nonatomic) BOOL willYieldCompressedSamples;	// G=0x36791e25; 
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)outputSettingsDictionary exceptionReason:(id *)reason;	// 0x36791a19
+ (unsigned)_validateOutputSettingsDictionary:(id)dictionary compatibilityDescription:(id *)description;	// 0x36791849
+ (id)defaultOutputSettingsForMediaType:(id)mediaType;	// 0x36791c05
+ (id)eligibleOutputSettingsDictionaryKeys;	// 0x36791735
+ (id)outputSettingsWithOutputSettingsDictionary:(id)outputSettingsDictionary;	// 0x367919a1
+ (id)registeredOutputSettingsClasses;	// 0x367916d1
+ (unsigned)validateOutputSettingsDictionary:(id)dictionary;	// 0x36791835
- (id)init;	// 0x36791c89
- (id)initWithOutputSettingsDictionary:(id)outputSettingsDictionary exceptionReason:(id *)reason;	// 0x36791c9d
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)reason;	// 0x36791e8d
// declared property getter: - (id)compatibleMediaTypes;	// 0x36791df1
- (id)copyWithZone:(NSZone *)zone;	// 0x36791d79
- (void)dealloc;	// 0x36791d2d
- (id)description;	// 0x36791d89
// declared property getter: - (BOOL)isCodecAvailableOnCurrentSystem;	// 0x36791e59
// declared property getter: - (id)outputSettingsDictionary;	// 0x36791ef5
- (BOOL)validateUsingOutputSettingsValidator:(id)validator reason:(id *)reason;	// 0x36791ec1
// declared property getter: - (BOOL)willYieldCompressedSamples;	// 0x36791e25
@end

