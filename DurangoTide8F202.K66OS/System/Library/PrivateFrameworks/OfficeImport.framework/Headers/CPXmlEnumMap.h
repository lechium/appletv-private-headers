/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CPXmlEnumMap : NSObject {
@private
	CFDictionaryRef mNameToValueMap;	// 4 = 0x4
}
- (id)initWithDescriptions:(const CPXmlEnumDescription *)descriptions;	// 0x31a5496d
- (void)dealloc;	// 0x31b67101
- (int)readFromNode:(xmlNode *)node ns:(const char *)ns name:(const char *)name;	// 0x31a54a35
- (int)readFromNode:(xmlNode *)node ns:(const char *)ns name:(const char *)name def:(int)def;	// 0x31a6924d
- (BOOL)readFromNode:(xmlNode *)node ns:(const char *)ns name:(const char *)name value:(int *)value;	// 0x31a54a95
@end

