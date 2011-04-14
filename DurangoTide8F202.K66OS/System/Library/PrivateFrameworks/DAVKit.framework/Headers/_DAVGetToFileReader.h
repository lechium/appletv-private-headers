/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <NSObject.h> // Unknown library
#import "DAVResponseBodyReader.h"

@class NSFileHandle;

@interface _DAVGetToFileReader : NSObject <DAVResponseBodyReader> {
	NSFileHandle *_fileHandle;	// 4 = 0x4
}
- (id)initWithFileHandle:(id)fileHandle;	// 0x32da1945
- (void)dealloc;	// 0x32da18fd
- (BOOL)request:(id)request acceptResponseWithHTTPStatusCode:(int)httpstatusCode;	// 0x32da0ca9
- (void)request:(id)request readResponseBody:(id)body;	// 0x32da1a2d
@end

