/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"


__attribute__((visibility("hidden")))
@interface GQDImageBinary : NSObject {
@private
	CGSize mSize;	// 4 = 0x4
	CFStringRef mPath;	// 12 = 0xc
	CFURLRef mAbsoluteUrl;	// 16 = 0x10
	int mResourceType;	// 20 = 0x14
}
- (CFURLRef)absoluteUrlForState:(id)state;	// 0x33c05529
- (void)dealloc;	// 0x33c05635
- (int)readDataAttributesFromReader:(xmlTextReader *)reader;	// 0x33c05711
- (CFStringRef)relativePath;	// 0x33c05519
- (int)resourceType;	// 0x33c05509
- (CGSize)size;	// 0x33c054f1
@end

