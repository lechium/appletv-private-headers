/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "ISOperationDelegate.h"

@class NSMutableDictionary, NSLock;

__attribute__((visibility("hidden")))
@interface RequestQueue : NSObject <ISOperationDelegate> {
@private
	NSLock *_lock;	// 4 = 0x4
	NSMutableDictionary *_operationsByIdentifier;	// 8 = 0x8
}
- (id)init;	// 0x3040a591
- (void)cancelRequestWithIdentifier:(id)identifier;	// 0x3040a709
- (void)dealloc;	// 0x3040a5f5
- (void)enqueueRequestOperation:(id)operation;	// 0x3040a819
- (void)operation:(id)operation failedWithError:(id)error;	// 0x3040a9f5
- (void)operationFinished:(id)finished;	// 0x3040aac5
- (id)requestOperationForIdentifier:(id)identifier;	// 0x3040a96d
- (void)sendError:(id)error forOperation:(id)operation;	// 0x3040a9ed
- (void)sendResponseForOperation:(id)operation;	// 0x3040a9f1
@end

