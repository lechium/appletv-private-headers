/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CPEnumerationMap : NSObject {
@private
	CFDictionaryRef m_valueToString;	// 4 = 0x4
	CFDictionaryRef m_stringToValue;	// 8 = 0x8
	BOOL m_caseSensitive;	// 12 = 0xc
}
- (id)initWithStructs:(const CPEnumerationStruct *)structs count:(int)count;	// 0x31a31d3d
- (id)initWithStructs:(const CPEnumerationStruct *)structs count:(int)count caseSensitive:(BOOL)sensitive;	// 0x31a29f29
- (void)dealloc;	// 0x31b6454d
- (id)stringForValue:(int)value;	// 0x31a620b1
- (int)valueForString:(id)string;	// 0x31a2f8c9
@end

