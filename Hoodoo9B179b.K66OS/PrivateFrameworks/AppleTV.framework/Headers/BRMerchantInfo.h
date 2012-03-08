/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSURL, ATVVendorBag, NSDictionary;

@interface BRMerchantInfo : NSObject {
@private
	ATVVendorBag *_vendorBag;	// 4 = 0x4
	BOOL _enabled;	// 8 = 0x8
	NSString *_featureName;	// 12 = 0xc
	NSDictionary *metadata;	// 16 = 0x10
	NSDictionary *feedResources;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSDictionary *appDictionary;	// G=0x30349191; 
@property(readonly, assign, nonatomic) NSString *authType;	// G=0x30348ebd; 
@property(readonly, assign, nonatomic) NSString *bootstrapResourceURL;	// G=0x30348ee9; 
@property(readonly, assign, nonatomic) NSString *bootstrapResourceVersion;	// G=0x30348f15; 
@property(readonly, assign, nonatomic) int defaultParentalControlsAccessMode;	// G=0x30349025; 
@property(assign) BOOL enabled;	// G=0x30348a2d; S=0x30348ab5; 
@property(readonly, assign, nonatomic) BOOL enabledInBag;	// G=0x30348b7d; 
@property(retain) NSString *featureName;	// G=0x30348995; S=0x303489ed; 
@property(assign, nonatomic) NSDictionary *feedResources;	// G=0x30349265; S=0x30349275; @synthesize
@property(readonly, assign, nonatomic) BOOL hasBeenRemoved;	// G=0x30348b39; 
@property(readonly, assign, nonatomic) NSString *javascriptURL;	// G=0x30348f41; 
@property(readonly, assign, nonatomic) NSString *maximumVersion;	// G=0x30349101; 
@property(readonly, assign, nonatomic) NSURL *menuIconURL;	// G=0x30348cc9; 
@property(readonly, assign, nonatomic) NSString *menuIconURLVersion;	// G=0x30348df5; 
@property(readonly, assign, nonatomic) NSString *menuTitle;	// G=0x30348c71; 
@property(readonly, assign, nonatomic) NSString *merchantID;	// G=0x30348ca9; 
@property(assign, nonatomic) NSDictionary *metadata;	// G=0x30349245; S=0x30349255; @synthesize
@property(readonly, assign, nonatomic) NSString *minimumRequiredVersion;	// G=0x303490bd; 
@property(readonly, assign, nonatomic) float preferredOrder;	// G=0x30348f6d; 
@property(readonly, assign, nonatomic) NSString *rootURL;	// G=0x30348e65; 
@property(readonly, assign, nonatomic) NSString *supportURL;	// G=0x30349165; 
@property(readonly, assign, nonatomic) NSString *topShelfURL;	// G=0x30348e91; 
@property(readonly, assign, nonatomic) BOOL usesParentalControls;	// G=0x30348fe1; 
+ (id)infoWithVendorBag:(id)vendorBag;	// 0x303487e1
- (id)initWithVendorBag:(id)vendorBag;	// 0x3034881d
- (id)_featureCode;	// 0x303491bd
// declared property getter: - (id)appDictionary;	// 0x30349191
// declared property getter: - (id)authType;	// 0x30348ebd
// declared property getter: - (id)bootstrapResourceURL;	// 0x30348ee9
// declared property getter: - (id)bootstrapResourceVersion;	// 0x30348f15
- (void)dealloc;	// 0x30348915
// declared property getter: - (int)defaultParentalControlsAccessMode;	// 0x30349025
// declared property getter: - (BOOL)enabled;	// 0x30348a2d
// declared property getter: - (BOOL)enabledInBag;	// 0x30348b7d
// declared property getter: - (id)featureName;	// 0x30348995
// declared property getter: - (id)feedResources;	// 0x30349265
// declared property getter: - (BOOL)hasBeenRemoved;	// 0x30348b39
// declared property getter: - (id)javascriptURL;	// 0x30348f41
// declared property getter: - (id)maximumVersion;	// 0x30349101
// declared property getter: - (id)menuIconURL;	// 0x30348cc9
// declared property getter: - (id)menuIconURLVersion;	// 0x30348df5
// declared property getter: - (id)menuTitle;	// 0x30348c71
// declared property getter: - (id)merchantID;	// 0x30348ca9
// declared property getter: - (id)metadata;	// 0x30349245
// declared property getter: - (id)minimumRequiredVersion;	// 0x303490bd
// declared property getter: - (float)preferredOrder;	// 0x30348f6d
// declared property getter: - (id)rootURL;	// 0x30348e65
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x30348ab5
// declared property setter: - (void)setFeatureName:(id)name;	// 0x303489ed
// declared property setter: - (void)setFeedResources:(id)resources;	// 0x30349275
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x30349255
// declared property getter: - (id)supportURL;	// 0x30349165
// declared property getter: - (id)topShelfURL;	// 0x30348e91
- (void)useDefaultEnablement;	// 0x30348c41
// declared property getter: - (BOOL)usesParentalControls;	// 0x30348fe1
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x30348975
@end

