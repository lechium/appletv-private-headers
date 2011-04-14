/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EBWorkbook : NSObject {
}
+ (ChVector<OcText> *)createSheetNamesFromWorkbook:(id)workbook;	// 0x31adc815
+ (void)readDocumentPresentation:(id)presentation state:(id)state;	// 0x319dc5a5
+ (void)readDocumentProperties:(id)properties state:(id)state;	// 0x319dc3c5
+ (id)readWithState:(id)state reader:(id)reader fileName:(id)name temporaryDirectory:(id)directory asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x319daf21
+ (void)setupProcessors:(id)processors;	// 0x319dc335
+ (int)xlSheetTypeEnumFromEDSheet:(id)edsheet;	// 0x31adc7b1
@end

