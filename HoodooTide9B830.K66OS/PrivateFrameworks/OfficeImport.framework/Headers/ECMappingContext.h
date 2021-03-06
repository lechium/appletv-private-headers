/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ECMappingContext : NSObject {
@private
	CFDictionaryRef mIndexToMappedIndex;	// 4 = 0x4
	NSMutableDictionary *mSheetNameToMappedIndex;	// 8 = 0x8
	CFDictionaryRef mObjectToMappingInfo;	// 12 = 0xc
	NSMutableArray *mMappingInfos;	// 16 = 0x10
}
+ (id)mappingContext;	// 0x3133c4a1
- (id)init;	// 0x3133c3cd
- (void)associateMappingInfo:(id)info withSheetName:(id)sheetName andSheetIndex:(unsigned)index andObject:(id)object;	// 0x3133c79d
- (void)dealloc;	// 0x3133c711
- (unsigned)mappedSheetIndexForSheetIndex:(unsigned)sheetIndex;	// 0x3133c5a5
- (unsigned)mappedSheetIndexForSheetName:(id)sheetName;	// 0x3133c561
- (ChVector<OcText> *)mappedSheetNames;	// 0x3133c5c1
- (id)mappingInfoAtIndex:(unsigned)index;	// 0x3133c4e9
- (unsigned)mappingInfoCount;	// 0x3133c52d
- (id)mappingInfoForObject:(id)object;	// 0x3133c54d
@end

