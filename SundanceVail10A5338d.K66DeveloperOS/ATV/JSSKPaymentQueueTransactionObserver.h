/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SKPaymentTransactionObserver.h"

@class SKPaymentQueue, ATVJSContext, NSMutableSet;

__attribute__((visibility("hidden")))
@interface JSSKPaymentQueueTransactionObserver : XXUnknownSuperclass <SKPaymentTransactionObserver> {
	ATVJSContext *_atvContext;	// 4 = 0x4
	NSMutableSet *_jsObservers;	// 8 = 0x8
	SKPaymentQueue *_paymentQueue;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) SKPaymentQueue *paymentQueue;	// G=0x14e731; @synthesize=_paymentQueue
- (id)initWithContext:(id)context thisObject:(OpaqueJSValue *)object;	// 0x14e091
- (void)_callObserversUsingFunctionName:(id)name withOptionalArgument:(id)optionalArgument;	// 0x14e3f5
- (void)addJSObserver:(OpaqueJSValue *)observer context:(OpaqueJSContext *)context;	// 0x14e1c1
- (void)dealloc;	// 0x14e149
// declared property getter: - (id)paymentQueue;	// 0x14e731
- (void)paymentQueue:(id)queue removedTransactions:(id)transactions;	// 0x14e679
- (void)paymentQueue:(id)queue restoreCompletedTransactionsFailedWithError:(id)error;	// 0x14e6f9
- (void)paymentQueue:(id)queue updatedTransactions:(id)transactions;	// 0x14e5f9
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)finished;	// 0x14e715
- (void)removeJSObserver:(OpaqueJSValue *)observer context:(OpaqueJSContext *)context;	// 0x14e2dd
@end
