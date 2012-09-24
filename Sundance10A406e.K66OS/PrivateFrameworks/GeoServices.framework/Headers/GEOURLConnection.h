/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class GEOURLConnectionSession;

@interface GEOURLConnection : NSObject {
	CFURLConnectionRef _cfConnection;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
	GEOURLConnectionSession *_connectionSession;	// 12 = 0xc
}
- (id)initWithCFRequest:(CFURLRequestRef)cfrequest delegate:(id)delegate usingSession:(id)session;	// 0x3794f3d1
- (void)cancel;	// 0x3795644d
- (void)connectionDidFailWithError:(id)connection;	// 0x379bad99
- (void)connectionDidFinishLoading;	// 0x3794fac5
- (void)connectionDidReceiveData:(id)connection;	// 0x3794fa85
- (void)connectionDidReceiveResponse:(CFURLResponseRef)connection;	// 0x3794f9e1
- (void)connectionDidTerminate;	// 0x37950885
- (void)dealloc;	// 0x3795090d
@end
