/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSError, NSMutableArray, NSData;

__attribute__((visibility("hidden")))
@interface _NSXMLParser_CoreDAVFlavor_Info : NSObject {
@private
	xmlSAXHandler *saxHandler;	// 4 = 0x4
	xmlParserCtxt *parserContext;	// 8 = 0x8
	unsigned parserFlags;	// 12 = 0xc
	NSError *error;	// 16 = 0x10
	NSMutableArray *namespaces;	// 20 = 0x14
	BOOL delegateAborted;	// 24 = 0x18
	BOOL haveDetectedEncoding;	// 25 = 0x19
	NSData *bomChunk;	// 28 = 0x1c
}
@end

