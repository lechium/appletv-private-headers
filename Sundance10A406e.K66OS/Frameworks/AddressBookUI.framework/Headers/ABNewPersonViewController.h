/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UIViewController.h> // Unknown library
#import "AddressBookUI-Structs.h"

@class ABContactsFilter, ABPersonTableViewDataSource, ABPersonViewControllerHelper, _UIAccessDeniedView;
@protocol ABNewPersonViewControllerDelegate, ABStyleProvider;

@interface ABNewPersonViewController : UIViewController {
	id<ABNewPersonViewControllerDelegate> _newPersonViewDelegate;	// 196 = 0xc4
	id _parentGroup;	// 200 = 0xc8
	id _helper;	// 204 = 0xcc
	void *_recordForNewPerson;	// 208 = 0xd0
	ABPersonTableViewDataSource *_dataSource;	// 212 = 0xd4
	_UIAccessDeniedView *_accessDeniedView;	// 216 = 0xd8
	BOOL _isRealViewLoaded;	// 220 = 0xdc
}
@property(readonly, assign, nonatomic) _UIAccessDeniedView *accessDeniedView;	// G=0x31471b49; @synthesize=_accessDeniedView
@property(assign, nonatomic) void *addressBook;	// G=0x3147109d; S=0x314710bd; 
@property(readonly, assign, nonatomic) ABPersonTableViewDataSource *dataSource;	// G=0x31472081; @synthesize=_dataSource
@property(assign, nonatomic) void *displayedPerson;	// G=0x3147111d; S=0x3147113d; 
@property(readonly, assign, nonatomic) ABPersonViewControllerHelper *helper;	// G=0x31470bd9; 
@property(assign, nonatomic) BOOL isRealViewLoaded;	// G=0x31472091; S=0x314720a1; @synthesize=_isRealViewLoaded
@property(assign, nonatomic) id<ABNewPersonViewControllerDelegate> newPersonViewDelegate;	// G=0x3147107d; S=0x3147108d; 
@property(retain, nonatomic) ABContactsFilter *parentContactsFilter;	// G=0x31472061; S=0x31472071; @synthesize=_parentGroup
@property(assign, nonatomic) void *parentGroup;	// G=0x3147115d; S=0x31471185; 
@property(readonly, assign, nonatomic) void *recordForNewPerson;	// G=0x31471981; 
@property(assign, nonatomic) BOOL savesNewContactOnSuspend;	// G=0x314712b1; S=0x31471291; 
@property(assign, nonatomic) BOOL showsCancelButton;	// G=0x3147124d; S=0x31471271; 
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x314710dd; S=0x314710fd; 
- (id)init;	// 0x31470f3d
- (id)initWithNibName:(id)nibName bundle:(id)bundle style:(int)style;	// 0x31470be9
- (id)initWithStyle:(int)style;	// 0x31470f61
- (BOOL)_allowsAutorotation;	// 0x31471d59
- (void)_getRotationContentSettings:(XXStruct_3uUjXA *)settings;	// 0x31471e21
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x31471d9d
- (int)abViewControllerType;	// 0x31471fd9
- (float)ab_heightToFitForViewInPopoverView;	// 0x314718c5
- (void)accessChanged;	// 0x31471fdd
// declared property getter: - (id)accessDeniedView;	// 0x31471b49
// declared property getter: - (void *)addressBook;	// 0x3147109d
- (void)applicationDidResume;	// 0x31471f95
- (void)applicationWillSuspend;	// 0x31471f11
- (void)applicationWillTerminate:(id)application;	// 0x31471f81
- (void)attemptSaveAndTellDelegate:(BOOL)delegate;	// 0x314717e5
- (void)cancel:(id)cancel;	// 0x314716dd
// declared property getter: - (id)dataSource;	// 0x31472081
- (void)dealloc;	// 0x31470f81
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x31471415
// declared property getter: - (void *)displayedPerson;	// 0x3147111d
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x314712d5
// declared property getter: - (id)helper;	// 0x31470bd9
// declared property getter: - (BOOL)isRealViewLoaded;	// 0x31472091
- (void)loadView;	// 0x31471c09
// declared property getter: - (id)newPersonViewDelegate;	// 0x3147107d
// declared property getter: - (id)parentContactsFilter;	// 0x31472061
// declared property getter: - (void *)parentGroup;	// 0x3147115d
// declared property getter: - (void *)recordForNewPerson;	// 0x31471981
- (void)save:(id)save;	// 0x31471831
- (void)saveAndTellDelegate:(BOOL)delegate;	// 0x31471615
- (void)savePerson:(void *)person;	// 0x314714d1
// declared property getter: - (BOOL)savesNewContactOnSuspend;	// 0x314712b1
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x314710bd
// declared property setter: - (void)setDisplayedPerson:(void *)person;	// 0x3147113d
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x31471929
// declared property setter: - (void)setIsRealViewLoaded:(BOOL)loaded;	// 0x314720a1
// declared property setter: - (void)setNewPersonViewDelegate:(id)delegate;	// 0x3147108d
// declared property setter: - (void)setParentContactsFilter:(id)filter;	// 0x31472071
// declared property setter: - (void)setParentGroup:(void *)group;	// 0x31471185
// declared property setter: - (void)setSavesNewContactOnSuspend:(BOOL)suspend;	// 0x31471291
// declared property setter: - (void)setShowsCancelButton:(BOOL)button;	// 0x31471271
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x314710fd
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x31471de9
// declared property getter: - (BOOL)showsCancelButton;	// 0x3147124d
// declared property getter: - (id)styleProvider;	// 0x314710dd
- (void)updateNavigationButtons;	// 0x31471a15
- (void)viewDidAppear:(BOOL)view;	// 0x31471e81
- (void)viewDidLoad;	// 0x314718e5
- (void)viewDidUnload;	// 0x31471d39
- (void)viewWillAppear:(BOOL)view;	// 0x31471e39
- (void)viewWillDisappear:(BOOL)view;	// 0x31471ec9
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x31471ded
@end
