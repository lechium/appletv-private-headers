/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVMusicStoreBaseMetadataProvider.h"

@class ATVSedonaCatalogItem;

__attribute__((visibility("hidden")))
@interface ATVSedonaTVMetadataProvider : ATVMusicStoreBaseMetadataProvider {
@private
	ATVSedonaCatalogItem *_sedonaItem;	// 12 = 0xc
}
+ (void)_initializeAbbreviatedTransformers;	// 0x3314a319
+ (void)_initializeDetailedTransformers;	// 0x3314a2c5
+ (void)_initializeMappings:(id)mappings;	// 0x33149fe5
+ (void)initialize;	// 0x33149c71
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x33149d35
- (id)init;	// 0x33149d71
- (id)initWithCatalogItem:(id)catalogItem;	// 0x33149d89
- (void)_populateAbbreviatedMetadata:(id)metadata;	// 0x3314a3ad
- (void)_populateDetailedMetadata:(id)metadata;	// 0x3314a541
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x33149e41
- (void)dealloc;	// 0x33149df5
- (void)populateMetadataForControl:(id)control;	// 0x33149ef9
@end
