/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSOperationQueue : NSObject {
@private
	id _private;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
}
@property(assign) int maxConcurrentOperationCount;	// G=0x31094431; S=0x31035e65; converted property
@property(retain) id name;	// G=0x310945b9; S=0x31094641; converted property
@property(assign) BOOL overcommitsOperations;	// G=0x31094555; S=0x3109457d; converted property
@property(assign, getter=isSuspended) BOOL suspended;	// G=0x310944ed; S=0x3104e031; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31093a81
+ (id)currentQueue;	// 0x3100452d
+ (id)mainQueue;	// 0x31004579
- (id)init;	// 0x3100db75
- (id)__;	// 0x31094bdd
- (void)__:(id)_;	// 0x3109484d
- (void)addOperation:(id)operation;	// 0x3101098d
- (void)addOperationWithBlock:(id)block;	// 0x310442b5
- (void)addOperations:(id)operations waitUntilFinished:(BOOL)finished;	// 0x3109421d
- (void)cancelAllOperations;	// 0x31045b01
- (void)dealloc;	// 0x3104c7e5
- (id)description;	// 0x310947dd
// converted property getter: - (BOOL)isSuspended;	// 0x310944ed
// converted property getter: - (int)maxConcurrentOperationCount;	// 0x31094431
// converted property getter: - (id)name;	// 0x310945b9
- (unsigned)operationCount;	// 0x310943e9
- (id)operations;	// 0x3104dd59
// converted property getter: - (BOOL)overcommitsOperations;	// 0x31094555
// converted property setter: - (void)setMaxConcurrentOperationCount:(int)count;	// 0x31035e65
// converted property setter: - (void)setName:(id)name;	// 0x31094641
// converted property setter: - (void)setOvercommitsOperations:(BOOL)operations;	// 0x3109457d
// converted property setter: - (void)setSuspended:(BOOL)suspended;	// 0x3104e031
- (void)waitUntilAllOperationsAreFinished;	// 0x3104cb01
@end

