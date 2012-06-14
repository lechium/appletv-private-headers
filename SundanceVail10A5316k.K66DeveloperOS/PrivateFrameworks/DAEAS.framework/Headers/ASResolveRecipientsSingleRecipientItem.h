/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSString, ASResolveRecipientsCertificatesItem;

@interface ASResolveRecipientsSingleRecipientItem : ASItem {
	NSString *_emailAddress;	// 40 = 0x28
	ASResolveRecipientsCertificatesItem *_certificates;	// 44 = 0x2c
}
@property(retain) ASResolveRecipientsCertificatesItem *certificates;	// G=0x309a9e3d; S=0x309a9e51; @synthesize=_certificates
@property(retain) NSString *emailAddress;	// G=0x309a9e19; S=0x309a9e2d; @synthesize=_emailAddress
+ (BOOL)acceptsTopLevelLeaves;	// 0x309a98b5
+ (id)asParseRules;	// 0x309a9a59
+ (BOOL)frontingBasicTypes;	// 0x309a99b1
+ (BOOL)notifyOfUnknownTokens;	// 0x309a9a05
+ (BOOL)parsingLeafNode;	// 0x309a9909
+ (BOOL)parsingWithSubItems;	// 0x309a995d
// declared property getter: - (id)certificates;	// 0x309a9e3d
- (id)description;	// 0x309a9da1
// declared property getter: - (id)emailAddress;	// 0x309a9e19
// declared property setter: - (void)setCertificates:(id)certificates;	// 0x309a9e51
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x309a9e2d
@end

