/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <NSObject.h> // Unknown library

@class SKPaymentQueueClient;
@protocol SKRequestDelegate;

@interface SKRequest : NSObject {
	id _requestInternal;	// 4 = 0x4
}
@property(assign, nonatomic) id<SKRequestDelegate> delegate;	// G=0x3511ec51; S=0x3511ec71; 
@property(copy, nonatomic) SKPaymentQueueClient *paymentQueueClient;	// G=0x3511ecf5; S=0x3511ed39; 
- (id)init;	// 0x3511eaf1
- (void)_beginBackgroundTask;	// 0x3511eed5
- (void)_endBackgroundTask;	// 0x3511efa5
- (void)_sendXPCMessage;	// 0x3511ed89
- (void)_shutdownRequest;	// 0x3511ed8d
- (void)_startWithMessage:(id)message replyBlock:(id)block;	// 0x3511edf9
- (void)cancel;	// 0x3511ebc1
- (void)dealloc;	// 0x3511eb75
// declared property getter: - (id)delegate;	// 0x3511ec51
// declared property getter: - (id)paymentQueueClient;	// 0x3511ecf5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3511ec71
// declared property setter: - (void)setPaymentQueueClient:(id)client;	// 0x3511ed39
- (void)start;	// 0x3511ec91
@end

