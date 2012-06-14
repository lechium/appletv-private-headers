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
@property(readonly, assign, nonatomic) BOOL dimensionsAreBoundingBox;	// G=0x36795925; 
@property(readonly, assign, nonatomic) int height;	// G=0x367957e1; 
@property(readonly, assign, nonatomic) NSDictionary *pixelTransferProperties;	// G=0x36795815; 
@property(readonly, assign, nonatomic) NSDictionary *videoSettingsDictionary;	// G=0x3679579d; 
@property(readonly, assign, nonatomic) int width;	// G=0x367957ad; 
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)outputSettingsDictionary exceptionReason:(id *)reason;	// 0x367955c1
+ (id)_validValuesForScalingMode;	// 0x367954e5
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x367956fd
+ (id)defaultVideoOutputSettings;	// 0x36795741
+ (id)registeredOutputSettingsClasses;	// 0x3679555d
+ (id)videoOutputSettingsWithTrustedVideoSettingsDictionary:(id)trustedVideoSettingsDictionary;	// 0x36795649
+ (id)videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary;	// 0x367955d1
- (id)initWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x36795761
- (id)compatibleMediaTypes;	// 0x36795771
// declared property getter: - (BOOL)dimensionsAreBoundingBox;	// 0x36795925
// declared property getter: - (int)height;	// 0x367957e1
// declared property getter: - (id)pixelTransferProperties;	// 0x36795815
- (BOOL)validateUsingOutputSettingsValidator:(id)validator reason:(id *)reason;	// 0x36795981
// declared property getter: - (id)videoSettingsDictionary;	// 0x3679579d
// declared property getter: - (int)width;	// 0x367957ad
@end

