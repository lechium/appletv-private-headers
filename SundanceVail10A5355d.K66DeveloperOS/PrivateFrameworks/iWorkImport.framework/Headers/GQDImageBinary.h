/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQDImageBinary : NSObject {
	CGSize mSize;	// 4 = 0x4
	CFStringRef mPath;	// 12 = 0xc
	CFURLRef mAbsoluteUrl;	// 16 = 0x10
	int mResourceType;	// 20 = 0x14
}
- (id).cxx_construct;	// 0x34be6e7d
- (CFURLRef)absoluteUrlForState:(id)state;	// 0x34be6d99
- (void)dealloc;	// 0x34be6d25
- (int)readDataAttributesFromReader:(xmlTextReader *)reader;	// 0x34be6e81
- (CFStringRef)relativePath;	// 0x34be6e6d
- (int)resourceType;	// 0x34be6e5d
- (CGSize)size;	// 0x34be6d81
@end
