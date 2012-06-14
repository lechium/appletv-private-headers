/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSTemporaryObjectID.h"

@class _NS128bitWrapper;

__attribute__((visibility("hidden")))
@interface _NSTemporaryObjectID2 : NSTemporaryObjectID {
@private
	id _store;	// 16 = 0x10
	_NS128bitWrapper *_uuid128;	// 20 = 0x14
}
+ (id)initWithEntity:(id)entity andUUIDString:(id)string;	// 0x36311f8d
- (BOOL)_isPersistentStoreAlive;	// 0x36311669
- (id)_referenceData;	// 0x36311681
- (void)_setPersistentStore:(id)store;	// 0x3631215d
- (id)_storeIdentifier;	// 0x363121a5
- (void)dealloc;	// 0x36312249
- (void)finalize;	// 0x36311655
- (unsigned)hash;	// 0x363121c5
- (BOOL)isEqual:(id)equal;	// 0x363120f1
- (id)persistentStore;	// 0x36311659
@end
