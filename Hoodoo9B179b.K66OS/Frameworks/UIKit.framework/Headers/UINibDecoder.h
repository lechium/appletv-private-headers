/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSCoder.h> // Unknown library

@class UINibStringIDTable;

__attribute__((visibility("hidden")))
@interface UINibDecoder : NSCoder {
@private
	Class arrayClass;	// 4 = 0x4
	Class setClass;	// 8 = 0x8
	Class dictionaryClass;	// 12 = 0xc
	Class *classes;	// 16 = 0x10
	id *missingClasses;	// 20 = 0x14
	UINibDecoderObjectEntry *objects;	// 24 = 0x18
	UINibDecoderValue *values;	// 28 = 0x1c
	char *valueTypes;	// 32 = 0x20
	void *valueData;	// 36 = 0x24
	unsigned long valueDataSize;	// 40 = 0x28
	UINibDecoderHeader header;	// 44 = 0x2c
	id *objectsByObjectID;	// 96 = 0x60
	unsigned *longObjectClassIDs;	// 100 = 0x64
	char *shortObjectClassIDs;	// 104 = 0x68
	unsigned *keyMasks;	// 108 = 0x6c
	long inlinedValueKey;	// 112 = 0x70
	UINibDecoderRecursiveState recursiveState;	// 116 = 0x74
	UINibStringIDTable *keyIDTable;	// 132 = 0x84
	id delegate;	// 136 = 0x88
	UIKeyToKeyIDCache keyIDCache;	// 140 = 0x8c
	UIKeyAndScopeToValueCache valueCache;	// 728 = 0x2d8
	int lookupRounds;	// 740 = 0x2e4
	int maxPossibleLookupRounds;	// 744 = 0x2e8
	int failedByKeyMask;	// 748 = 0x2ec
	int savedByKeyMask;	// 752 = 0x2f0
}
@property(assign) id delegate;	// G=0x331a2d3d; S=0x331a2d4d; @synthesize
+ (id)unarchiveObjectWithData:(id)data;	// 0x331a1189
+ (id)unarchiveObjectWithFile:(id)file;	// 0x331a1219
- (id)initForReadingWithData:(id)data;	// 0x3319fea9
- (id)initForReadingWithData:(id)data error:(id *)error;	// 0x3319fd29
- (BOOL)allowsKeyedCoding;	// 0x331a133d
- (BOOL)containsValueForKey:(id)key;	// 0x331a1341
- (void)dealloc;	// 0x3319febd
- (BOOL)decodeArrayOfCGFloats:(float *)cgfloats count:(int)count forKey:(id)key;	// 0x331a2369
- (BOOL)decodeArrayOfDoubles:(double *)doubles count:(int)count forKey:(id)key;	// 0x331a229d
- (BOOL)decodeArrayOfFloats:(float *)floats count:(int)count forKey:(id)key;	// 0x331a21d5
- (void)decodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(void *)at;	// 0x331a2b91
- (BOOL)decodeBoolForKey:(id)key;	// 0x331a1d5d
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x331a1cc5
- (void *)decodeBytesWithReturnedLength:(unsigned *)returnedLength;	// 0x331a2c0d
- (CGAffineTransform)decodeCGAffineTransformForKey:(id)key;	// 0x331a2565
- (CGPoint)decodeCGPointForKey:(id)key;	// 0x331a2431
- (CGRect)decodeCGRectForKey:(id)key;	// 0x331a24f1
- (CGSize)decodeCGSizeForKey:(id)key;	// 0x331a2491
- (id)decodeDataObject;	// 0x331a29dd
- (double)decodeDoubleForKey:(id)key;	// 0x331a1eb9
- (float)decodeFloatForKey:(id)key;	// 0x331a1e11
- (int)decodeInt32ForKey:(id)key;	// 0x331a2135
- (long long)decodeInt64ForKey:(id)key;	// 0x331a1f41
- (int)decodeIntForKey:(id)key;	// 0x331a2095
- (int)decodeIntegerForKey:(id)key;	// 0x331a1ff5
- (id)decodeNXObject;	// 0x331a295d
- (id)decodeObject;	// 0x331a2a5d
- (id)decodeObjectForKey:(id)key;	// 0x331a14b5
- (id)decodePropertyList;	// 0x331a2a89
- (UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)key;	// 0x331a25cd
- (void)decodeValueOfObjCType:(const char *)objCType at:(void *)at;	// 0x331a2641
- (void)decodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x331a2b09
// declared property getter: - (id)delegate;	// 0x331a2d3d
- (void)finishDecoding;	// 0x331a2cbd
- (id)nextGenericKey;	// 0x331a127d
- (void)replaceObject:(id)object withObject:(id)object2;	// 0x331a12c1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x331a2d4d
- (unsigned)systemVersion;	// 0x331a2c8d
- (BOOL)validateAndIndexClasses:(const void *)classes length:(unsigned long)length;	// 0x331a038d
- (BOOL)validateAndIndexData:(id)data error:(id *)error;	// 0x331a0091
- (BOOL)validateAndIndexKeys:(const void *)keys length:(unsigned long)length;	// 0x331a0fd5
- (BOOL)validateAndIndexObjects:(const void *)objects length:(unsigned long)length;	// 0x331a0911
- (BOOL)validateAndIndexValues:(const void *)values length:(unsigned long)length;	// 0x331a0c25
- (int)versionForClassName:(id)className;	// 0x331a2c95
@end

