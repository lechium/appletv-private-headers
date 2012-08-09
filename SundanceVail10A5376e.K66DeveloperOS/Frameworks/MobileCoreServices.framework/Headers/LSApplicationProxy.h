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
	NSString *_vendorID;	// 60 = 0x3c
	NSString *_bundleVersion;	// 64 = 0x40
	NSString *_shortVersionString;	// 68 = 0x44
	NSString *_applicationType;	// 72 = 0x48
	NSString *_signerIdentity;	// 76 = 0x4c
	NSDictionary *_entitlements;	// 80 = 0x50
	NSDictionary *_environmentVariables;	// 84 = 0x54
	NSArray *_directionsModes;	// 88 = 0x58
}
@property(readonly, assign, nonatomic) NSString *applicationIdentifier;	// G=0x32a94809; 
@property(readonly, assign, nonatomic) NSString *applicationType;	// G=0x32a9486d; @synthesize=_applicationType
@property(readonly, assign, nonatomic) NSURL *bundleURL;	// G=0x32a9481d; 
@property(readonly, assign, nonatomic) NSString *bundleVersion;	// G=0x32a9484d; 
@property(readonly, assign, nonatomic) NSURL *containerURL;	// G=0x32a9482d; 
@property(readonly, assign, nonatomic) NSArray *directionsModes;	// G=0x32a94af1; 
@property(readonly, assign, nonatomic) NSDictionary *entitlements;	// G=0x32a94979; @synthesize=_entitlements
@property(readonly, assign, nonatomic) NSDictionary *environmentVariables;	// G=0x32a94a35; @synthesize=_environmentVariables
@property(assign) BOOL privateDocumentIconAllowOverride;	// G=0x32a94c09; S=0x32a94c1d; converted property
@property(retain) NSArray *privateDocumentIconNames;	// G=0x32a94bbd; S=0x32a94bcd; converted property
@property(retain) LSApplicationProxy *privateDocumentTypeOwner;	// G=0x32a94c41; S=0x32a94c51; converted property
@property(readonly, assign, nonatomic) BOOL profileValidated;	// G=0x32a94965; 
@property(readonly, assign, nonatomic) NSString *roleIdentifier;	// G=0x32a94819; 
@property(readonly, assign, nonatomic) NSString *shortVersionString;	// G=0x32a9485d; 
@property(readonly, assign, nonatomic) NSString *signerIdentity;	// G=0x32a948e9; @synthesize=_signerIdentity
@property(readonly, assign, nonatomic) NSString *vendorID;	// G=0x32a9483d; 
+ (id)applicationProxyForIdentifier:(id)identifier;	// 0x32a9464d
+ (id)applicationProxyForIdentifier:(id)identifier roleIdentifier:(id)identifier2;	// 0x32a946a9
- (id)_initWithApplicationIdentifier:(id)applicationIdentifier name:(id)name containerURL:(id)url resourcesDirectoryURL:(id)url4 iconsDictionary:(id)dictionary iconFileNames:(id)names iconIsPrerendered:(BOOL)prerendered;	// 0x32a94191
- (id)_plistValueForKey:(id)key;	// 0x32a940dd
// declared property getter: - (id)applicationIdentifier;	// 0x32a94809
// declared property getter: - (id)applicationType;	// 0x32a9486d
// declared property getter: - (id)bundleURL;	// 0x32a9481d
// declared property getter: - (id)bundleVersion;	// 0x32a9484d
// declared property getter: - (id)containerURL;	// 0x32a9482d
- (void)dealloc;	// 0x32a94705
- (id)description;	// 0x32a94db5
// declared property getter: - (id)directionsModes;	// 0x32a94af1
// declared property getter: - (id)entitlements;	// 0x32a94979
// declared property getter: - (id)environmentVariables;	// 0x32a94a35
- (unsigned)hash;	// 0x32a94d8d
- (id)iconStyleDomain;	// 0x32a94df5
- (BOOL)isEqual:(id)equal;	// 0x32a94d05
- (id)localizedName;	// 0x32a94c8d
// converted property getter: - (BOOL)privateDocumentIconAllowOverride;	// 0x32a94c09
// converted property getter: - (id)privateDocumentIconNames;	// 0x32a94bbd
// converted property getter: - (id)privateDocumentTypeOwner;	// 0x32a94c41
// declared property getter: - (BOOL)profileValidated;	// 0x32a94965
- (id)resourcesDirectoryURL;	// 0x32a94bad
// declared property getter: - (id)roleIdentifier;	// 0x32a94819
// converted property setter: - (void)setPrivateDocumentIconAllowOverride:(BOOL)override;	// 0x32a94c1d
// converted property setter: - (void)setPrivateDocumentIconNames:(id)names;	// 0x32a94bcd
// converted property setter: - (void)setPrivateDocumentTypeOwner:(id)owner;	// 0x32a94c51
// declared property getter: - (id)shortVersionString;	// 0x32a9485d
// declared property getter: - (id)signerIdentity;	// 0x32a948e9
// declared property getter: - (id)vendorID;	// 0x32a9483d
@end
