/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import "LSResourceProxy.h"

@class NSURL, NSDictionary, NSArray, NSString;

@interface LSApplicationProxy : LSResourceProxy {
	unsigned _flags;	// 40 = 0x28
	unsigned _bundleFlags;	// 44 = 0x2c
	NSArray *_privateDocumentIconNames;	// 48 = 0x30
	LSApplicationProxy *_privateDocumentTypeOwner;	// 52 = 0x34
	NSURL *_bundleURL;	// 56 = 0x38
	NSString *_bundleVersion;	// 60 = 0x3c
	NSString *_shortVersionString;	// 64 = 0x40
	NSString *_applicationType;	// 68 = 0x44
	NSString *_signerIdentity;	// 72 = 0x48
	NSDictionary *_entitlements;	// 76 = 0x4c
	NSDictionary *_environmentVariables;	// 80 = 0x50
	NSArray *_directionsModes;	// 84 = 0x54
}
@property(readonly, assign, nonatomic) NSString *applicationIdentifier;	// G=0x32dca0f5; 
@property(readonly, assign, nonatomic) NSString *applicationType;	// G=0x32dca149; @synthesize=_applicationType
@property(readonly, assign, nonatomic) NSURL *bundleURL;	// G=0x32dca109; 
@property(readonly, assign, nonatomic) NSString *bundleVersion;	// G=0x32dca129; 
@property(readonly, assign, nonatomic) NSURL *containerURL;	// G=0x32dca119; 
@property(readonly, assign, nonatomic) NSArray *directionsModes;	// G=0x32dca3cd; 
@property(readonly, assign, nonatomic) NSDictionary *entitlements;	// G=0x32dca255; @synthesize=_entitlements
@property(readonly, assign, nonatomic) NSDictionary *environmentVariables;	// G=0x32dca311; @synthesize=_environmentVariables
@property(assign) BOOL privateDocumentIconAllowOverride;	// G=0x32dca4e5; S=0x32dca4f9; converted property
@property(retain) NSArray *privateDocumentIconNames;	// G=0x32dca499; S=0x32dca4a9; converted property
@property(retain) LSApplicationProxy *privateDocumentTypeOwner;	// G=0x32dca51d; S=0x32dca52d; converted property
@property(readonly, assign, nonatomic) BOOL profileValidated;	// G=0x32dca241; 
@property(readonly, assign, nonatomic) NSString *roleIdentifier;	// G=0x32dca105; 
@property(readonly, assign, nonatomic) NSString *shortVersionString;	// G=0x32dca139; 
@property(readonly, assign, nonatomic) NSString *signerIdentity;	// G=0x32dca1c5; @synthesize=_signerIdentity
+ (id)applicationProxyForIdentifier:(id)identifier;	// 0x32dc9f61
+ (id)applicationProxyForIdentifier:(id)identifier roleIdentifier:(id)identifier2;	// 0x32dc9fbd
- (id)_initWithApplicationIdentifier:(id)applicationIdentifier name:(id)name containerURL:(id)url resourcesDirectoryURL:(id)url4 iconsDictionary:(id)dictionary iconFileNames:(id)names iconIsPrerendered:(BOOL)prerendered;	// 0x32dc9af1
- (id)_plistValueForKey:(id)key;	// 0x32dc9a3d
// declared property getter: - (id)applicationIdentifier;	// 0x32dca0f5
// declared property getter: - (id)applicationType;	// 0x32dca149
// declared property getter: - (id)bundleURL;	// 0x32dca109
// declared property getter: - (id)bundleVersion;	// 0x32dca129
// declared property getter: - (id)containerURL;	// 0x32dca119
- (void)dealloc;	// 0x32dca019
- (id)description;	// 0x32dca691
// declared property getter: - (id)directionsModes;	// 0x32dca3cd
// declared property getter: - (id)entitlements;	// 0x32dca255
// declared property getter: - (id)environmentVariables;	// 0x32dca311
- (unsigned)hash;	// 0x32dca669
- (id)iconStyleDomain;	// 0x32dca6d1
- (BOOL)isEqual:(id)equal;	// 0x32dca5e1
- (id)localizedName;	// 0x32dca569
// converted property getter: - (BOOL)privateDocumentIconAllowOverride;	// 0x32dca4e5
// converted property getter: - (id)privateDocumentIconNames;	// 0x32dca499
// converted property getter: - (id)privateDocumentTypeOwner;	// 0x32dca51d
// declared property getter: - (BOOL)profileValidated;	// 0x32dca241
- (id)resourcesDirectoryURL;	// 0x32dca489
// declared property getter: - (id)roleIdentifier;	// 0x32dca105
// converted property setter: - (void)setPrivateDocumentIconAllowOverride:(BOOL)override;	// 0x32dca4f9
// converted property setter: - (void)setPrivateDocumentIconNames:(id)names;	// 0x32dca4a9
// converted property setter: - (void)setPrivateDocumentTypeOwner:(id)owner;	// 0x32dca52d
// declared property getter: - (id)shortVersionString;	// 0x32dca139
// declared property getter: - (id)signerIdentity;	// 0x32dca1c5
@end
