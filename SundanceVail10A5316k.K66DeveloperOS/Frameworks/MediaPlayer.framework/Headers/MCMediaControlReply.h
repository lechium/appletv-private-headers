/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MCMediaControlClientRemote;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MCMediaControlReply : NSObject {
@private
	MCMediaControlClientRemote *_client;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_completionQueue;	// 8 = 0x8
	id _completionBlock;	// 12 = 0xc
	BOOL _replySent;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_queue;	// 20 = 0x14
	NSObject<OS_dispatch_source> *_source;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) unsigned receivePort;	// G=0x348ad279; 
- (id)init;	// 0x348acf91
- (id)initWithClient:(id)client completionQueue:(id)queue completionBlock:(id)block;	// 0x348acfe1
- (void)_sendReplyWithDictionary:(id)dictionary;	// 0x348ad771
- (void)_sendReplyWithErrorCode:(unsigned)errorCode;	// 0x348ad665
- (void)_sendReplyWithErrorCode:(unsigned)errorCode picData:(id)data playerGUID:(id)guid;	// 0x348ad28d
- (void)_sendReplyWithErrorCode:(unsigned)errorCode playbackInfo:(id)info;	// 0x348ad821
- (void)_sendReplyWithErrorCode:(unsigned)errorCode position:(float)position duration:(float)duration;	// 0x348ad425
- (void)_sendReplyWithErrorCode:(unsigned)errorCode volume:(float)volume;	// 0x348ad549
- (void)dealloc;	// 0x348ad1e5
// declared property getter: - (unsigned)receivePort;	// 0x348ad279
@end

