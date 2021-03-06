/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

@interface TLVibrationManager : NSObject {
	BOOL _needsRefresh;	// 4 = 0x4
	BOOL _allowsAutoRefresh;	// 5 = 0x5
	BOOL _unitTestingModeEnabled;	// 6 = 0x6
	NSDictionary *_cachedVibrationPatterns;	// 8 = 0x8
	NSDictionary *_cachedUserGeneratedVibrationPatterns;	// 12 = 0xc
}
@property(assign, nonatomic, setter=_setAllowsAutoRefresh:) BOOL _allowsAutoRefresh;	// G=0x33ab871d; S=0x33ab872d; @synthesize
@property(retain, nonatomic, setter=_setCachedUserGeneratedVibrationPatterns:) NSDictionary *_cachedUserGeneratedVibrationPatterns;	// G=0x33ab877d; S=0x33ab878d; @synthesize
@property(retain, nonatomic, setter=_setCachedVibrationPatterns:) NSDictionary *_cachedVibrationPatterns;	// G=0x33ab875d; S=0x33ab876d; @synthesize
@property(assign, nonatomic, getter=_isUnitTestingModeEnabled, setter=_setUnitTestingModeEnabled:) BOOL _unitTestingModeEnabled;	// G=0x33ab873d; S=0x33ab874d; @synthesize
@property(readonly, assign, nonatomic) NSDictionary *_userGeneratedVibrationPatterns;	// G=0x33ab7a1d; 
@property(readonly, assign, nonatomic) NSDictionary *_vibrationPatterns;	// G=0x33ab742d; 
@property(assign, nonatomic) BOOL allowsAutoRefresh;	// G=0x33ab6efd; S=0x33ab6f15; 
@property(assign, nonatomic) BOOL needsRefresh;	// G=0x33ab86fd; @synthesize=_needsRefresh
+ (void)_handleSystemVibrationDidChangeNotification;	// 0x33ab79c1
+ (void)releaseSharedVibrationManager;	// 0x33ab6b4d
+ (id)sharedVibrationManager;	// 0x33ab6afd
- (id)init;	// 0x33ab6b91
- (id)initWithUnitTestingModeEnabled:(BOOL)unitTestingModeEnabled;	// 0x33ab6ba5
// declared property getter: - (BOOL)_allowsAutoRefresh;	// 0x33ab871d
// declared property getter: - (id)_cachedUserGeneratedVibrationPatterns;	// 0x33ab877d
// declared property getter: - (id)_cachedVibrationPatterns;	// 0x33ab875d
- (id)_copySystemWideVibrationPatternPreferenceKeyForAlertType:(int)alertType accountIdentifier:(id)identifier;	// 0x33ab7949
- (id)_currentVibrationIdentifierForAlertType:(int)alertType accountIdentifier:(id)identifier;	// 0x33ab70c9
- (void)_handleUserGeneratedVibrationsDidChangeNotification;	// 0x33ab7a09
// declared property getter: - (BOOL)_isUnitTestingModeEnabled;	// 0x33ab873d
- (id)_localizedNameForVibrationWithIdentifier:(id)identifier;	// 0x33ab7501
- (void)_makeSystemVibrationDataMigrationVersionCurrentIfNecessary;	// 0x33ab85d1
- (BOOL)_migrateLegacySettings;	// 0x33ab8371
- (id)_nameOfVibrationWithIdentifier:(id)identifier;	// 0x33ab764d
- (unsigned)_numberOfUserGeneratedVibrations;	// 0x33ab82c1
- (BOOL)_removeAllUserGeneratedVibrationsWithError:(id *)error;	// 0x33ab82e9
- (BOOL)_saveUserGeneratedVibrationPatterns:(id)patterns error:(id *)error;	// 0x33ab7ea5
- (BOOL)_sendUserGeneratedVibrationPatternsAffectingMessage:(id)message error:(id *)error;	// 0x33ab7c81
// declared property setter: - (void)_setAllowsAutoRefresh:(BOOL)refresh;	// 0x33ab872d
// declared property setter: - (void)_setCachedUserGeneratedVibrationPatterns:(id)patterns;	// 0x33ab878d
// declared property setter: - (void)_setCachedVibrationPatterns:(id)patterns;	// 0x33ab876d
- (void)_setNeedsRefresh:(BOOL)refresh;	// 0x33ab870d
// declared property setter: - (void)_setUnitTestingModeEnabled:(BOOL)enabled;	// 0x33ab874d
- (unsigned)_storedSystemVibrationDataMigrationVersion;	// 0x33ab8561
// declared property getter: - (id)_userGeneratedVibrationPatterns;	// 0x33ab7a1d
// declared property getter: - (id)_vibrationPatterns;	// 0x33ab742d
- (id)addUserGeneratedVibrationPattern:(id)pattern name:(id)name error:(id *)error;	// 0x33ab7f4d
- (id)allSystemVibrationIdentifiers;	// 0x33ab786d
- (id)allUserGeneratedVibrationIdentifiers;	// 0x33ab7905
// declared property getter: - (BOOL)allowsAutoRefresh;	// 0x33ab6efd
- (id)currentVibrationIdentifierForAlertType:(int)alertType;	// 0x33ab7091
- (id)currentVibrationIdentifierForAlertType:(int)alertType accountIdentifier:(id)identifier;	// 0x33ab71b9
- (id)currentVibrationIdentifierForType:(int)type;	// 0x33ab879d
- (id)currentVibrationIdentifierForType:(int)type accountIdentifier:(id)identifier;	// 0x33ab87bd
- (id)currentVibrationNameForAlertType:(int)alertType;	// 0x33ab72b5
- (id)currentVibrationNameForType:(int)type;	// 0x33ab87dd
- (id)currentVibrationPatternForAlertType:(int)alertType;	// 0x33ab72e5
- (id)currentVibrationPatternForType:(int)type;	// 0x33ab87ed
- (void)dealloc;	// 0x33ab6d89
- (id)defaultVibrationIdentifierForAlertType:(int)alertType;	// 0x33ab7321
- (id)defaultVibrationNameForAlertType:(int)alertType;	// 0x33ab7349
- (id)defaultVibrationPatternForAlertType:(int)alertType;	// 0x33ab7379
- (BOOL)deleteUserGeneratedVibrationPatternWithIdentifier:(id)identifier error:(id *)error;	// 0x33ab8211
- (id)nameOfVibrationWithIdentifier:(id)identifier;	// 0x33ab7715
// declared property getter: - (BOOL)needsRefresh;	// 0x33ab86fd
- (id)noneVibrationIdentifier;	// 0x33ab73c1
- (id)noneVibrationName;	// 0x33ab73cd
- (id)noneVibrationPattern;	// 0x33ab73fd
- (id)patternForVibrationWithIdentifier:(id)identifier;	// 0x33ab772d
- (id)patternForVibrationWithIdentifier:(id)identifier repeating:(BOOL)repeating;	// 0x33ab77b9
- (BOOL)refresh;	// 0x33ab7005
// declared property setter: - (void)setAllowsAutoRefresh:(BOOL)refresh;	// 0x33ab6f15
- (void)setCurrentVibrationIdentifier:(id)identifier forAlertType:(int)alertType;	// 0x33ab70a5
- (void)setCurrentVibrationIdentifier:(id)identifier forAlertType:(int)alertType accountIdentifier:(id)identifier3;	// 0x33ab71f1
- (void)setCurrentVibrationIdentifier:(id)identifier forType:(int)type;	// 0x33ab87ad
- (void)setCurrentVibrationIdentifier:(id)identifier forType:(int)type accountIdentifier:(id)identifier3;	// 0x33ab87cd
- (BOOL)setName:(id)name forUserGeneratedVibrationWithIdentifier:(id)identifier error:(id *)error;	// 0x33ab810d
- (BOOL)vibrationWithIdentifierIsValid:(id)identifierIsValid;	// 0x33ab792d
@end

