/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library

@class NSArray;
@protocol ABStyleProvider;

@interface ABAbstractPropertyGroup : NSObject {
	NSArray *_people;	// 4 = 0x4
	id<ABStyleProvider> _styleProvider;	// 8 = 0x8
	BOOL _hasChanges;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL hasChanges;	// G=0x34c633cd; S=0x34c61e19; @synthesize=_hasChanges
@property(retain, nonatomic) NSArray *people;	// G=0x34c62045; S=0x34c61675; @synthesize=_people
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x34cbba49; S=0x34c634f5; @synthesize=_styleProvider
- (id)init;	// 0x34c61581
- (BOOL)canSave;	// 0x34cbb97d
- (void)dealloc;	// 0x34c7d929
// declared property getter: - (BOOL)hasChanges;	// 0x34c633cd
// declared property getter: - (id)people;	// 0x34c62045
- (int)property;	// 0x34cbb8a9
- (void)reloadFromModel;	// 0x34c61d39
// declared property setter: - (void)setHasChanges:(BOOL)changes;	// 0x34c61e19
// declared property setter: - (void)setPeople:(id)people;	// 0x34c61675
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x34c634f5
// declared property getter: - (id)styleProvider;	// 0x34cbba49
- (void)updateRecord;	// 0x34cbb8b1
@end

