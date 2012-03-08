/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABBlip : NSObject {
}
+ (int)blipTypeForBlipSignature:(int)blipSignature;	// 0x329663ed
+ (id)compressMetafileData:(id)data info:(EshMetafileBlipInfo *)info;	// 0x32b17bd5
+ (id)delayedSubBlipWithMetafileInfo:(const EshMetafileBlipInfo *)metafileInfo;	// 0x32966171
+ (id)dibFileContentsWithDibBlipData:(const OcBinaryData *)dibBlipData;	// 0x32b17441
+ (id)readBlipFromBse:(id)bse;	// 0x328da339
+ (id)readBlipFromEshBlip:(EshBlip *)eshBlip;	// 0x328da425
+ (void)setMetafileBoundsFromPictData:(id)pictData info:(EshMetafileBlipInfo *)info;	// 0x32b1743d
+ (id)subBlipWithMetafileInfo:(const EshMetafileBlipInfo *)metafileInfo;	// 0x32b17981
+ (EshBlip *)writeBlip:(id)blip;	// 0x32b17559
+ (void)writeBlip:(id)blip toBlipStoreEntry:(EshBSE *)blipStoreEntry;	// 0x32b17895
+ (void)writeEmptyBlipStoreEntry:(EshBSE *)entry;	// 0x32b17539
@end

