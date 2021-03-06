/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <NSURL.h> // Unknown library

@class NSString;

@interface NSURL (QueryParameters)
- (id)URLByDeletingQueryParameterWithKey:(id)key;	// 0x35b45f39
- (id)URLBySettingQueryParameterValue:(id)value forKey:(id)key;	// 0x35b45ec5
- (id)URLWithNewQueryParameterDictionary:(id)newQueryParameterDictionary;	// 0x35b45df9
- (id)queryParameters;	// 0x35b45c01
@end

@interface NSURL (FaceTime)
+ (id)_applyFaceTimeScheme:(id)scheme toFaceTimeURL:(id)faceTimeURL;	// 0x35b463f9
+ (id)_faceTimeURLWithDestinationID:(id)destinationID addressBookUID:(int)uid;	// 0x35b462a9
+ (id)faceTimeAcceptURLWithURL:(id)url;	// 0x35b46535
+ (id)faceTimeAcceptURLWithURL:(id)url conferenceID:(id)anId;	// 0x35b46549
+ (id)faceTimePromptURLWithURL:(id)url;	// 0x35b46509
+ (id)faceTimeURLWithDestinationID:(id)destinationID;	// 0x35b463bd
+ (id)faceTimeURLWithDestinationID:(id)destinationID addressBookUID:(int)uid;	// 0x35b463dd
+ (id)faceTimeURLWithURL:(id)url;	// 0x35b464dd
- (BOOL)_isPhoneNumberID:(id)anId;	// 0x35b4624d
- (id)faceTimeDestinationAccount;	// 0x35b46165
- (BOOL)isFaceTimeAcceptURL;	// 0x35b466c9
- (BOOL)isFaceTimePromptURL;	// 0x35b46695
- (BOOL)isFaceTimeURL;	// 0x35b465b5
- (BOOL)isValidFaceTimeURL;	// 0x35b46615
@end

@interface NSURL (FaceTime_PhoneNumber)
+ (id)faceTimeURLWithPhoneNumber:(id)phoneNumber addressBookUID:(int)uid forceAssist:(BOOL)assist suppressAssist:(BOOL)assist4 wasAssisted:(BOOL)assisted;	// 0x35b466fd
@end

@interface NSURL (Telephony)
@property(readonly, assign) int addressBookUID;	// G=0x35b4b8cd; 
@property(readonly, assign) BOOL forceAssist;	// G=0x35b4b959; 
@property(readonly, assign) NSString *phoneNumber;	// G=0x35b4b7b1; 
@property(readonly, assign) BOOL suppressAssist;	// G=0x35b4b9e5; 
@property(readonly, assign) BOOL wasAlreadyAssisted;	// G=0x35b4ba59; 
+ (id)URLWithTelephoneNumber:(id)telephoneNumber;	// 0x35b4b4b5
+ (id)URLWithTelephoneNumber:(id)telephoneNumber addressBookUID:(int)uid;	// 0x35b4b541
+ (id)URLWithTelephoneNumber:(id)telephoneNumber addressBookUID:(int)uid forceAssist:(BOOL)assist suppressAssist:(BOOL)assist4 wasAssisted:(BOOL)assisted;	// 0x35b4b5c1
+ (id)URLWithTelephoneNumber:(id)telephoneNumber promptUser:(BOOL)user;	// 0x35b4b4c9
- (id)_mobilePhonePathParameters;	// 0x35b4bfcd
- (id)_mobilePhoneQueryParameters;	// 0x35b4c171
// declared property getter: - (int)addressBookUID;	// 0x35b4b8cd
// declared property getter: - (BOOL)forceAssist;	// 0x35b4b959
- (id)formattedPhoneNumber;	// 0x35b4bb45
- (BOOL)hasTelephonyScheme;	// 0x35b4bacd
- (BOOL)isWebSafeTelephoneURL;	// 0x35b4bc45
- (id)numberQualifiedForAddressBook;	// 0x35b4bbdd
// declared property getter: - (id)phoneNumber;	// 0x35b4b7b1
// declared property getter: - (BOOL)suppressAssist;	// 0x35b4b9e5
- (id)telephonyParameterDictionary;	// 0x35b4bf41
// declared property getter: - (BOOL)wasAlreadyAssisted;	// 0x35b4ba59
- (id)webSafeTelephoneURL;	// 0x35b4bd35
@end

