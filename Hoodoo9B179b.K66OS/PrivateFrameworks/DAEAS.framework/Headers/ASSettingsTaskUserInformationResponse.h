/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, ASSettingsTaskUserInformationGetResponse;

@interface ASSettingsTaskUserInformationResponse : ASItem {
	NSNumber *_status;	// 40 = 0x28
	ASSettingsTaskUserInformationGetResponse *_getResponse;	// 44 = 0x2c
}
@property(retain, nonatomic) ASSettingsTaskUserInformationGetResponse *getResponse;	// G=0x31dc2695; S=0x31dc26a5; @synthesize=_getResponse
@property(retain, nonatomic) NSNumber *status;	// G=0x31dc2661; S=0x31dc2671; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x31dc21b9
+ (BOOL)frontingBasicTypes;	// 0x31dc22b5
+ (BOOL)notifyOfUnknownTokens;	// 0x31dc2309
+ (BOOL)parsingLeafNode;	// 0x31dc220d
+ (BOOL)parsingWithSubItems;	// 0x31dc2261
- (id)asParseRules;	// 0x31dc2441
- (void)dealloc;	// 0x31dc235d
- (id)description;	// 0x31dc23bd
// declared property getter: - (id)getResponse;	// 0x31dc2695
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x31dc25b5
// declared property setter: - (void)setGetResponse:(id)response;	// 0x31dc26a5
// declared property setter: - (void)setStatus:(id)status;	// 0x31dc2671
// declared property getter: - (id)status;	// 0x31dc2661
@end

