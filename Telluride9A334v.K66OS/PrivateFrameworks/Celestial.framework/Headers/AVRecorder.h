/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library
#import "Celestial-Structs.h"


@interface AVRecorder : NSObject {
@private
	AVRecorderPrivate *_priv;	// 4 = 0x4
}
@property(retain) id filePath;	// G=0x3504fef1; S=0x3504ff39; converted property
@property(assign) float micVolume;	// G=0x3504fb85; S=0x3504fb65; converted property
- (id)init;	// 0x3504f94d
- (BOOL)activate:(id *)activate;	// 0x3504fcc9
- (id)attributeForKey:(id)key;	// 0x3504fe65
- (BOOL)audioCurrentAverageDecibelLevels:(float *)levels andPeakDecibelLevels:(float *)levels2;	// 0x3504fa85
- (BOOL)audioCurrentAverageVolumeLevels:(float *)levels andPeakVolumeLevels:(float *)levels2;	// 0x3504faad
- (unsigned)audioNumDeviceChannels;	// 0x3504fad5
- (BOOL)autoFocusAtPoint:(CGPoint)point;	// 0x3504fbe1
- (void)deactivate;	// 0x3504fbc1
- (void)dealloc;	// 0x3504ff8d
// converted property getter: - (id)filePath;	// 0x3504fef1
- (void)implNotification:(id)notification;	// 0x3504fded
- (BOOL)isActive;	// 0x3504fc31
- (BOOL)isRecording;	// 0x3504fc59
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x3504f9e5
// converted property getter: - (float)micVolume;	// 0x3504fb85
- (double)recordedDuration;	// 0x3504faf5
- (long long)recordedFileSizeInBytes;	// 0x3504fb35
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x3504fe9d
// converted property setter: - (void)setFilePath:(id)path;	// 0x3504ff39
// converted property setter: - (void)setMicVolume:(float)volume;	// 0x3504fb65
- (BOOL)start;	// 0x3504fca1
- (void)stop;	// 0x3504fc81
- (BOOL)takePhoto;	// 0x3504fc09
@end
