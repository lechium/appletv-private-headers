/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoder.h"


@interface NSArchiver : NSCoder {
@private
	void *mdata;	// 4 = 0x4
	void *pointerTable;	// 8 = 0x8
	void *stringTable;	// 12 = 0xc
	void *ids;	// 16 = 0x10
	void *map;	// 20 = 0x14
	void *replacementTable;	// 24 = 0x18
	void *reserved;	// 28 = 0x1c
}
+ (BOOL)archiveRootObject:(id)object toFile:(id)file;	// 0x31a3bd69
+ (id)archivedDataWithRootObject:(id)rootObject;	// 0x31a0d249
+ (id)classNameEncodedForTrueClassName:(id)trueClassName;	// 0x31a3b7f5
+ (void)encodeClassName:(id)name intoClassName:(id)name2;	// 0x31a0d1f5
+ (void)initialize;	// 0x31a0d1c1
- (id)initForWritingWithMutableData:(id)mutableData;	// 0x31a0d441
- (id)archiverData;	// 0x31a3b6cd
- (id)classNameEncodedForTrueClassName:(id)trueClassName;	// 0x31a3bdf9
- (id)data;	// 0x31a3b6dd
- (void)dealloc;	// 0x31a0e665
- (void)encodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(const void *)at;	// 0x31a3b8bd
- (void)encodeBytes:(const void *)bytes length:(unsigned)length;	// 0x31a3bb81
- (void)encodeClassName:(id)name intoClassName:(id)name2;	// 0x31a3bd95
- (void)encodeConditionalObject:(id)object;	// 0x31a3bcbd
- (void)encodeDataObject:(id)object;	// 0x31a3bbed
- (void)encodeObject:(id)object;	// 0x31a0d709
- (void)encodeRootObject:(id)object;	// 0x31a0d631
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x31a0dc8d
- (void)encodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x31a3b861
- (void)finalize;	// 0x31a3b6f1
- (void)replaceObject:(id)object withObject:(id)object2;	// 0x31a3b78d
- (int)versionForClassName:(id)className;	// 0x31a3b841
@end

