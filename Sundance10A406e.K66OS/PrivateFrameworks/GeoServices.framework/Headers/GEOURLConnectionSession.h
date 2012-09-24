/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSMapTable;

@interface GEOURLConnectionSession : NSObject {
	CFURLConnectionSessionRef _connectionSession;	// 4 = 0x4
	NSMapTable *_connectionDelegates;	// 8 = 0x8
	NSLock *_delegateMapLock;	// 12 = 0xc
}
- (id)initPersistentSessionWithTimeout:(int)timeout loadWidth:(int)width;	// 0x3794f161
- (void)_createConnectionSessionWithPurgeTimeout:(int)purgeTimeout loadWidth:(int)width;	// 0x3794f229
- (id)_delegateForConnection:(CFURLConnectionRef)connection;	// 0x3794f981
- (void)dealloc;	// 0x379badd9
- (CFURLRequestRef)newCFMutableURLRequestWithURL:(id)url;	// 0x3794f325
- (CFURLConnectionRef)newCFURLConnectionWithRequest:(CFURLRequestRef)request delegate:(id)delegate;	// 0x3794f471
- (void)removeDelegateForConnection:(CFURLConnectionRef)connection;	// 0x379508b1
@end
