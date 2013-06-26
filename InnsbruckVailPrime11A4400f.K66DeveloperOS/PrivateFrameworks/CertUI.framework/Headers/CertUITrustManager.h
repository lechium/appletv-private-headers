/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

#import </libobjc.A.h>
#import "CertUI-Structs.h"

@class NSString;

@interface CertUITrustManager : NSObject {
	NSString *_access;	// 4 = 0x4
}
+ (void)_migrateVersionZeroFromAccessGroup:(id)accessGroup toGroup:(id)group;	// 0x303ab2a1
+ (id)defaultTrustManager;	// 0x303aa731
+ (void)migrateFromVersionOne;	// 0x303ab5f1
+ (void)migrateFromVersionZero;	// 0x303ab5b1
- (id)init;	// 0x303aa7f1
- (id)initWithAccessGroup:(id)accessGroup;	// 0x303aa79d
- (int)_actionForTrust:(SecTrust *)trust exceptions:(id)exceptions;	// 0x303aa851
- (BOOL)_hasExceptionsForSMIMETrust:(SecTrust *)smimetrust sender:(id)sender;	// 0x303ab165
- (int)actionForSMIMETrust:(SecTrust *)smimetrust sender:(id)sender;	// 0x303aab69
- (int)actionForSSLTrust:(SecTrust *)ssltrust hostname:(id)hostname service:(id)service;	// 0x303aa8a1
- (int)actionForTrust:(SecTrust *)trust forHost:(id)host andService:(id)service;	// 0x303ab135
- (void)addSMIMETrust:(SecTrust *)trust sender:(id)sender;	// 0x303aae45
- (void)addSSLTrust:(SecTrust *)trust hostname:(id)hostname service:(id)service;	// 0x303aac6d
- (void)allowTrust:(SecTrust *)trust forHost:(id)host service:(id)service;	// 0x303ab145
- (void)clearSavedTrustSettingsForTrust:(SecTrust *)trust host:(id)host service:(id)service;	// 0x303ab155
- (void)dealloc;	// 0x303aa805
- (void)removeAllTrusts;	// 0x303ab059
- (void)removeSMIMETrust:(SecTrust *)trust sender:(id)sender;	// 0x303aafd9
- (void)removeSSLTrust:(SecTrust *)trust hostname:(id)hostname service:(id)service;	// 0x303aaed9
@end
