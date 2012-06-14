/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import "LSResourceProxy.h"

@class NSURL, NSDictionary, NSArray, NSString;

@interface LSApplicationProxy : LSResourceProxy {
@private
	unsigned _flags;	// 40 = 0x28
	unsigned _bundleFlags;	// 44 = 0x2c
	NSArray *_privateDocumentIconNames;	// 48 = 0x30
	LSApplicationProxy *_privateDocumentTypeOwner;	// 52 = 0x34
	NSURL *_bundleURL;	// 56 = 0x38
	NSString *_applicationType;	// 60 = 0x3c
	NSString *_signerIdentity;	// 64 = 0x40
	NSDictionary *_entitlements;	// 68 = 0x44
	NSDictionary *_environmentVariables;	// 72 = 0x48
	NSArray *_directionsModes;	// 76 = 0x4c
}
@property(readonly, assign, nonatomic) NSString *applicationIdentifier;	// G=0x34bcc7f5; 
@property(readonly, assign, nonatomic) NSString *applicationType;	// G=0x34bcc829; @synthesize=_applicationType
@property(readonly, assign, nonatomic) NSURL *bundleURL;	// G=0x34bcc809; 
@property(readonly, assign, nonatomic) NSURL *containerURL;	// G=0x34bcc819; 
@property(readonly, assign, nonatomic) NSArray *directionsModes;	// G=0x34bccaad; 
@property(readonly, assign, nonatomic) NSDictionary *entitlements;	// G=0x34bcc935; @synthesize=_entitlements
@property(readonly, assign, nonatomic) NSDictionary *environmentVariables;	// G=0x34bcc9f1; @synthesize=_environmentVariables
@property(assign) BOOL privateDocumentIconAllowOverride;	// G=0x34bccbc5; S=0x34bccbd9; converted property
@property(retain) NSArray *privateDocumentIconNames;	// G=0x34bccb79; S=0x34bccb89; converted property
@property(retain) LSApplicationProxy *privateDocumentTypeOwner;	// G=0x34bccbfd; S=0x34bccc0d; converted property
@property(readonly, assign, nonatomic) BOOL profileValidated;	// G=0x34bcc921; 
@property(readonly, assign, nonatomic) NSString *roleIdentifier;	// G=0x34bcc805; 
@property(readonly, assign, nonatomic) NSString *signerIdentity;	// G=0x34bcc8a5; @synthesize=_signerIdentity
+ (id)applicationProxyForIdentifier:(id)identifier;	// 0x34bcc689
+ (id)applicationProxyForIdentifier:(id)identifier roleIdentifier:(id)identifier2;	// 0x34bcc6e5
- (id)_initWithApplicationIdentifier:(id)applicationIdentifier name:(id)name containerURL:(id)url resourcesDirectoryURL:(id)url4 iconsDictionary:(id)dictionary iconFileNames:(id)names iconIsPrerendered:(BOOL)prerendered;	// 0x34bcc269
- (id)_plistValueForKey:(id)key;	// 0x34bcc1b5
// declared property getter: - (id)applicationIdentifier;	// 0x34bcc7f5
// declared property getter: - (id)applicationType;	// 0x34bcc829
// declared property getter: - (id)bundleURL;	// 0x34bcc809
// declared property getter: - (id)containerURL;	// 0x34bcc819
- (void)dealloc;	// 0x34bcc741
- (id)description;	// 0x34bccd71
// declared property getter: - (id)directionsModes;	// 0x34bccaad
// declared property getter: - (id)entitlements;	// 0x34bcc935
// declared property getter: - (id)environmentVariables;	// 0x34bcc9f1
- (unsigned)hash;	// 0x34bccd49
- (id)iconStyleDomain;	// 0x34bccdb1
- (BOOL)isEqual:(id)equal;	// 0x34bcccc1
- (id)localizedName;	// 0x34bccc49
// converted property getter: - (BOOL)privateDocumentIconAllowOverride;	// 0x34bccbc5
// converted property getter: - (id)privateDocumentIconNames;	// 0x34bccb79
// converted property getter: - (id)privateDocumentTypeOwner;	// 0x34bccbfd
// declared property getter: - (BOOL)profileValidated;	// 0x34bcc921
- (id)resourcesDirectoryURL;	// 0x34bccb69
// declared property getter: - (id)roleIdentifier;	// 0x34bcc805
// converted property setter: - (void)setPrivateDocumentIconAllowOverride:(BOOL)override;	// 0x34bccbd9
// converted property setter: - (void)setPrivateDocumentIconNames:(id)names;	// 0x34bccb89
// converted property setter: - (void)setPrivateDocumentTypeOwner:(id)owner;	// 0x34bccc0d
// declared property getter: - (id)signerIdentity;	// 0x34bcc8a5
@end
