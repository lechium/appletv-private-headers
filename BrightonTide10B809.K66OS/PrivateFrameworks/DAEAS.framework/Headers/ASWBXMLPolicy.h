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
+ (BOOL)acceptsTopLevelLeaves;	// 0x339d6c5d
+ (id)asParseRules;	// 0x339d6e91
+ (BOOL)frontingBasicTypes;	// 0x339d6d59
+ (BOOL)notifyOfUnknownTokens;	// 0x339d6dad
+ (BOOL)parsingLeafNode;	// 0x339d6cb1
+ (BOOL)parsingWithSubItems;	// 0x339d6d05
- (void)_cleanUpPolicyData:(id)data;	// 0x339d7371
- (void)_setPolicyData:(id)data;	// 0x339d6e4d
- (void)dealloc;	// 0x339d6e01
- (id)perDomainDictsForPolicy;	// 0x339d7589
@end

