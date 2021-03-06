/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString;

@interface SAStockReference : SADomainObject {
}
@property(copy, nonatomic) NSString *companyName;	// G=0x355adbb1; S=0x355adbcd; 
@property(copy, nonatomic) NSString *symbol;	// G=0x355adc1d; S=0x355adc39; 
+ (id)reference;	// 0x355adb21
+ (id)referenceWithDictionary:(id)dictionary context:(id)context;	// 0x355adb65
// declared property getter: - (id)companyName;	// 0x355adbb1
- (id)encodedClassName;	// 0x355adb15
- (id)groupIdentifier;	// 0x355adb05
// declared property setter: - (void)setCompanyName:(id)name;	// 0x355adbcd
// declared property setter: - (void)setSymbol:(id)symbol;	// 0x355adc39
// declared property getter: - (id)symbol;	// 0x355adc1d
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x355adc89
@end

