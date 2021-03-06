/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSDictionary;

@interface MCDefaultsPayload : MCPayload {
	NSDictionary *_defaultsByDomain;	// 40 = 0x28
}
+ (id)_allowedDefaults;	// 0x3365cef1
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3365ce69
+ (id)typeStrings;	// 0x3365ce41
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3365d3a5
- (void).cxx_destruct;	// 0x3365dc11
- (BOOL)_checkForValidDefaults:(id)validDefaults outError:(id *)error;	// 0x3365cfd1
- (id)defaultsForDomain:(id)domain;	// 0x3365da91
- (id)description;	// 0x3365d9ed
- (id)domains;	// 0x3365da71
- (id)stubDictionary;	// 0x3365d7f1
- (id)subtitle1Description;	// 0x3365dac9
@end

