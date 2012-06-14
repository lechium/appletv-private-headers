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
+ (BOOL)acceptsTopLevelLeaves;	// 0x309481b5
+ (id)asParseRules;	// 0x309483e9
+ (BOOL)frontingBasicTypes;	// 0x309482b1
+ (BOOL)notifyOfUnknownTokens;	// 0x30948305
+ (BOOL)parsingLeafNode;	// 0x30948209
+ (BOOL)parsingWithSubItems;	// 0x3094825d
- (void)_cleanUpPolicyData:(id)data;	// 0x309488c9
- (void)_setPolicyData:(id)data;	// 0x309483a5
- (void)dealloc;	// 0x30948359
- (id)perDomainDictsForPolicy;	// 0x30948ae1
@end

