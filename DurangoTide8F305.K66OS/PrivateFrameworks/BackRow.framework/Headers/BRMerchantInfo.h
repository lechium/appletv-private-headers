/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSString, BRImage, NSDictionary;

@interface BRMerchantInfo : NSObject {
@private
	NSDictionary *_vendorBag;	// 4 = 0x4
	BOOL _enabled;	// 8 = 0x8
	NSString *featureName;	// 12 = 0xc
	NSDictionary *metadata;	// 16 = 0x10
	NSDictionary *resources;	// 20 = 0x14
}
@property(assign) BOOL enabled;	// G=0x32a2b0e1; S=0x32a2b04d; @dynamic
@property(retain) NSString *featureName;	// G=0x32a2b465; S=0x32a2b3e9; @synthesize
@property(readonly, assign, nonatomic) BRImage *menuIcon;	// G=0x32a2afd9; 
@property(readonly, assign, nonatomic) NSString *menuTitle;	// G=0x32a2b031; 
@property(retain, nonatomic) NSDictionary *metadata;	// G=0x32a2ae9d; S=0x32a2b415; @synthesize
@property(retain, nonatomic) NSDictionary *resources;	// G=0x32a2ae8d; S=0x32a2b43d; @synthesize
@property(readonly, assign, nonatomic) NSString *rootURL;	// G=0x32a2afbd; 
@property(readonly, assign, nonatomic) NSString *topShelfURL;	// G=0x32a2afa1; 
+ (id)infoWithMerchantIdentifier:(id)merchantIdentifier;	// 0x32a2b281
+ (id)infoWithVendorBag:(id)vendorBag;	// 0x32a2b2b5
- (id)initWithMerchantIdentifier:(id)merchantIdentifier;	// 0x32a2b2e9
- (id)initWithVendorBag:(id)vendorBag;	// 0x32a2b1e5
- (void)_rehydrateDictionaries;	// 0x32a2aead
- (void)_rehydrateDictionary:(id)dictionary forProperty:(id)property;	// 0x32a2aee9
- (void)dealloc;	// 0x32a2b179
// declared property getter: - (BOOL)enabled;	// 0x32a2b0e1
// declared property getter: - (id)featureName;	// 0x32a2b465
// declared property getter: - (id)menuIcon;	// 0x32a2afd9
// declared property getter: - (id)menuTitle;	// 0x32a2b031
// declared property getter: - (id)metadata;	// 0x32a2ae9d
// declared property getter: - (id)resources;	// 0x32a2ae8d
// declared property getter: - (id)rootURL;	// 0x32a2afbd
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x32a2b04d
// declared property setter: - (void)setFeatureName:(id)name;	// 0x32a2b3e9
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x32a2b415
// declared property setter: - (void)setResources:(id)resources;	// 0x32a2b43d
// declared property getter: - (id)topShelfURL;	// 0x32a2afa1
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x32a2b159
@end
