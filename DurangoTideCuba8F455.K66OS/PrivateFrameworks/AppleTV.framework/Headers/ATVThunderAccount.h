/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRUserPasswordAccount.h> // Unknown library

@class NSString, NSArray;

@interface ATVThunderAccount : BRUserPasswordAccount {
@private
	NSString *tid;	// 32 = 0x20
	NSString *authid;	// 36 = 0x24
	NSString *nsfg;	// 40 = 0x28
	NSString *sg;	// 44 = 0x2c
	NSArray *privileges;	// 48 = 0x30
	NSArray *choiceTeams;	// 52 = 0x34
	NSArray *errors;	// 56 = 0x38
	NSString *productType;	// 60 = 0x3c
	NSString *expandedProductType;	// 64 = 0x40
}
@property(retain, nonatomic) NSString *authid;	// G=0x306d0d05; S=0x306d0f95; @synthesize
@property(retain, nonatomic) NSArray *choiceTeams;	// G=0x306d0cc5; S=0x306d1035; @synthesize
@property(readonly, assign, nonatomic) NSString *deviceAlias;	// G=0x306d0de5; 
@property(retain, nonatomic) NSArray *errors;	// G=0x306d0cb5; S=0x306d105d; @synthesize
@property(assign, nonatomic) NSString *expandedProductType;	// G=0x306d0c75; S=0x306d0c85; @synthesize
@property(retain, nonatomic) NSString *nsfg;	// G=0x306d0cf5; S=0x306d0fbd; @synthesize
@property(retain, nonatomic) NSArray *privileges;	// G=0x306d0cd5; S=0x306d100d; @synthesize
@property(assign, nonatomic) NSString *productType;	// G=0x306d0c95; S=0x306d0ca5; @synthesize
@property(retain, nonatomic) NSString *sg;	// G=0x306d0ce5; S=0x306d0fe5; @synthesize
@property(retain, nonatomic) NSString *tid;	// G=0x306d0d15; S=0x306d0f6d; @synthesize
@property(readonly, retain, nonatomic) NSString *tidForStreams;	// G=0x306d0d61; 
// declared property getter: - (id)authid;	// 0x306d0d05
- (id)baseURLForKey:(id)key;	// 0x306d0e05
// declared property getter: - (id)choiceTeams;	// 0x306d0cc5
- (void)clearAllProperties;	// 0x306d0e25
- (void)dealloc;	// 0x306d0f09
// declared property getter: - (id)deviceAlias;	// 0x306d0de5
// declared property getter: - (id)errors;	// 0x306d0cb5
// declared property getter: - (id)expandedProductType;	// 0x306d0c75
- (BOOL)isAuthenticated;	// 0x306d0d25
// declared property getter: - (id)nsfg;	// 0x306d0cf5
// declared property getter: - (id)privileges;	// 0x306d0cd5
// declared property getter: - (id)productType;	// 0x306d0c95
- (void)resetAccountOptions;	// 0x306d0ecd
// declared property setter: - (void)setAuthid:(id)authid;	// 0x306d0f95
// declared property setter: - (void)setChoiceTeams:(id)teams;	// 0x306d1035
// declared property setter: - (void)setErrors:(id)errors;	// 0x306d105d
// declared property setter: - (void)setExpandedProductType:(id)type;	// 0x306d0c85
// declared property setter: - (void)setNsfg:(id)nsfg;	// 0x306d0fbd
// declared property setter: - (void)setPrivileges:(id)privileges;	// 0x306d100d
// declared property setter: - (void)setProductType:(id)type;	// 0x306d0ca5
// declared property setter: - (void)setSg:(id)sg;	// 0x306d0fe5
// declared property setter: - (void)setTid:(id)tid;	// 0x306d0f6d
// declared property getter: - (id)sg;	// 0x306d0ce5
// declared property getter: - (id)tid;	// 0x306d0d15
// declared property getter: - (id)tidForStreams;	// 0x306d0d61
- (id)type;	// 0x306d0d41
@end
