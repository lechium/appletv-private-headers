/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSURL, ATVVendorBag, NSDictionary, NSString;

@interface BRMerchantInfo : NSObject {
@private
	ATVVendorBag *_vendorBag;	// 4 = 0x4
	BOOL _enabled;	// 8 = 0x8
	NSString *_featureName;	// 12 = 0xc
	NSDictionary *metadata;	// 16 = 0x10
	NSDictionary *feedResources;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSDictionary *appDictionary;	// G=0x32a8bf0d; 
@property(readonly, assign, nonatomic) NSString *authType;	// G=0x32a8bc39; 
@property(readonly, assign, nonatomic) NSString *bootstrapResourceURL;	// G=0x32a8bc65; 
@property(readonly, assign, nonatomic) NSString *bootstrapResourceVersion;	// G=0x32a8bc91; 
@property(readonly, assign, nonatomic) int defaultParentalControlsAccessMode;	// G=0x32a8bda1; 
@property(assign) BOOL enabled;	// G=0x32a8b7a9; S=0x32a8b831; 
@property(readonly, assign, nonatomic) BOOL enabledInBag;	// G=0x32a8b8f9; 
@property(retain) NSString *featureName;	// G=0x32a8b711; S=0x32a8b769; 
@property(assign, nonatomic) NSDictionary *feedResources;	// G=0x32a8c049; S=0x32a8c059; @synthesize
@property(readonly, assign, nonatomic) BOOL hasBeenRemoved;	// G=0x32a8b8b5; 
@property(readonly, assign, nonatomic) NSString *javascriptURL;	// G=0x32a8bcbd; 
@property(readonly, assign, nonatomic) NSString *maximumVersion;	// G=0x32a8be7d; 
@property(readonly, assign, nonatomic) NSURL *menuIconURL;	// G=0x32a8ba45; 
@property(readonly, assign, nonatomic) NSString *menuIconURLVersion;	// G=0x32a8bb71; 
@property(readonly, assign, nonatomic) NSString *menuTitle;	// G=0x32a8b9ed; 
@property(readonly, assign, nonatomic) NSString *merchantID;	// G=0x32a8ba25; 
@property(assign, nonatomic) NSDictionary *metadata;	// G=0x32a8c029; S=0x32a8c039; @synthesize
@property(readonly, assign, nonatomic) NSString *minimumRequiredVersion;	// G=0x32a8be39; 
@property(readonly, assign, nonatomic) BOOL pinToMerchant;	// G=0x32a8bf39; 
@property(readonly, assign, nonatomic) float preferredOrder;	// G=0x32a8bce9; 
@property(readonly, assign, nonatomic) NSString *rootURL;	// G=0x32a8bbe1; 
@property(readonly, assign, nonatomic) NSString *supportURL;	// G=0x32a8bee1; 
@property(readonly, assign, nonatomic) NSString *topShelfURL;	// G=0x32a8bc0d; 
@property(readonly, assign, nonatomic) BOOL usesParentalControls;	// G=0x32a8bd5d; 
+ (id)infoWithVendorBag:(id)vendorBag;	// 0x32a8b55d
- (id)initWithVendorBag:(id)vendorBag;	// 0x32a8b599
- (id)_featureCode;	// 0x32a8bfa1
// declared property getter: - (id)appDictionary;	// 0x32a8bf0d
// declared property getter: - (id)authType;	// 0x32a8bc39
// declared property getter: - (id)bootstrapResourceURL;	// 0x32a8bc65
// declared property getter: - (id)bootstrapResourceVersion;	// 0x32a8bc91
- (void)dealloc;	// 0x32a8b691
// declared property getter: - (int)defaultParentalControlsAccessMode;	// 0x32a8bda1
// declared property getter: - (BOOL)enabled;	// 0x32a8b7a9
// declared property getter: - (BOOL)enabledInBag;	// 0x32a8b8f9
// declared property getter: - (id)featureName;	// 0x32a8b711
// declared property getter: - (id)feedResources;	// 0x32a8c049
// declared property getter: - (BOOL)hasBeenRemoved;	// 0x32a8b8b5
// declared property getter: - (id)javascriptURL;	// 0x32a8bcbd
// declared property getter: - (id)maximumVersion;	// 0x32a8be7d
// declared property getter: - (id)menuIconURL;	// 0x32a8ba45
// declared property getter: - (id)menuIconURLVersion;	// 0x32a8bb71
// declared property getter: - (id)menuTitle;	// 0x32a8b9ed
// declared property getter: - (id)merchantID;	// 0x32a8ba25
// declared property getter: - (id)metadata;	// 0x32a8c029
// declared property getter: - (id)minimumRequiredVersion;	// 0x32a8be39
// declared property getter: - (BOOL)pinToMerchant;	// 0x32a8bf39
// declared property getter: - (float)preferredOrder;	// 0x32a8bce9
// declared property getter: - (id)rootURL;	// 0x32a8bbe1
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x32a8b831
// declared property setter: - (void)setFeatureName:(id)name;	// 0x32a8b769
// declared property setter: - (void)setFeedResources:(id)resources;	// 0x32a8c059
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x32a8c039
// declared property getter: - (id)supportURL;	// 0x32a8bee1
// declared property getter: - (id)topShelfURL;	// 0x32a8bc0d
- (void)useDefaultEnablement;	// 0x32a8b9bd
// declared property getter: - (BOOL)usesParentalControls;	// 0x32a8bd5d
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x32a8b6f1
@end
