/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASPolicy.h"

@class NSString;

@interface ASWAPXMLPolicy : ASPolicy {
	NSString *_data;	// 52 = 0x34
}
@property(readonly, retain) NSString *data;	// G=0x31db1741; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x31db1551
+ (BOOL)frontingBasicTypes;	// 0x31db164d
+ (BOOL)notifyOfUnknownTokens;	// 0x31db16a1
+ (BOOL)parsingLeafNode;	// 0x31db15a5
+ (BOOL)parsingWithSubItems;	// 0x31db15f9
- (id)_policyForWAPProvisioningXMLData;	// 0x31db192d
- (void)_setData:(id)data;	// 0x31db1761
- (id)_wbxmlPolicyDict;	// 0x31db1f7d
- (id)asParseRules;	// 0x31db17a5
// converted property getter: - (id)data;	// 0x31db1741
- (void)dealloc;	// 0x31db16f5
- (id)perDomainDictsForPolicy;	// 0x31db2481
@end

