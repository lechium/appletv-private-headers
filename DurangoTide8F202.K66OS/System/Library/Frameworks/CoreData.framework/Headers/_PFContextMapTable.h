/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _PFContextMapTable : NSObject {
@private
	unsigned _slotLimit;	// 4 = 0x4
	CFDictionaryRef _objectsByTemporaryID;	// 8 = 0x8
	CFDictionaryRef *_objectsByPermanentObjectID;	// 12 = 0xc
	CFDictionaryRef *_objectsBy64bitPKID;	// 16 = 0x10
	unsigned *_capacitiesFor64bitPKMappings;	// 20 = 0x14
	contextMapTableFlags _flags;	// 24 = 0x18
}
- (id)initWithWeaksReferences:(BOOL)weaksReferences;	// 0x330f8f79
- (void)_dispose;	// 0x331083c9
- (void)clearTemporaryIDs;	// 0x3311d309
- (void)dealloc;	// 0x3310838d
- (void)finalize;	// 0x3311d091
- (unsigned)getAllObjects:(id *)objects;	// 0x33107f51
- (void)setCapacityHint:(unsigned)hint forSlot:(unsigned)slot;	// 0x3311d0cd
- (void)setForUseWithModel:(id)model;	// 0x330f91b5
@end

