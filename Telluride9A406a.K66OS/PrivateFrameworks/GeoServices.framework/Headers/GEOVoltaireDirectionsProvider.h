/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEODirectionsProvider.h"
#import "PBRequesterDelegate.h"

@class GEORequester;

@interface GEOVoltaireDirectionsProvider : GEODirectionsProvider <PBRequesterDelegate> {
	GEORequester *_requester;	// 20 = 0x14
}
@property(retain, nonatomic) GEORequester *requester;	// G=0x34bfee85; S=0x34bfee95; @synthesize=_requester
+ (id)providerHostname;	// 0x34bfea8d
+ (unsigned short)providerID;	// 0x34bfea89
+ (id)providerURL;	// 0x34bfe839
+ (void)resetProviderURL;	// 0x34bfe8f1
- (id)init;	// 0x34bfe91d
- (void)cancelProviderRequest;	// 0x34bfeba5
- (void)cleanupRequester;	// 0x34bfebcd
- (void)dealloc;	// 0x34bfea21
// declared property getter: - (id)requester;	// 0x34bfee85
- (void)requester:(id)requester didFailWithError:(id)error;	// 0x34bfee1d
- (void)requesterDidCancel:(id)requester;	// 0x34bfee55
- (void)requesterDidFinish:(id)requester;	// 0x34bfec11
// declared property setter: - (void)setRequester:(id)requester;	// 0x34bfee95
- (void)startProviderWithRequest:(id)request;	// 0x34bfeab5
@end

