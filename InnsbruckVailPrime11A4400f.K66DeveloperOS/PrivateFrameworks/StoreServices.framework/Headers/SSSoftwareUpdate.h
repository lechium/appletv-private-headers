/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import </libobjc.A.h>

@class NSDate, NSDictionary, NSString;

@interface SSSoftwareUpdate : NSObject {
	NSDictionary *_dictionary;	// 4 = 0x4
	NSDate *_installDate;	// 8 = 0x8
	int _updateState;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *bundleIdentifier;	// G=0x32854139; 
@property(copy, nonatomic) NSDate *installDate;	// G=0x32854395; S=0x328543a9; @synthesize=_installDate
@property(readonly, assign, nonatomic) int parentalControlsRank;	// G=0x32854219; 
@property(readonly, assign, nonatomic) long long storeItemIdentifier;	// G=0x32854329; 
@property(readonly, assign, nonatomic) NSDictionary *updateDictionary;	// G=0x328543b9; @synthesize=_dictionary
@property(assign, nonatomic) int updateState;	// G=0x328543c9; S=0x328543d9; @synthesize=_updateState
- (id)initWithUpdateDictionary:(id)updateDictionary;	// 0x32854081
// declared property getter: - (id)bundleIdentifier;	// 0x32854139
- (void)dealloc;	// 0x328540d5
// declared property getter: - (id)installDate;	// 0x32854395
// declared property getter: - (int)parentalControlsRank;	// 0x32854219
// declared property setter: - (void)setInstallDate:(id)date;	// 0x328543a9
// declared property setter: - (void)setUpdateState:(int)state;	// 0x328543d9
// declared property getter: - (long long)storeItemIdentifier;	// 0x32854329
// declared property getter: - (id)updateDictionary;	// 0x328543b9
// declared property getter: - (int)updateState;	// 0x328543c9
@end
