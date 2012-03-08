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
+ (id)initWithEntity:(id)entity andUUIDString:(id)string;	// 0x32bc2f8d
- (BOOL)_isPersistentStoreAlive;	// 0x32bc2669
- (id)_referenceData;	// 0x32bc2681
- (void)_setPersistentStore:(id)store;	// 0x32bc315d
- (id)_storeIdentifier;	// 0x32bc31a5
- (void)dealloc;	// 0x32bc3249
- (void)finalize;	// 0x32bc2655
- (unsigned)hash;	// 0x32bc31c5
- (BOOL)isEqual:(id)equal;	// 0x32bc30f1
- (id)persistentStore;	// 0x32bc2659
@end

