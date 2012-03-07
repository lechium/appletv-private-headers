/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVAudioBuffer : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(readonly, assign) int bytesCapacity;	// G=0x314b7bb1; 
@property(assign) int bytesDataSize;	// G=0x314b7bc5; S=0x314b7bd9; 
@property(readonly, assign) int channels;	// G=0x314b7b9d; 
@property(readonly, assign) void *data;	// G=0x314b7bf5; 
@property(readonly, assign) int packetDescriptionCapacity;	// G=0x314b7c09; 
@property(readonly, assign) int packetDescriptionCount;	// G=0x314b7c1d; 
@property(readonly, assign) AudioStreamPacketDescription *packetDescriptions;	// G=0x314b7c31; 
- (id)initWithAudioQueueBuffer:(MyAudioQueueBuffer *)audioQueueBuffer channels:(int)channels;	// 0x314b80c9
// declared property getter: - (int)bytesCapacity;	// 0x314b7bb1
// declared property getter: - (int)bytesDataSize;	// 0x314b7bc5
// declared property getter: - (int)channels;	// 0x314b7b9d
// declared property getter: - (void *)data;	// 0x314b7bf5
- (void)dealloc;	// 0x314b8075
- (void)finalize;	// 0x314b8021
// declared property getter: - (int)packetDescriptionCapacity;	// 0x314b7c09
// declared property getter: - (int)packetDescriptionCount;	// 0x314b7c1d
// declared property getter: - (AudioStreamPacketDescription *)packetDescriptions;	// 0x314b7c31
// declared property setter: - (void)setBytesDataSize:(int)size;	// 0x314b7bd9
- (void)setPacketDescriptions:(const AudioStreamPacketDescription *)descriptions count:(int)count;	// 0x314b7fd5
@end
