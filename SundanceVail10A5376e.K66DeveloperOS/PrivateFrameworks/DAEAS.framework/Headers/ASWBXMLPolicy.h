/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASPolicy.h"

@class NSMutableDictionary;

@interface ASWBXMLPolicy : ASPolicy {
	NSMutableDictionary *_policyData;	// 52 = 0x34
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x32266d4d
+ (id)asParseRules;	// 0x32266f81
+ (BOOL)frontingBasicTypes;	// 0x32266e49
+ (BOOL)notifyOfUnknownTokens;	// 0x32266e9d
+ (BOOL)parsingLeafNode;	// 0x32266da1
+ (BOOL)parsingWithSubItems;	// 0x32266df5
- (void)_cleanUpPolicyData:(id)data;	// 0x32267461
- (void)_setPolicyData:(id)data;	// 0x32266f3d
- (void)dealloc;	// 0x32266ef1
- (id)perDomainDictsForPolicy;	// 0x32267679
@end
