/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainCommand.h"

@class NSURL, NSNumber, NSString;

@interface SAClockSearch : SADomainCommand {
}
@property(copy, nonatomic) NSNumber *alCityId;	// G=0x326b19f1; S=0x326b1a0d; 
@property(copy, nonatomic) NSString *countryCode;	// G=0x326b1a5d; S=0x326b1a79; 
@property(copy, nonatomic) NSURL *identifier;	// G=0x326b1ac9; S=0x326b1b45; 
@property(copy, nonatomic) NSString *unlocalizedCityName;	// G=0x326b1ba5; S=0x326b1bc1; 
@property(copy, nonatomic) NSString *unlocalizedCountryName;	// G=0x326b1c11; S=0x326b1c2d; 
+ (id)search;	// 0x326b1961
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x326b19a5
// declared property getter: - (id)alCityId;	// 0x326b19f1
// declared property getter: - (id)countryCode;	// 0x326b1a5d
- (id)encodedClassName;	// 0x326b1955
- (id)groupIdentifier;	// 0x326b1945
// declared property getter: - (id)identifier;	// 0x326b1ac9
- (BOOL)requiresResponse;	// 0x326b1c7d
// declared property setter: - (void)setAlCityId:(id)anId;	// 0x326b1a0d
// declared property setter: - (void)setCountryCode:(id)code;	// 0x326b1a79
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x326b1b45
// declared property setter: - (void)setUnlocalizedCityName:(id)name;	// 0x326b1bc1
// declared property setter: - (void)setUnlocalizedCountryName:(id)name;	// 0x326b1c2d
// declared property getter: - (id)unlocalizedCityName;	// 0x326b1ba5
// declared property getter: - (id)unlocalizedCountryName;	// 0x326b1c11
@end

