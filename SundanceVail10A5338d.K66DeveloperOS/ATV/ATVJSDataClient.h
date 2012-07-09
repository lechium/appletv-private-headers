/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDataClient.h"
#import "AppleTV-Structs.h"

@class ATVMerchant, ATVJSContext, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ATVJSDataClient : ATVDataClient {
	ATVMerchant *_merchant;	// 4 = 0x4
	ATVJSContext *_jsContext;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_jsContextAccessQueue;	// 12 = 0xc
	NSObject<OS_dispatch_source> *_jsContextPurgeTimer;	// 16 = 0x10
}
@property(retain, nonatomic) ATVJSContext *jsContext;	// G=0x3aae59; S=0x3aae69; @synthesize=_jsContext
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *jsContextAccessQueue;	// G=0x3aae91; S=0x3aaea1; @synthesize=_jsContextAccessQueue
@property(retain, nonatomic) NSObject<OS_dispatch_source> *jsContextPurgeTimer;	// G=0x3aaec9; S=0x3aaed9; @synthesize=_jsContextPurgeTimer
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x3aae21; S=0x3aae31; @synthesize=_merchant
+ (id)dataPropertyToFeedProperty:(id)feedProperty;	// 0x3a9245
+ (id)dataTypeFromFeedType:(id)feedType;	// 0x3a9181
+ (id)dataTypeToFeedType:(id)feedType;	// 0x3a907d
- (id)initWithMerchant:(id)merchant;	// 0x3a936d
- (void).cxx_destruct;	// 0x3aaf01
- (void)_accessJSContextWithSuccessBlock:(id)successBlock failureBlock:(id)block;	// 0x3aa1c5
- (id)_makeJSContext;	// 0x3aa675
- (id)_queryDictionaryForQuery:(id)query;	// 0x3aa929
- (void)concreteDataClientConnect;	// 0x3a95f9
- (void)concreteDataClientDisconnect;	// 0x3a960d
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x3a9739
- (id)imageURLWithAsset:(id)asset size:(CGSize)size crop:(BOOL)crop;	// 0x3a9451
// declared property getter: - (id)jsContext;	// 0x3aae59
// declared property getter: - (id)jsContextAccessQueue;	// 0x3aae91
// declared property getter: - (id)jsContextPurgeTimer;	// 0x3aaec9
// declared property getter: - (id)merchant;	// 0x3aae21
- (BOOL)processQueryAsync:(id)async;	// 0x3a9735
// declared property setter: - (void)setJsContext:(id)context;	// 0x3aae69
// declared property setter: - (void)setJsContextAccessQueue:(id)queue;	// 0x3aaea1
// declared property setter: - (void)setJsContextPurgeTimer:(id)timer;	// 0x3aaed9
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x3aae31
@end
