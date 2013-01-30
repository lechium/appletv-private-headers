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
	ATVJSContext *_jsContext;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_jsContextAccessQueue;	// 8 = 0x8
	NSObject<OS_dispatch_source> *_jsContextPurgeTimer;	// 12 = 0xc
	ATVMerchant *_merchant;	// 16 = 0x10
}
@property(retain, nonatomic) ATVJSContext *jsContext;	// G=0x3d752d; S=0x3d753d; @synthesize=_jsContext
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *jsContextAccessQueue;	// G=0x3d7565; S=0x3d7575; @synthesize=_jsContextAccessQueue
@property(retain, nonatomic) NSObject<OS_dispatch_source> *jsContextPurgeTimer;	// G=0x3d759d; S=0x3d75ad; @synthesize=_jsContextPurgeTimer
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x3d75d5; S=0x3d75e5; @synthesize=_merchant
+ (id)dataPropertyToFeedProperty:(id)feedProperty;	// 0x3d5859
+ (id)dataTypeFromFeedType:(id)feedType;	// 0x3d5795
+ (id)dataTypeToFeedType:(id)feedType;	// 0x3d5691
- (id)initWithMerchant:(id)merchant;	// 0x3d5981
- (void).cxx_destruct;	// 0x3d760d
- (void)_accessJSContextWithSuccessBlock:(id)successBlock failureBlock:(id)block;	// 0x3d68bd
- (id)_makeJSContext;	// 0x3d6d81
- (id)_queryDictionaryForQuery:(id)query;	// 0x3d7035
- (void)concreteDataClientConnect;	// 0x3d5cf1
- (void)concreteDataClientDisconnect;	// 0x3d5d05
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x3d5e31
- (id)imageURLWithAsset:(id)asset size:(CGSize)size crop:(BOOL)crop;	// 0x3d5a65
// declared property getter: - (id)jsContext;	// 0x3d752d
// declared property getter: - (id)jsContextAccessQueue;	// 0x3d7565
// declared property getter: - (id)jsContextPurgeTimer;	// 0x3d759d
// declared property getter: - (id)merchant;	// 0x3d75d5
- (BOOL)processQueryAsync:(id)async;	// 0x3d5e2d
// declared property setter: - (void)setJsContext:(id)context;	// 0x3d753d
// declared property setter: - (void)setJsContextAccessQueue:(id)queue;	// 0x3d7575
// declared property setter: - (void)setJsContextPurgeTimer:(id)timer;	// 0x3d75ad
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x3d75e5
@end
