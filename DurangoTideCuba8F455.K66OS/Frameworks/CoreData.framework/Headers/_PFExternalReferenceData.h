/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSData.h> // Unknown library
#import "CoreData-Structs.h"


__attribute__((visibility("hidden")))
@interface _PFExternalReferenceData : NSData {
@private
	NSData *_originalData;	// 4 = 0x4
	void *_bytesPtrForStore;	// 8 = 0x8
	unsigned _bytesLengthForStore;	// 12 = 0xc
	void *_bytesPtrForExternalReference;	// 16 = 0x10
	unsigned _bytesLengthForExternalReference;	// 20 = 0x14
	externalDataFlags _externalDataFlags;	// 24 = 0x18
}
+ (BOOL)_releaseReservedMapFileDescriptor;	// 0x33f04155
+ (BOOL)_reserveMapFileDescriptor;	// 0x33f0416d
+ (BOOL)_updateFileDescriptorsInUseReserveNew:(BOOL)useReserveNew;	// 0x33f04a9d
- (id)initForExternalLocation:(id)externalLocation data:(id)data;	// 0x33f04dc5
- (id)initWithStoreBytes:(const void *)storeBytes length:(unsigned)length;	// 0x33f04cbd
- (void)_attemptToMapData;	// 0x33f04089
- (unsigned)_bytesLengthForExternalReference;	// 0x33f03ee1
- (unsigned)_bytesLengthForStore;	// 0x33f03ed1
- (const void *)_bytesPtrForExternalReference;	// 0x33f03f31
- (const void *)_bytesPtrForStore;	// 0x33f03ec1
- (void)_deleteExternalReferenceFromPermanentLocation;	// 0x33f04021
- (BOOL)_isEqualHelper:(id)helper;	// 0x33f046dd
- (void)_moveExternalReferenceToPermanentLocation;	// 0x33f04885
- (id)_originalData;	// 0x33f03e8d
- (const void *)_retrieveExternalData;	// 0x33f04985
- (void)_setBytesForExternalReference:(const void *)externalReference;	// 0x33f03e9d
- (void)_writeExternalReferenceToInterimLocation;	// 0x33f04055
- (const void *)bytes;	// 0x33f03f59
- (id)copy;	// 0x33f04141
- (void)dealloc;	// 0x33f047b5
- (id)description;	// 0x33f03f6d
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x33f04ae1
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x33f04b15
- (BOOL)hasExternalReferenceContent;	// 0x33f03ead
- (BOOL)isEqual:(id)equal;	// 0x33f03ef1
- (BOOL)isEqualToData:(id)data;	// 0x33f04499
- (unsigned)length;	// 0x33f03f45
- (id)mutableCopy;	// 0x33f040f5
- (id)subdataWithRange:(NSRange)range;	// 0x33f045f1
@end
