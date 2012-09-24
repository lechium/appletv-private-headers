/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOProblemProvider.h"
#import "PBRequesterDelegate.h"

@class GEORequester;

@interface GEOVoltaireProblemProvider : GEOProblemProvider <PBRequesterDelegate> {
	GEORequester *_requester;	// 4 = 0x4
	id _errorHandler;	// 8 = 0x8
	id _finishedHandler;	// 12 = 0xc
}
+ (void)_resetURL;	// 0x379df5e5
+ (unsigned short)providerID;	// 0x379df7b1
+ (void)setUsePersistentConnection:(BOOL)connection;	// 0x379df611
- (id)init;	// 0x379df621
- (void)cancelRequest;	// 0x379df8ed
- (void)dealloc;	// 0x379df725
- (void)requester:(id)requester didFailWithError:(id)error;	// 0x379df90d
- (void)requesterDidCancel:(id)requester;	// 0x379df9d9
- (void)requesterDidFinish:(id)requester;	// 0x379dfa41
- (void)startRequest:(id)request finished:(id)finished error:(id)error;	// 0x379df7b9
@end
