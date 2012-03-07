/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class MCMediaControlClientRemote;

@interface MCMediaControlReply : NSObject {
@private
	MCMediaControlClientRemote *_client;	// 4 = 0x4
	dispatch_queue_s *_completionQueue;	// 8 = 0x8
	id _completionBlock;	// 12 = 0xc
	BOOL _replySent;	// 16 = 0x10
	dispatch_queue_s *_queue;	// 20 = 0x14
	dispatch_source_s *_source;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) unsigned receivePort;	// G=0x34e5fd91; 
- (id)init;	// 0x34e5faa1
- (id)initWithClient:(id)client completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x34e5faf1
- (void)_sendReplyWithDictionary:(id)dictionary;	// 0x34e60285
- (void)_sendReplyWithErrorCode:(unsigned)errorCode;	// 0x34e60179
- (void)_sendReplyWithErrorCode:(unsigned)errorCode picData:(id)data playerGUID:(id)guid;	// 0x34e5fda5
- (void)_sendReplyWithErrorCode:(unsigned)errorCode playbackInfo:(id)info;	// 0x34e60339
- (void)_sendReplyWithErrorCode:(unsigned)errorCode position:(float)position duration:(float)duration;	// 0x34e5ff39
- (void)_sendReplyWithErrorCode:(unsigned)errorCode volume:(float)volume;	// 0x34e6005d
- (void)dealloc;	// 0x34e5fcfd
// declared property getter: - (unsigned)receivePort;	// 0x34e5fd91
@end
