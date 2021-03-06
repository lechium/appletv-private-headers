/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABCardPropertyPickerDelegate.h"
#import "ABPickerViewController.h"

@class NSArray;

@interface ABPropertyPickerViewController : ABPickerViewController <ABCardPropertyPickerDelegate> {
	CFArrayRef _properties;	// 236 = 0xec
	NSArray *_policies;	// 240 = 0xf0
	void *_addressBook;	// 244 = 0xf4
	void *_person;	// 248 = 0xf8
}
@property(assign, nonatomic) void *addressBook;	// G=0x3718a329; S=0x3718a339; 
@property(assign, nonatomic) void *person;	// G=0x3718a36d; S=0x3718a37d; 
@property(retain, nonatomic) NSArray *policies;	// G=0x3718a45d; S=0x3718a46d; @synthesize=_policies
@property(assign, nonatomic) CFArrayRef properties;	// G=0x3718a2a5; S=0x3718a2b5; 
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x37189ed9
- (void)_getRotationContentSettings:(XXStruct_3uUjXA *)settings;	// 0x3718a3b1
- (float)ab_heightToFitForViewInPopoverView;	// 0x3718a141
// declared property getter: - (void *)addressBook;	// 0x3718a329
- (void)dealloc;	// 0x37189fa5
- (void)loadView;	// 0x3718a051
// declared property getter: - (void *)person;	// 0x3718a36d
// declared property getter: - (id)policies;	// 0x3718a45d
// declared property getter: - (CFArrayRef)properties;	// 0x3718a2a5
- (id)propertyPicker;	// 0x3718a131
- (void)propertyPicker:(id)picker selectedProperty:(int)property;	// 0x3718a411
- (void)propertyPicker:(id)picker selectedProperty:(int)property withDefaultValue:(id)defaultValue;	// 0x3718a425
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x3718a339
// declared property setter: - (void)setPerson:(void *)person;	// 0x3718a37d
// declared property setter: - (void)setPolicies:(id)policies;	// 0x3718a46d
// declared property setter: - (void)setProperties:(CFArrayRef)properties;	// 0x3718a2b5
- (void)viewWillAppear:(BOOL)view;	// 0x3718a3c5
@end

