/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSError.h> // Unknown library


@interface NSError (MCExtension)
+ (id)MCErrorWithDomain:(id)domain code:(int)code description:(id)description errorType:(id)type;	// 0x33649601
+ (id)MCErrorWithDomain:(id)domain code:(int)code descriptionArray:(id)array errorType:(id)type;	// 0x3364969d
+ (id)MCErrorWithDomain:(id)domain code:(int)code descriptionArray:(id)array suggestion:(id)suggestion USEnglishSuggestion:(id)suggestion5 underlyingError:(id)error errorType:(id)type;	// 0x3364970d
+ (id)MCErrorWithDomain:(id)domain code:(int)code descriptionArray:(id)array underlyingError:(id)error errorType:(id)type;	// 0x336496d5
- (BOOL)MCContainsErrorDomain:(id)domain code:(int)code;	// 0x3364a1c9
- (id)MCErrorType;	// 0x3364a365
- (id)MCFindPrimaryError;	// 0x33649f7d
- (id)MCMakePrimaryError;	// 0x3364a0c9
- (id)MCUSEnglishDescription;	// 0x3364a2c5
- (id)MCUSEnglishSuggestion;	// 0x3364a315
- (id)MCVerboseDescription;	// 0x33649b99
@end
