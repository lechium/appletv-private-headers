/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import "LSResourceProxy.h"

@class NSString, NSArray;

@interface LSApplicationProxy : LSResourceProxy {
@private
	unsigned _flags;	// 40 = 0x28
	NSArray *_privateDocumentIconNames;	// 44 = 0x2c
	LSApplicationProxy *_privateDocumentTypeOwner;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) NSString *applicationIdentifier;	// G=0x30e0baed; 
@property(assign) BOOL privateDocumentIconAllowOverride;	// G=0x30e0ac91; S=0x30e0aca5; converted property
@property(retain) NSArray *privateDocumentIconNames;	// G=0x30e0ac81; S=0x30e0ba8d; converted property
@property(retain) LSApplicationProxy *privateDocumentTypeOwner;	// G=0x30e0acc9; S=0x30e0ba4d; converted property
@property(readonly, assign, nonatomic) NSString *roleIdentifier;	// G=0x30e0ac7d; 
+ (id)applicationProxyForIdentifier:(id)identifier;	// 0x30e0b885
+ (id)applicationProxyForIdentifier:(id)identifier roleIdentifier:(id)identifier2;	// 0x30e0b82d
- (id)_initWithApplicationIdentifier:(id)applicationIdentifier name:(id)name containerURL:(id)url resourcesDirectoryURL:(id)url4 iconsDictionary:(id)dictionary iconFileNames:(id)names iconIsPrerendered:(BOOL)prerendered;	// 0x30e0bafd
// declared property getter: - (id)applicationIdentifier;	// 0x30e0baed
- (id)containerURL;	// 0x30e0badd
- (void)dealloc;	// 0x30e0b7cd
- (id)description;	// 0x30e0b8dd
- (unsigned)hash;	// 0x30e0b921
- (id)iconStyleDomain;	// 0x30e0acd9
- (BOOL)isEqual:(id)equal;	// 0x30e0b949
- (id)localizedName;	// 0x30e0b9d9
// converted property getter: - (BOOL)privateDocumentIconAllowOverride;	// 0x30e0ac91
// converted property getter: - (id)privateDocumentIconNames;	// 0x30e0ac81
// converted property getter: - (id)privateDocumentTypeOwner;	// 0x30e0acc9
- (id)resourcesDirectoryURL;	// 0x30e0bacd
// declared property getter: - (id)roleIdentifier;	// 0x30e0ac7d
// converted property setter: - (void)setPrivateDocumentIconAllowOverride:(BOOL)override;	// 0x30e0aca5
// converted property setter: - (void)setPrivateDocumentIconNames:(id)names;	// 0x30e0ba8d
// converted property setter: - (void)setPrivateDocumentTypeOwner:(id)owner;	// 0x30e0ba4d
@end

