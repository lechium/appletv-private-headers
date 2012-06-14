/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, TLCapabilitiesManager;

@interface TLVibrationManager : NSObject {
@private
	NSDictionary *_vibrationPatterns;	// 4 = 0x4
	NSDictionary *_userGeneratedVibrationPatterns;	// 8 = 0x8
	id _capabilitiesManager;	// 12 = 0xc
	BOOL _allowsAutoRefresh;	// 16 = 0x10
	BOOL _needsRefresh;	// 17 = 0x11
	BOOL _unitTestingMode;	// 18 = 0x12
}
@property(readonly, assign, nonatomic) BOOL _areCustomVibrationsAllowed;	// G=0x3158d27d; 
@property(readonly, assign, nonatomic) TLCapabilitiesManager *_capabilitiesManager;	// G=0x3158d221; 
@property(readonly, assign, nonatomic) NSDictionary *_userGeneratedVibrationPatterns;	// G=0x3158d835; 
@property(readonly, assign, nonatomic) NSDictionary *_vibrationPatterns;	// G=0x3158d2b9; 
@property(assign, nonatomic) BOOL allowsAutoRefresh;	// G=0x3158e101; S=0x3158cdd5; @synthesize=_allowsAutoRefresh
@property(readonly, assign, nonatomic) BOOL needsRefresh;	// G=0x3158e0f1; @synthesize=_needsRefresh
+ (void)_handleSystemVibrationDidChangeNotification;	// 0x3158d7d9
+ (void)releaseSharedVibrationManager;	// 0x3158ca4d
+ (id)sharedVibrationManager;	// 0x3158ca05
- (id)init;	// 0x3158ca85
- (id)initWithUnitTestingModeEnabled:(BOOL)unitTestingModeEnabled;	// 0x3158ca99
// declared property getter: - (BOOL)_areCustomVibrationsAllowed;	// 0x3158d27d
// declared property getter: - (id)_capabilitiesManager;	// 0x3158d221
- (id)_copyNameOfVibrationWithIdentifier:(id)identifier;	// 0x3158d4dd
- (id)_copyPatternForVibrationWithIdentifier:(id)identifier;	// 0x3158d5e5
- (void)_handleUserGeneratedVibrationsDidChangeNotification;	// 0x3158d821
- (id)_localizedNameForVibrationWithIdentifier:(id)identifier;	// 0x3158d391
- (unsigned)_numberOfUserGeneratedVibrations;	// 0x3158e041
- (BOOL)_removeAllUserGeneratedVibrationsWithError:(id *)error;	// 0x3158e069
- (BOOL)_saveUserGeneratedVibrationPatterns:(id)patterns error:(id *)error;	// 0x3158dbe5
- (BOOL)_sendUserGeneratedVibrationPatternsAffectingMessage:(id)message error:(id *)error;	// 0x3158d9dd
// declared property getter: - (id)_userGeneratedVibrationPatterns;	// 0x3158d835
// declared property getter: - (id)_vibrationPatterns;	// 0x3158d2b9
- (id)addUserGeneratedVibrationPattern:(id)pattern name:(id)name error:(id *)error;	// 0x3158dc8d
// declared property getter: - (BOOL)allowsAutoRefresh;	// 0x3158e101
- (id)copyNameOfVibrationWithIdentifier:(id)identifier;	// 0x3158d5c5
- (id)copyPatternForVibrationWithIdentifier:(id)identifier;	// 0x3158d681
- (id)copyUserGeneratedVibrationIdentifiers;	// 0x3158d771
- (id)copyVibrationIdentifiers;	// 0x3158d739
- (id)currentVibrationIdentifierForType:(unsigned)type;	// 0x3158cfa9
- (id)currentVibrationNameForType:(unsigned)type;	// 0x3158d065
- (id)currentVibrationPatternForType:(unsigned)type;	// 0x3158d0a5
- (void)dealloc;	// 0x3158cc55
- (id)defaultVibrationIdentifierForType:(unsigned)type;	// 0x3158d115
- (id)defaultVibrationNameForType:(unsigned)type;	// 0x3158d14d
- (id)defaultVibrationPatternForType:(unsigned)type;	// 0x3158d18d
- (BOOL)deleteUserGeneratedVibrationPatternWithIdentifier:(id)identifier error:(id *)error;	// 0x3158df91
// declared property getter: - (BOOL)needsRefresh;	// 0x3158e0f1
- (id)noneVibrationIdentifier;	// 0x3158d1d5
- (id)noneVibrationName;	// 0x3158d1e1
- (BOOL)refresh;	// 0x3158cea5
// declared property setter: - (void)setAllowsAutoRefresh:(BOOL)refresh;	// 0x3158cdd5
- (void)setCurrentVibrationIdentifier:(id)identifier forType:(unsigned)type;	// 0x3158cf01
- (BOOL)setName:(id)name forUserGeneratedVibrationWithIdentifier:(id)identifier error:(id *)error;	// 0x3158de89
- (BOOL)vibrationWithIdentifierIsValid:(id)identifierIsValid;	// 0x3158d7a9
@end
