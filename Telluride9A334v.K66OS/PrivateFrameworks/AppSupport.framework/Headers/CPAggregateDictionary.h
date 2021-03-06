/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library


@interface CPAggregateDictionary : NSObject {
}
@property(readonly, assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x35b18ca1; 
+ (id)sharedAggregateDictionary;	// 0x35b18ca5
- (void)addValue:(long long)value forKey:(id)key;	// 0x35b18c2d
- (void)clearDistributionKey:(id)key;	// 0x35b18c61
- (void)clearScalarKey:(id)key;	// 0x35b18bd9
- (int)commit;	// 0x35b18bc9
- (void)decrementKey:(id)key;	// 0x35b18c15
- (void)incrementKey:(id)key;	// 0x35b18c01
// declared property getter: - (BOOL)isEnabled;	// 0x35b18ca1
- (void)pushValue:(double)value forKey:(id)key;	// 0x35b18c89
- (void)setValue:(double)value forDistributionKey:(id)distributionKey;	// 0x35b18c71
- (void)setValue:(long long)value forScalarKey:(id)scalarKey;	// 0x35b18be9
- (void)significantTimeChanged;	// 0x35b18bb9
- (void)subtractValue:(long long)value forKey:(id)key;	// 0x35b18c45
@end

