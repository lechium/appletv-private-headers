/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;

@interface ECMappingContext : NSObject {
	CFDictionaryRef mIndexToMappedIndex;	// 4 = 0x4
	NSMutableDictionary *mSheetNameToMappedIndex;	// 8 = 0x8
	CFDictionaryRef mObjectToMappingInfo;	// 12 = 0xc
	NSMutableArray *mMappingInfos;	// 16 = 0x10
}
+ (id)mappingContext;	// 0x37120f71
- (id)init;	// 0x37120ea5
- (void)associateMappingInfo:(id)info withSheetName:(id)sheetName andSheetIndex:(unsigned)index andObject:(id)object;	// 0x37121291
- (void)dealloc;	// 0x37120fb9
- (unsigned)mappedSheetIndexForSheetIndex:(unsigned)sheetIndex;	// 0x371211b9
- (unsigned)mappedSheetIndexForSheetName:(id)sheetName;	// 0x371211d5
- (ChVector<OcText> *)mappedSheetNames;	// 0x37121049
- (id)mappingInfoAtIndex:(unsigned)index;	// 0x37121249
- (unsigned)mappingInfoCount;	// 0x37121229
- (id)mappingInfoForObject:(id)object;	// 0x37121215
@end
