/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSArray, NSURL;

@interface SAStockAdd : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *companyName;	// G=0x34235e89; S=0x34235ea5; 
@property(copy, nonatomic) NSArray *stockReferences;	// G=0x34235ef5; S=0x34235f71; 
@property(copy, nonatomic) NSArray *stocks;	// G=0x34235fd9; S=0x34236055; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x34235dad; S=0x34235e29; 
@property(copy, nonatomic) NSString *tickerSymbol;	// G=0x342360bd; S=0x342360d9; 
+ (id)add;	// 0x34235d1d
+ (id)addWithDictionary:(id)dictionary context:(id)context;	// 0x34235d61
// declared property getter: - (id)companyName;	// 0x34235e89
- (id)encodedClassName;	// 0x34235d11
- (id)groupIdentifier;	// 0x34235d01
- (BOOL)requiresResponse;	// 0x34236129
// declared property setter: - (void)setCompanyName:(id)name;	// 0x34235ea5
// declared property setter: - (void)setStockReferences:(id)references;	// 0x34235f71
// declared property setter: - (void)setStocks:(id)stocks;	// 0x34236055
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x34235e29
// declared property setter: - (void)setTickerSymbol:(id)symbol;	// 0x342360d9
// declared property getter: - (id)stockReferences;	// 0x34235ef5
// declared property getter: - (id)stocks;	// 0x34235fd9
// declared property getter: - (id)targetAppId;	// 0x34235dad
// declared property getter: - (id)tickerSymbol;	// 0x342360bd
@end
