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
+ (BOOL)archiveRootObject:(id)object toFile:(id)file;	// 0x324528c9
+ (id)archivedDataWithRootObject:(id)rootObject;	// 0x32453e95
+ (id)classNameEncodedForTrueClassName:(id)trueClassName;	// 0x32453101
+ (void)encodeClassName:(id)name intoClassName:(id)name2;	// 0x32452d3d
+ (void)initialize;	// 0x324528f5
- (id)initForWritingWithMutableData:(id)mutableData;	// 0x32455225
- (id)archiverData;	// 0x32452741
- (id)classNameEncodedForTrueClassName:(id)trueClassName;	// 0x324530b9
- (id)data;	// 0x32452751
- (void)dealloc;	// 0x32452bb1
- (void)encodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(const void *)at;	// 0x32453ad9
- (void)encodeBytes:(const void *)bytes length:(unsigned)length;	// 0x32452fd1
- (void)encodeClassName:(id)name intoClassName:(id)name2;	// 0x32452ce1
- (void)encodeConditionalObject:(id)object;	// 0x32453df1
- (void)encodeDataObject:(id)object;	// 0x32453c59
- (void)encodeObject:(id)object;	// 0x32453371
- (void)encodeRootObject:(id)object;	// 0x32453d25
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x32455321
- (void)encodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x32453a81
- (void)finalize;	// 0x32452b29
- (void)replaceObject:(id)object withObject:(id)object2;	// 0x32452d8d
- (int)versionForClassName:(id)className;	// 0x32452e01
@end

