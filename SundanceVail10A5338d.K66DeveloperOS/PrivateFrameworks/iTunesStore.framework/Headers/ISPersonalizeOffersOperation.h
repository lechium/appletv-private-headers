/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class SSPersonalizeOffersResponse, ISPersonalizeOffersRequest;

@interface ISPersonalizeOffersOperation : ISOperation {
	ISPersonalizeOffersRequest *_request;	// 60 = 0x3c
	SSPersonalizeOffersResponse *_response;	// 64 = 0x40
}
@property(readonly, assign) ISPersonalizeOffersRequest *personalizeOffersReqeust;	// G=0x3093dc41; 
@property(readonly, assign) SSPersonalizeOffersResponse *response;	// G=0x3093dc79; 
- (id)initWithPersonalizeOffersRequest:(id)personalizeOffersRequest;	// 0x3093db89
- (void)_addDictionaryToResponse:(id)response;	// 0x3093de75
- (id)_copyResponseForURL:(id)url requestString:(id)string error:(id *)error;	// 0x3093e1f5
- (BOOL)_runWithURLDictionary:(id)urldictionary error:(id *)error;	// 0x3093e3c1
- (void)dealloc;	// 0x3093dbdd
// declared property getter: - (id)personalizeOffersReqeust;	// 0x3093dc41
// declared property getter: - (id)response;	// 0x3093dc79
- (void)run;	// 0x3093dcd9
@end
