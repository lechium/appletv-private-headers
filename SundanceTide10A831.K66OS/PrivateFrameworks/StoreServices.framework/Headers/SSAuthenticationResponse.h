/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary, NSHTTPURLResponse, NSNumber;

@interface SSAuthenticationResponse : NSObject {
	NSDictionary *_responseDictionary;	// 4 = 0x4
	int _urlBagType;	// 8 = 0x8
	NSHTTPURLResponse *_urlResponse;	// 12 = 0xc
}
@property(assign) int URLBagType;	// G=0x3783ec21; S=0x3783ec35; @synthesize=_urlBagType
@property(readonly, assign) NSHTTPURLResponse *URLResponse;	// G=0x3783ea1d; 
@property(readonly, assign) int accountKind;	// G=0x3783e201; 
@property(readonly, assign) NSString *accountName;	// G=0x3783e25d; 
@property(readonly, assign) NSNumber *accountUniqueIdentifier;	// G=0x3783e2ed; 
@property(readonly, assign) int availableServiceTypes;	// G=0x3783e341; 
@property(readonly, assign) NSString *creditsString;	// G=0x3783e3b1; 
@property(readonly, assign) int enabledServiceTypes;	// G=0x3783e441; 
@property(readonly, assign) NSNumber *failureType;	// G=0x3783e5c9; 
@property(readonly, assign) NSDictionary *responseDictionary;	// G=0x3783ec0d; @synthesize=_responseDictionary
@property(readonly, assign) int responseType;	// G=0x3783e7f1; 
@property(readonly, assign) NSString *storeFrontIdentifier;	// G=0x3783e8e9; 
@property(readonly, assign) NSString *token;	// G=0x3783e98d; 
@property(readonly, assign) NSString *userMessage;	// G=0x3783ea55; 
- (id)initWithURLResponse:(id)urlresponse dictionary:(id)dictionary;	// 0x3783e125
// declared property getter: - (int)URLBagType;	// 0x3783ec21
// declared property getter: - (id)URLResponse;	// 0x3783ea1d
- (int)_responseTypeForErrorNumber:(int)errorNumber;	// 0x3783eae5
- (int)_responseTypeForFailureType:(int)failureType;	// 0x3783eb0d
- (int)_responseTypeForStatusValue:(int)statusValue;	// 0x3783eb2d
- (id)_valueForFirstAvailableKey:(id)firstAvailableKey;	// 0x3783eb55
// declared property getter: - (int)accountKind;	// 0x3783e201
// declared property getter: - (id)accountName;	// 0x3783e25d
// declared property getter: - (id)accountUniqueIdentifier;	// 0x3783e2ed
// declared property getter: - (int)availableServiceTypes;	// 0x3783e341
// declared property getter: - (id)creditsString;	// 0x3783e3b1
- (void)dealloc;	// 0x3783e19d
// declared property getter: - (int)enabledServiceTypes;	// 0x3783e441
// declared property getter: - (id)failureType;	// 0x3783e5c9
- (id)newAccount;	// 0x3783e655
// declared property getter: - (id)responseDictionary;	// 0x3783ec0d
// declared property getter: - (int)responseType;	// 0x3783e7f1
// declared property setter: - (void)setURLBagType:(int)type;	// 0x3783ec35
// declared property getter: - (id)storeFrontIdentifier;	// 0x3783e8e9
// declared property getter: - (id)token;	// 0x3783e98d
// declared property getter: - (id)userMessage;	// 0x3783ea55
@end
