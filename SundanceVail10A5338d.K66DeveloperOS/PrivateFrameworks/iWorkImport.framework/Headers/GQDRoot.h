/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQDRoot : NSObject {
	CFDictionaryRef mUidToObjectMap;	// 4 = 0x4
	BOOL mAppBundleColorMapLoaded;	// 8 = 0x8
	CFDictionaryRef mAppBundleResourceToColorMap;	// 12 = 0xc
	BOOL mAppBundleResourcesUrlInitialized;	// 16 = 0x10
	CFURLRef mAppBundleResourcesUrl;	// 20 = 0x14
	int mAppBundleVersion;	// 24 = 0x18
	unsigned long long mDocVersion;	// 28 = 0x1c
}
+ (xmlNs *)appNamespace;	// 0x3507d6cd
- (id)init;	// 0x3507d6d1
- (const char *)addIdentifiedObject:(id)object fromCurrentNode:(xmlTextReader *)currentNode;	// 0x3507d849
- (BOOL)addObject:(id)object withOwnedXmlUid:(const char *)ownedXmlUid;	// 0x3507d7d9
- (BOOL)appBundleCanProcessCurrentDocVersion;	// 0x3507dbc5
- (CFURLRef)appBundleResourcesUrl;	// 0x3507d9c1
- (Class)classForName:(const char *)name;	// 0x3507d79d
- (id)colorForMissingAppBundleResource:(CFStringRef)missingAppBundleResource processorBundle:(CFBundleRef)bundle;	// 0x3507d975
- (CFURLRef)createUrlToAppBundleResource:(CFStringRef)appBundleResource processorBundle:(CFBundleRef)bundle;	// 0x3507d971
- (CFURLRef)createUrlToAppBundleResource:(CFStringRef)appBundleResource processorBundle:(CFBundleRef)bundle fileExists:(BOOL *)exists;	// 0x3507d92d
- (void)dealloc;	// 0x3507d731
- (unsigned)documentReleaseVersion;	// 0x3507db9d
- (void)forgetAboutObject:(id)object withXmlUid:(const char *)xmlUid;	// 0x3507d8a5
- (BOOL)includeStyleWithIdentifier:(const char *)identifier parentIdentifier:(const char *)identifier2 uid:(const char *)uid;	// 0x3507d8e1
- (void)initializeAppBundleResourcesUrl;	// 0x3507d9e9
- (void)loadAppBundleResourceToColorMap;	// 0x3507d9ed
- (id)objectWithXmlUid:(const char *)xmlUid;	// 0x3507d891
- (BOOL)readDocumentVersion:(xmlTextReader *)version;	// 0x3507d9f1
- (BOOL)readDocumentVersion:(xmlTextReader *)version isTooNew:(BOOL *)aNew;	// 0x3507da09
- (id)uuid;	// 0x3507d815
@end

