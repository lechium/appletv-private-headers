/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "RequestQueueOperation.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface LoadMicroPaymentProductsOperation : RequestQueueOperation {
@private
	NSArray *_invalidIdentifiers;	// 80 = 0x50
	NSArray *_productIdentifiers;	// 84 = 0x54
	NSArray *_products;	// 88 = 0x58
}
@property(retain) NSArray *invalidIdentifiers;	// G=0x303fd5cd; S=0x303fd5e1; @synthesize=_invalidIdentifiers
@property(retain) NSArray *productIdentifiers;	// G=0x303fd605; S=0x303fd619; @synthesize=_productIdentifiers
@property(retain) NSArray *products;	// G=0x303fd63d; S=0x303fd651; @synthesize=_products
- (int)_bagType;	// 0x303fccc9
- (void)_clientStoppedNotification:(id)notification;	// 0x303fcc19
- (id)_copyQueryStringDictionaryForApplication:(id)application productIdentifiers:(id)identifiers;	// 0x303fd0a1
- (id)_copyResponseForApplication:(id)application identifiers:(id)identifiers returningError:(id *)error;	// 0x303fce99
- (id)_getApplicationWithError:(id *)error;	// 0x303fccfd
- (int)_getBatchSizeWithError:(id *)error;	// 0x303fcd89
- (BOOL)_loadResponseForApplication:(id)application batchSize:(int)size returningError:(id *)error;	// 0x303fd30d
- (id)copyResponseDictionary;	// 0x303fc8a9
- (void)dealloc;	// 0x303fc7f5
// declared property getter: - (id)invalidIdentifiers;	// 0x303fd5cd
// declared property getter: - (id)productIdentifiers;	// 0x303fd605
// declared property getter: - (id)products;	// 0x303fd63d
- (void)run;	// 0x303fca75
// declared property setter: - (void)setInvalidIdentifiers:(id)identifiers;	// 0x303fd5e1
// declared property setter: - (void)setProductIdentifiers:(id)identifiers;	// 0x303fd619
// declared property setter: - (void)setProducts:(id)products;	// 0x303fd651
@end

