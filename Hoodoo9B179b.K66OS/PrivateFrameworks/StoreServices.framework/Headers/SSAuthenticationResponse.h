/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary, NSHTTPURLResponse, NSNumber;

@interface SSAuthenticationResponse : NSObject {
@private
	NSDictionary *_responseDictionary;	// 4 = 0x4
	int _urlBagType;	// 8 = 0x8
	NSHTTPURLResponse *_urlResponse;	// 12 = 0xc
}
@property(assign) int URLBagType;	// G=0x33cb1419; S=0x33cb1429; @synthesize=_urlBagType
@property(readonly, assign) NSHTTPURLResponse *URLResponse;	// G=0x33cb1281; 
@property(readonly, assign) int accountKind;	// G=0x33cb0951; 
@property(readonly, assign) NSString *accountName;	// G=0x33cb0a09; 
@property(readonly, assign) NSNumber *accountUniqueIdentifier;	// G=0x33cb0af5; 
@property(readonly, assign) int availableServiceTypes;	// G=0x33cb0b49; 
@property(readonly, assign) NSString *creditsString;	// G=0x33cb0c6d; 
@property(readonly, assign) int enabledServiceTypes;	// G=0x33cb0cfd; 
@property(readonly, assign) NSNumber *failureType;	// G=0x33cb0ee5; 
@property(readonly, assign) NSDictionary *responseDictionary;	// G=0x33cb1409; @synthesize=_responseDictionary
@property(readonly, assign) int responseType;	// G=0x33cb1105; 
@property(readonly, assign) NSString *storeFrontIdentifier;	// G=0x33cb1185; 
@property(readonly, assign) NSString *token;	// G=0x33cb11f1; 
@property(readonly, assign) NSString *userMessage;	// G=0x33cb12b9; 
- (id)initWithURLResponse:(id)urlresponse dictionary:(id)dictionary;	// 0x33cb0891
// declared property getter: - (int)URLBagType;	// 0x33cb1419
// declared property getter: - (id)URLResponse;	// 0x33cb1281
- (int)_responseTypeForFailureType:(int)failureType;	// 0x33cb1349
- (int)_responseTypeForStatusValue:(int)statusValue;	// 0x33cb1365
- (id)_statusValue;	// 0x33cb1385
// declared property getter: - (int)accountKind;	// 0x33cb0951
// declared property getter: - (id)accountName;	// 0x33cb0a09
// declared property getter: - (id)accountUniqueIdentifier;	// 0x33cb0af5
// declared property getter: - (int)availableServiceTypes;	// 0x33cb0b49
// declared property getter: - (id)creditsString;	// 0x33cb0c6d
- (void)dealloc;	// 0x33cb0905
// declared property getter: - (int)enabledServiceTypes;	// 0x33cb0cfd
// declared property getter: - (id)failureType;	// 0x33cb0ee5
- (id)newAccount;	// 0x33cb0f69
// declared property getter: - (id)responseDictionary;	// 0x33cb1409
// declared property getter: - (int)responseType;	// 0x33cb1105
// declared property setter: - (void)setURLBagType:(int)type;	// 0x33cb1429
// declared property getter: - (id)storeFrontIdentifier;	// 0x33cb1185
// declared property getter: - (id)token;	// 0x33cb11f1
// declared property getter: - (id)userMessage;	// 0x33cb12b9
@end

