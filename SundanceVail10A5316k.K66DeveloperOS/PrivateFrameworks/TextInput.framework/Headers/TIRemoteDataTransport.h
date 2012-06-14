/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <NSObject.h> // Unknown library

@class NSData, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface TIRemoteDataTransport : NSObject {
@private
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 4 = 0x4
	NSXPCConnection *_connection;	// 8 = 0x8
	id _readyCallback;	// 12 = 0xc
	void *_mem;	// 16 = 0x10
	unsigned long _memSize;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0x31f491b5; 
+ (void)postRequest:(id)request handler:(id)handler;	// 0x31f490ad
+ (void)setDataSource:(id)source forRequestType:(id)requestType;	// 0x31f48c15
+ (void)setUserDictionaryServer:(id)server;	// 0x31f48c51
+ (void)userDictionaryKeepAlive;	// 0x31f48fc5
+ (void)userDictionaryReload;	// 0x31f48f51
+ (void)userDictionarySaveChanges;	// 0x31f49039
- (id)initWithPurpose:(id)purpose ready:(id)ready;	// 0x31f48c89
- (void)_loadDescriptor:(int)descriptor;	// 0x31f490f9
// declared property getter: - (id)data;	// 0x31f491b5
- (void)dealloc;	// 0x31f48eb9
@end

