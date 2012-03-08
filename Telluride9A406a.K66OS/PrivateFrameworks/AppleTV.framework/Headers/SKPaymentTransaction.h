/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class SKPayment, NSData, NSError, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface SKPaymentTransaction : NSObject {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSError *error;	// G=0x331a7815; 
@property(readonly, assign, nonatomic) SKPaymentTransaction *originalTransaction;	// G=0x331a7859; 
@property(readonly, assign, nonatomic) SKPayment *payment;	// G=0x331a789d; 
@property(readonly, assign, nonatomic) NSDate *transactionDate;	// G=0x331a78e1; 
@property(readonly, assign, nonatomic) NSString *transactionIdentifier;	// G=0x331a7925; 
@property(readonly, assign, nonatomic) NSData *transactionReceipt;	// G=0x331a7969; 
@property(readonly, assign, nonatomic) int transactionState;	// G=0x331a79ad; 
- (id)init;	// 0x331a7079
- (id)initWithDictionary:(id)dictionary;	// 0x331a70dd
- (id)initWithPayment:(id)payment;	// 0x331a7755
- (id)_transactionIdentifier;	// 0x331a7c79
- (BOOL)canMergeWithTransaction:(id)transaction;	// 0x331a79cd
- (void)dealloc;	// 0x331a77c1
// declared property getter: - (id)error;	// 0x331a7815
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x3319fded
- (id)matchingIdentifier;	// 0x331a7aa1
- (BOOL)mergeWithTransaction:(id)transaction;	// 0x331a7ad1
// declared property getter: - (id)originalTransaction;	// 0x331a7859
// declared property getter: - (id)payment;	// 0x331a789d
// declared property getter: - (id)transactionDate;	// 0x331a78e1
// declared property getter: - (id)transactionIdentifier;	// 0x331a7925
// declared property getter: - (id)transactionReceipt;	// 0x331a7969
// declared property getter: - (int)transactionState;	// 0x331a79ad
@end

