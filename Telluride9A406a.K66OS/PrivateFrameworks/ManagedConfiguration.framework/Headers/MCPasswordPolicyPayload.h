/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSNumber;

@interface MCPasswordPolicyPayload : MCPayload {
	NSNumber *_isSimplePasscodeAllowed;	// 40 = 0x28
	NSNumber *_isPasscodeRequired;	// 44 = 0x2c
	NSNumber *_isAlphanumericPasscodeRequired;	// 48 = 0x30
	NSNumber *_isManualFetchingWhenRoaming;	// 52 = 0x34
	NSNumber *_minLength;	// 56 = 0x38
	NSNumber *_maxFailedAttempts;	// 60 = 0x3c
	NSNumber *_maxGracePeriodMinutes;	// 64 = 0x40
	NSNumber *_maxInactivityMinutes;	// 68 = 0x44
	NSNumber *_maxPasscodeAgeDays;	// 72 = 0x48
	NSNumber *_passcodeHistoryCount;	// 76 = 0x4c
	NSNumber *_minComplexCharacters;	// 80 = 0x50
}
@property(readonly, assign) NSNumber *isAlphanumericPasscodeRequired;	// G=0x36461329; @synthesize=_isAlphanumericPasscodeRequired
@property(readonly, assign) NSNumber *isManualFetchingWhenRoaming;	// G=0x36461319; @synthesize=_isManualFetchingWhenRoaming
@property(readonly, assign) NSNumber *isPasscodeRequired;	// G=0x36461339; @synthesize=_isPasscodeRequired
@property(readonly, assign) NSNumber *isSimplePasscodeAllowed;	// G=0x36461349; @synthesize=_isSimplePasscodeAllowed
@property(readonly, assign) NSNumber *maxFailedAttempts;	// G=0x364612f9; @synthesize=_maxFailedAttempts
@property(readonly, assign) NSNumber *maxGracePeriodMinutes;	// G=0x364612e9; @synthesize=_maxGracePeriodMinutes
@property(readonly, assign) NSNumber *maxInactivityMinutes;	// G=0x364612d9; @synthesize=_maxInactivityMinutes
@property(readonly, assign) NSNumber *maxPasscodeAgeDays;	// G=0x364612b9; @synthesize=_maxPasscodeAgeDays
@property(readonly, assign) NSNumber *minComplexCharacters;	// G=0x364612a9; @synthesize=_minComplexCharacters
@property(readonly, assign) NSNumber *minLength;	// G=0x36461309; @synthesize=_minLength
@property(readonly, assign) NSNumber *passcodeHistoryCount;	// G=0x364612c9; @synthesize=_passcodeHistoryCount
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x364614bd
+ (id)typeStrings;	// 0x3646151d
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x36461cb1
- (void)dealloc;	// 0x36461359
- (id)description;	// 0x3646181d
// declared property getter: - (id)isAlphanumericPasscodeRequired;	// 0x36461329
// declared property getter: - (id)isManualFetchingWhenRoaming;	// 0x36461319
// declared property getter: - (id)isPasscodeRequired;	// 0x36461339
// declared property getter: - (id)isSimplePasscodeAllowed;	// 0x36461349
// declared property getter: - (id)maxFailedAttempts;	// 0x364612f9
// declared property getter: - (id)maxGracePeriodMinutes;	// 0x364612e9
// declared property getter: - (id)maxInactivityMinutes;	// 0x364612d9
// declared property getter: - (id)maxPasscodeAgeDays;	// 0x364612b9
// declared property getter: - (id)minComplexCharacters;	// 0x364612a9
// declared property getter: - (id)minLength;	// 0x36461309
// declared property getter: - (id)passcodeHistoryCount;	// 0x364612c9
- (id)stubDictionary;	// 0x36461b15
- (id)subtitle1Description;	// 0x36461545
- (id)title;	// 0x3646180d
@end

