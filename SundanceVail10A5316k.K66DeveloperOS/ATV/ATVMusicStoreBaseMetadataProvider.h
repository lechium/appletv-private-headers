/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMetadataProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreBaseMetadataProvider : XXUnknownSuperclass <BRMetadataProvider> {
	NSDictionary *_catalogItem;	// 4 = 0x4
	BOOL _useAlternateMetadata;	// 8 = 0x8
}
@property(assign) BOOL useAlternateMetadata;	// G=0x1b59ad; S=0x1b59bd; converted property
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x1b58d1
- (id)initWithCatalogItem:(id)catalogItem;	// 0x1b590d
- (id)controlFactory;	// 0x1b59e9
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x1b59cd
- (id)dataAtIndex:(long)index;	// 0x1b59ed
- (long)dataCount;	// 0x1b59d1
- (void)dealloc;	// 0x1b5961
- (id)hashForDataAtIndex:(long)index;	// 0x1b5a01
- (void)populateMetadataForControl:(id)control;	// 0x1b59fd
// converted property setter: - (void)setUseAlternateMetadata:(BOOL)metadata;	// 0x1b59bd
// converted property getter: - (BOOL)useAlternateMetadata;	// 0x1b59ad
@end

