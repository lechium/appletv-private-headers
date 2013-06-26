/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMusicStoreBaseMetadataProvider.h"


__attribute__((visibility("hidden")))
@interface ATVMusicStoreMusicVideoMetadataProvider : ATVMusicStoreBaseMetadataProvider {
}
+ (void)_initializeAbbreviatedTransformers;	// 0x1d8325
+ (void)_initializeDetailedTransformers;	// 0x1d820d
+ (void)_initializeMappings:(id)mappings;	// 0x1d8039
+ (void)initialize;	// 0x1d7d91
- (void)_populateAbbreviatedMetadata:(id)metadata;	// 0x1d83fd
- (void)_populateDetailedMetadata:(id)metadata;	// 0x1d86d9
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x1d7e65
- (void)populateMetadataForControl:(id)control;	// 0x1d7f41
@end
