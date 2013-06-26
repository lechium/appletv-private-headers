/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSArray;

@interface MCAPNPayload : MCPayload {
	NSArray *_apnInfos;	// 40 = 0x28
	BOOL _wasInstalled;	// 44 = 0x2c
}
@property(assign, nonatomic) BOOL wasInstalled;	// G=0x344bec8d; S=0x344bec9d; @synthesize=_wasInstalled
+ (id)apnDomainName;	// 0x344bdaf5
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x344bda6d
+ (id)typeStrings;	// 0x344bda45
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x344be2e5
- (void).cxx_destruct;	// 0x344becad
- (BOOL)_checkForValidContents:(id)validContents outError:(id *)error;	// 0x344bdb89
- (void)_finishInitializationWithContents:(id)contents;	// 0x344bdf11
- (id)_strippedAPNDefaults;	// 0x344be7d5
- (id)_validationErrorType:(int)type forInvalidKey:(id)invalidKey;	// 0x344bdb0d
- (id)apnDefaults;	// 0x344be66d
- (id)description;	// 0x344beabd
// declared property setter: - (void)setWasInstalled:(BOOL)installed;	// 0x344bec9d
- (id)stubDictionary;	// 0x344be93d
- (id)subtitle1Description;	// 0x344beb45
- (id)subtitle1Label;	// 0x344beb35
- (id)subtitle2Description;	// 0x344bebf1
- (id)subtitle2Label;	// 0x344bebe1
// declared property getter: - (BOOL)wasInstalled;	// 0x344bec8d
@end
