/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSTemporaryObjectID.h"

@class _NS128bitWrapper;

@interface _NSTemporaryObjectID2 : NSTemporaryObjectID {
	id _store;	// 16 = 0x10
	_NS128bitWrapper *_uuid128;	// 20 = 0x14
}
+ (id)initWithEntity:(id)entity andUUIDString:(id)string;	// 0x36318219
- (BOOL)_isPersistentStoreAlive;	// 0x363184c1
- (id)_referenceData;	// 0x36318585
- (void)_setPersistentStore:(id)store;	// 0x363184d9
- (id)_storeIdentifier;	// 0x36318491
- (void)dealloc;	// 0x36318389
- (void)finalize;	// 0x3631840d
- (unsigned)hash;	// 0x36318411
- (BOOL)isEqual:(id)equal;	// 0x3631851d
- (id)persistentStore;	// 0x363184b1
@end
