/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber, NSMutableArray;

@interface ASResolveRecipientsCertificatesItem : ASItem {
	NSNumber *_certCount;	// 40 = 0x28
	NSNumber *_recipientCount;	// 44 = 0x2c
	NSNumber *_easStatus;	// 48 = 0x30
	NSMutableArray *_certificates;	// 52 = 0x34
}
@property(retain) NSNumber *certCount;	// G=0x322c9159; S=0x322c916d; @synthesize=_certCount
@property(readonly, assign) NSArray *certificates;	// G=0x322c91c5; @synthesize=_certificates
@property(retain) NSNumber *easStatus;	// G=0x322c91a1; @synthesize=_easStatus
@property(retain) NSNumber *recipientCount;	// G=0x322c917d; S=0x322c9191; @synthesize=_recipientCount
+ (BOOL)acceptsTopLevelLeaves;	// 0x322c8a4d
+ (id)asParseRules;	// 0x322c8c5d
+ (BOOL)frontingBasicTypes;	// 0x322c8b49
+ (BOOL)notifyOfUnknownTokens;	// 0x322c8b9d
+ (BOOL)parsingLeafNode;	// 0x322c8aa1
+ (BOOL)parsingWithSubItems;	// 0x322c8af5
- (void)addCertificateString:(id)string;	// 0x322c8bf1
// declared property getter: - (id)certCount;	// 0x322c9159
// declared property getter: - (id)certificates;	// 0x322c91c5
- (void)dealloc;	// 0x322c90cd
- (id)description;	// 0x322c8f1d
// declared property getter: - (id)easStatus;	// 0x322c91a1
// declared property getter: - (id)recipientCount;	// 0x322c917d
// declared property setter: - (void)setCertCount:(id)count;	// 0x322c916d
- (void)setEASStatus:(id)status;	// 0x322c91b5
// declared property setter: - (void)setRecipientCount:(id)count;	// 0x322c9191
@end
