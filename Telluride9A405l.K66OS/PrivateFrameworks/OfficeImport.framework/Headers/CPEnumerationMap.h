/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CPEnumerationMap : NSObject {
@private
	CFDictionaryRef m_valueToString;	// 4 = 0x4
	CFDictionaryRef m_stringToValue;	// 8 = 0x8
	BOOL m_caseSensitive;	// 12 = 0xc
}
- (id)initWithStructs:(const CPEnumerationStruct *)structs count:(int)count;	// 0x30d6c289
- (id)initWithStructs:(const CPEnumerationStruct *)structs count:(int)count caseSensitive:(BOOL)sensitive;	// 0x30d62fb9
- (void)dealloc;	// 0x30ead7a9
- (id)stringForValue:(int)value;	// 0x30db2e01
- (int)valueForString:(id)string;	// 0x30d69a85
@end
