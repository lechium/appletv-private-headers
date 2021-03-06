/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSMutableSet, NSString;

@interface ASSettingsTaskAccountEmailAddresses : ASItem {
	NSMutableSet *_emailAddresses;	// 40 = 0x28
	NSString *_primarySMTPAddress;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) NSArray *emailAddresses;	// G=0x339e81e1; 
@property(readonly, assign) NSString *primarySMTPAddress;	// G=0x339e8635; @synthesize=_primarySMTPAddress
+ (BOOL)acceptsTopLevelLeaves;	// 0x339e803d
+ (id)asParseRules;	// 0x339e8399
+ (BOOL)frontingBasicTypes;	// 0x339e8139
+ (BOOL)notifyOfUnknownTokens;	// 0x339e818d
+ (BOOL)parsingLeafNode;	// 0x339e8091
+ (BOOL)parsingWithSubItems;	// 0x339e80e5
- (void)addEmailAddress:(id)address;	// 0x339e8201
- (void)dealloc;	// 0x339e82c5
- (id)description;	// 0x339e8329
// declared property getter: - (id)emailAddresses;	// 0x339e81e1
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x339e858d
// declared property getter: - (id)primarySMTPAddress;	// 0x339e8635
- (void)setPrimarySMTPAddress:(id)address;	// 0x339e826d
@end

