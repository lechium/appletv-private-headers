/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMutableArray, NSDictionary, NSTimer;

@interface VSCacheUpdateListener : NSObject {
	NSLock *_lock;	// 4 = 0x4
	NSMutableArray *_updateRequestQueue;	// 8 = 0x8
	NSDictionary *_dataProviders;	// 12 = 0xc
	NSTimer *_flushTimer;	// 16 = 0x10
	BOOL _isListening;	// 20 = 0x14
}
+ (id)sharedListener;	// 0x311c8659
+ (id)sharedListenerIfExists;	// 0x311c85a5
- (id)init;	// 0x311c85a1
- (void)_enqueueRequest:(id)request;	// 0x311c87e5
- (void)_flush;	// 0x311c8685
- (id)_initShared;	// 0x311c8dad
- (void)_spokenLanguageChanged:(id)changed;	// 0x311c8b05
- (void)dealloc;	// 0x311c85d5
- (void)performUpdateForModelIdentifier:(id)modelIdentifier classIdentifier:(id)identifier;	// 0x311c8b19
- (void)startListening;	// 0x311c8c91
- (void)stopListening;	// 0x311c8b81
@end

