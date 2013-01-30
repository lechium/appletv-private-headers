/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData;

@interface CoreDAVXMLData : NSObject {
	BOOL _shouldAddFormattingSpaces;	// 4 = 0x4
	xmlTextWriter *_writer;	// 8 = 0x8
	xmlDoc *_doc;	// 12 = 0xc
	BOOL _docHasEnded;	// 16 = 0x10
	CFDictionaryRef _seenURIsToPrefixes;	// 20 = 0x14
	CFDictionaryRef _seenURIsToDepth;	// 24 = 0x18
	CFArrayRef _elementStack;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0x33417959; 
@property(assign) BOOL shouldAddFormattingSpaces;	// G=0x33417aa9; S=0x33417ac1; @synthesize=_shouldAddFormattingSpaces
+ (BOOL)string:(id)string isEqualToXmlCharString:(const char *)xmlCharString;	// 0x334179f9
- (id)init;	// 0x33416a35
- (const char *)_prefixForNameSpace:(const char *)nameSpace;	// 0x33416bb5
- (void)_startElement:(id)element inNamespace:(id)aNamespace;	// 0x33416ea5
- (void)_startElement:(id)element inNamespace:(id)aNamespace withAttributeNamesAndValues:(id)attributeNamesAndValues attributes:(void *)attributes;	// 0x33416fd9
- (void)appendElement:(id)element inNamespace:(id)aNamespace withStringContent:(id)stringContent withAttributeNamesAndValues:(id)attributeNamesAndValues;	// 0x3341757d
- (void)appendElement:(id)element inNamespace:(id)aNamespace withStringContentAsCDATA:(id)stringContentAsCDATA withAttributeNamesAndValues:(id)attributeNamesAndValues;	// 0x334176a5
// declared property getter: - (id)data;	// 0x33417959
- (void)dealloc;	// 0x33416b2d
- (void)endElement:(id)element inNamespace:(id)aNamespace;	// 0x334172e9
// declared property setter: - (void)setShouldAddFormattingSpaces:(BOOL)addFormattingSpaces;	// 0x33417ac1
// declared property getter: - (BOOL)shouldAddFormattingSpaces;	// 0x33417aa9
- (void)startElement:(id)element inNamespace:(id)aNamespace withAttributeNamesAndValues:(id)attributeNamesAndValues;	// 0x33417095
- (void)startElement:(id)element inNamespace:(id)aNamespace withAttributes:(id)attributes;	// 0x33417165
@end
