/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSDictionary.h> // Unknown library


@interface NSDictionary (MCUtilities)
- (id)MCDeepCopy;	// 0x305b19c1
- (id)MCDeepCopyWithZone:(NSZone *)zone;	// 0x305b19b1
- (id)MCMutableDeepCopy;	// 0x305b199d
- (id)MCMutableDeepCopyWithZone:(NSZone *)zone;	// 0x305b1749
- (id)MCRetainOptionalNonZeroLengthStringKey:(id)key errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x305b1e01
- (id)MCRetainOptionalObjectKey:(id)key type:(Class)type errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x305b1b51
- (id)MCRetainRequiredNonZeroLengthStringKey:(id)key errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code5 invalidDataErrorString:(id)string6 outError:(id *)error;	// 0x305b1c55
- (id)MCRetainRequiredObjectKey:(id)key type:(Class)type errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code6 invalidDataErrorString:(id)string7 outError:(id *)error;	// 0x305b19d5
@end

