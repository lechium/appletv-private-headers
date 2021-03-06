/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVOutputSettings.h"

@class NSDictionary;

@interface AVVideoOutputSettings : AVOutputSettings {
}
@property(readonly, assign, nonatomic) BOOL dimensionsAreBoundingBox;	// G=0x3691d241; 
@property(readonly, assign, nonatomic) int height;	// G=0x3691d101; 
@property(readonly, assign, nonatomic) NSDictionary *pixelTransferProperties;	// G=0x3691d135; 
@property(readonly, assign, nonatomic) NSDictionary *videoSettingsDictionary;	// G=0x3691d0bd; 
@property(readonly, assign, nonatomic) int width;	// G=0x3691d0cd; 
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)outputSettingsDictionary exceptionReason:(id *)reason;	// 0x3691cee1
+ (id)_validValuesForScalingMode;	// 0x3691ce05
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x3691d01d
+ (id)defaultVideoOutputSettings;	// 0x3691d061
+ (id)registeredOutputSettingsClasses;	// 0x3691ce7d
+ (id)videoOutputSettingsWithTrustedVideoSettingsDictionary:(id)trustedVideoSettingsDictionary;	// 0x3691cf69
+ (id)videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary;	// 0x3691cef1
- (id)initWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x3691d081
- (id)compatibleMediaTypes;	// 0x3691d091
// declared property getter: - (BOOL)dimensionsAreBoundingBox;	// 0x3691d241
// declared property getter: - (int)height;	// 0x3691d101
// declared property getter: - (id)pixelTransferProperties;	// 0x3691d135
- (BOOL)validateUsingOutputSettingsValidator:(id)validator reason:(id *)reason;	// 0x3691d29d
// declared property getter: - (id)videoSettingsDictionary;	// 0x3691d0bd
// declared property getter: - (int)width;	// 0x3691d0cd
@end

