/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library
#import "AddressBookUI-Structs.h"

@class NSString;

@interface ABActionsController : NSObject {
@private
	void *_person;	// 4 = 0x4
	int _property;	// 8 = 0x8
	int _recordID;	// 12 = 0xc
	int _multiValueIdentifier;	// 16 = 0x10
	id _value;	// 20 = 0x14
	NSString *_stringValue;	// 24 = 0x18
	void *_context;	// 28 = 0x1c
	int _lastPropertyForActions;	// 32 = 0x20
	CFArrayRef _actionsForProperty;	// 36 = 0x24
}
@property(assign) void *context;	// G=0x34c7fd19; S=0x34c7f6d5; converted property
@property(assign) void *person;	// G=0x34c7fd09; S=0x34c7f601; converted property
@property(retain) NSString *stringValue;	// G=0x34c9cac1; S=0x34c7f691; converted property
@property(retain) id value;	// G=0x34c9cad1; S=0x34c7f63d; converted property
+ (int)defaultActionForProperty:(int)property;	// 0x34c9c83d
+ (id)newActionsControllerForProperty:(int)property;	// 0x34c9c805
- (id)init;	// 0x34c9c8f5
- (id)initWithProperty:(int)property;	// 0x34c7f47d
- (int)_actionAtIndex:(int)index forProperty:(int)property;	// 0x34c9cc6d
- (CFArrayRef)_actionsForProperty:(int)property;	// 0x34c9cae1
- (void)_performAction:(int)action forProperty:(int)property;	// 0x34c7f705
- (int)actionsCountForProperty:(int)property;	// 0x34c9c909
// converted property getter: - (void *)context;	// 0x34c7fd19
- (void)dealloc;	// 0x34c7fd95
- (int)defaultAction;	// 0x34c9ca31
- (void)performAction:(int)action;	// 0x34c7f6e5
- (void)performActionAtIndex:(int)index forProperty:(int)property;	// 0x34c9ca8d
- (void)performDefaultAction;	// 0x34c9ca5d
// converted property getter: - (void *)person;	// 0x34c7fd09
- (void)resetPrimaryPropertyActions;	// 0x34c9c9f9
// converted property setter: - (void)setContext:(void *)context;	// 0x34c7f6d5
- (void)setMultiValueIdentifier:(int)identifier;	// 0x34c7f681
// converted property setter: - (void)setPerson:(void *)person;	// 0x34c7f601
- (void)setRecordID:(int)anId;	// 0x34c7f62d
// converted property setter: - (void)setStringValue:(id)value;	// 0x34c7f691
// converted property setter: - (void)setValue:(id)value;	// 0x34c7f63d
// converted property getter: - (id)stringValue;	// 0x34c9cac1
- (id)titleAtIndex:(int)index forProperty:(int)property;	// 0x34c9c9c9
- (id)titleForAction:(int)action;	// 0x34c9c92d
- (id)urlForAction:(int)action forProperty:(int)property;	// 0x34c7f789
// converted property getter: - (id)value;	// 0x34c9cad1
@end

