/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import "NSObject.h"
#import "ISStoreURLOperationDelegate.h"


@protocol MZKeyValueStoreOperationDelegate <ISStoreURLOperationDelegate, NSObject>
- (void)keyValueStoreOperation:(id)operation scheduleURLOperation:(id)operation2;
- (void)keyValueStoreOperationOperationDidFinish:(id)keyValueStoreOperationOperation;
@end
