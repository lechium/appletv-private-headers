/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSLocking.h"


__attribute__((visibility("hidden")))
@interface _PFLock : NSObject <NSLocking> {
@private
	int _cd_rc;	// 4 = 0x4
	opaque_pthread_mutex_t _lock;	// 8 = 0x8
	opaque_pthread_t *_owner;	// 52 = 0x34
	unsigned _count;	// 56 = 0x38
}
+ (void)initialize;	// 0x3478bee5
- (id)init;	// 0x34754725
- (void)dealloc;	// 0x3478400d
- (void)finalize;	// 0x347a1d01
- (void)lock;	// 0x3475d7b9
- (BOOL)tryLock;	// 0x34784e89
- (void)unlock;	// 0x3476abd1
@end

