/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library


@interface CPAggregateDictionary : NSObject {
}
@property(readonly, assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x33396759; 
+ (id)sharedAggregateDictionary;	// 0x3339675d
- (void)addValue:(long long)value forKey:(id)key;	// 0x333966e5
- (void)clearDistributionKey:(id)key;	// 0x33396719
- (void)clearScalarKey:(id)key;	// 0x33396691
- (int)commit;	// 0x33396681
- (void)decrementKey:(id)key;	// 0x333966cd
- (void)incrementKey:(id)key;	// 0x333966b9
// declared property getter: - (BOOL)isEnabled;	// 0x33396759
- (void)pushValue:(double)value forKey:(id)key;	// 0x33396741
- (void)setValue:(double)value forDistributionKey:(id)distributionKey;	// 0x33396729
- (void)setValue:(long long)value forScalarKey:(id)scalarKey;	// 0x333966a1
- (void)significantTimeChanged;	// 0x33396671
- (void)subtractValue:(long long)value forKey:(id)key;	// 0x333966fd
@end

