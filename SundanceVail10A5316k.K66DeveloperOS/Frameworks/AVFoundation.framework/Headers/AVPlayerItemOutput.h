/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVPlayerItemOutputInternal;

@interface AVPlayerItemOutput : NSObject {
@private
	AVPlayerItemOutputInternal *_outputInternal;	// 4 = 0x4
}
@property(assign, nonatomic) BOOL suppressesPlayerRendering;	// G=0x367abd6d; S=0x367abd69; 
- (id)init;	// 0x367abb91
- (void)_attachToPlayerItem:(id)playerItem;	// 0x367abd91
- (void)_detachFromPlayerItem;	// 0x367abd95
- (void)_setTimebase:(OpaqueCMTimebase *)timebase;	// 0x367abd99
- (id)_weakReference;	// 0x367abd71
- (void)dealloc;	// 0x367abc95
- (XXStruct_pwHToB)itemTimeForHostTime:(double)hostTime;	// 0x367abcf9
- (XXStruct_pwHToB)itemTimeForMachAbsoluteTime:(long long)machAbsoluteTime;	// 0x367abd31
// declared property setter: - (void)setSuppressesPlayerRendering:(BOOL)rendering;	// 0x367abd69
// declared property getter: - (BOOL)suppressesPlayerRendering;	// 0x367abd6d
@end

