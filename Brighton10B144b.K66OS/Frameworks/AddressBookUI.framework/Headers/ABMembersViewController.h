/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABViewControllerBannerViewProtocol.h"
#import "ABNewPersonViewControllerDelegate.h"
#import "ABMembersControllerDelegate.h"
#import "ABPersonEditDelegate.h"
#import "ABAbstractViewController.h"
#import "AddressBookUI-Structs.h"

@class ABMembersController, _UIAccessDeniedView;

@interface ABMembersViewController : ABAbstractViewController <ABNewPersonViewControllerDelegate, ABMembersControllerDelegate, ABViewControllerBannerViewProtocol, ABPersonEditDelegate> {
	ABMembersController *_membersController;	// 204 = 0xcc
	int _insertionProperty;	// 208 = 0xd0
	id _insertionValue;	// 212 = 0xd4
	id _insertionLabel;	// 216 = 0xd8
	int _rightButtonBehavior;	// 220 = 0xdc
	int _leftButtonBehavior;	// 224 = 0xe0
	BOOL _shouldHandleExternalChangeOnPersonViewControllers;	// 228 = 0xe4
	_UIAccessDeniedView *_accessDeniedView;	// 232 = 0xe8
}
@property(readonly, assign, nonatomic) _UIAccessDeniedView *accessDeniedView;	// G=0x309265d1; @synthesize=_accessDeniedView
@property(readonly, assign) BOOL allowsCancel;	// G=0x308de721; 
@property(readonly, assign) BOOL allowsCardEditing;	// G=0x308de781; 
@property(readonly, retain) ABMembersController *membersController;	// G=0x308e2819; converted property
@property(readonly, assign) BOOL shouldShowGroups;	// G=0x308dec75; 
@property(retain) id styleProvider;	// G=0x308dc5d9; S=0x308dcb01; converted property
- (id)initWithModel:(id)model;	// 0x308dc115
- (void)_applicationEnteringBackground;	// 0x308e282d
- (void)_applicationEnteringForeground;	// 0x309265c1
- (void)_getRotationContentSettings:(XXStruct_3uUjXA *)settings;	// 0x3092688d
- (void)_updateForModel;	// 0x309271dd
- (int)abViewControllerType;	// 0x30926889
// declared property getter: - (id)accessDeniedView;	// 0x309265d1
- (void)addPerson:(id)person;	// 0x30926995
// declared property getter: - (BOOL)allowsCancel;	// 0x308de721
// declared property getter: - (BOOL)allowsCardEditing;	// 0x308de781
- (BOOL)allowsShowingPersonsCards;	// 0x3091045d
- (void)applicationDidResume;	// 0x309268cd
- (void)applicationWillSuspend;	// 0x308e27f1
- (BOOL)canHandleSnapbackIdentifier:(id)identifier animated:(BOOL)animated;	// 0x30926be5
- (void)cancel:(id)cancel;	// 0x30926969
- (void)cancelRefreshingAccount;	// 0x308e283d
- (void)cancelSearching:(id)searching;	// 0x30926e65
- (void)dealloc;	// 0x3092636d
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x3092656d
- (id)defaultPNGName;	// 0x309264c1
- (void)didReceiveMemoryWarning;	// 0x30926921
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x30926541
- (void)handleExternalChangeOnPersonViewControllers;	// 0x30927161
- (void)insertProperty:(int *)property insertValue:(id *)value insertLabel:(id *)label;	// 0x308ee571
- (BOOL)isNavigationButtonEnabled:(int)enabled;	// 0x30926965
- (void)linksUpdatedForPerson:(void *)person;	// 0x30927315
- (void)loadState;	// 0x308dc8c9
- (void)loadView;	// 0x308dd429
// converted property getter: - (id)membersController;	// 0x308e2819
- (BOOL)membersController:(id)controller shouldAllowSelectingPersonWithRecordID:(int)recordID;	// 0x308e10f9
- (void)membersControllerDidEndServerSearch:(id)membersController;	// 0x30926e3d
- (void)membersControllerWillEndSearching:(id)membersController;	// 0x30926e29
- (void)membersControllerWillStartSearching:(id)membersController;	// 0x3090f951
- (id)model;	// 0x308dd035
- (void)modelDatabaseChange:(id)change;	// 0x3092722d
- (void)nameUpdatedForPerson:(void *)person;	// 0x30927299
- (void)newPersonViewController:(id)controller didCompleteWithNewPerson:(void *)newPerson;	// 0x30926f45
- (void)newPersonViewController:(id)controller didCompleteWithNewPerson:(void *)newPerson informDelegate:(BOOL)delegate;	// 0x30926ea5
- (void)peoplePickerNavigationControllerNavigationBarStoppedAnimating:(id)animating;	// 0x309093e5
- (BOOL)personViewController:(id)controller shouldContinueAfterEditingConfirmed:(BOOL)confirmed forPerson:(void *)person;	// 0x309143e1
- (void)personWasDeleted;	// 0x30927391
- (void)personWasSelected:(void *)selected;	// 0x30926ea1
- (void)preferredPersonDidChangeToPerson:(void *)preferredPerson;	// 0x309273dd
- (void)presentGroupsViewController;	// 0x309266f1
- (void)reallyHandleExternalChangeOnPersonViewControllers;	// 0x30926f69
- (void)refreshEverythingNow;	// 0x30926c35
- (void)resetInsertionData;	// 0x3092645d
- (void)resetStateForDisplayedFilterChange;	// 0x3092725d
- (void)searchCurrentContactsGroupForWords:(id)words animated:(BOOL)animated;	// 0x309660f5
- (void)setAddressBook:(void *)book;	// 0x309264f9
- (void)setBannerTitle:(id)title value:(id)value;	// 0x308dcd65
- (void)setSearchCompletionDelegate:(id)delegate;	// 0x309660c9
// converted property setter: - (void)setStyleProvider:(id)provider;	// 0x308dcb01
// declared property getter: - (BOOL)shouldShowGroups;	// 0x308dec75
- (BOOL)showCardForPerson:(void *)person animate:(BOOL)animate;	// 0x30926c8d
- (BOOL)showCardForPerson:(void *)person animate:(BOOL)animate selectAndScrollToPerson:(BOOL)person3;	// 0x30926c69
- (BOOL)showCardForPerson:(void *)person withMemberCell:(id)memberCell animate:(BOOL)animate;	// 0x308e3de9
- (BOOL)showCardForPerson:(void *)person withMemberCell:(id)memberCell animate:(BOOL)animate selectAndScrollToPerson:(BOOL)person4;	// 0x308e3e0d
- (void)showInsertEditorForPerson:(void *)person animate:(BOOL)animate;	// 0x30926cad
- (void)startRefreshingAccount;	// 0x308df8f9
// converted property getter: - (id)styleProvider;	// 0x308dc5d9
- (void)updateLeftNavigationButtonAnimated:(BOOL)animated;	// 0x308deaa9
- (void)updateNavigationButtonsAnimated:(BOOL)animated;	// 0x308de47d
- (void)updateNavigationButtonsInSearchMode:(BOOL)searchMode;	// 0x3090f965
- (void)updateNavigationButtonsInSearchMode:(BOOL)searchMode animated:(BOOL)animated;	// 0x308de51d
- (void)updateTitle;	// 0x30926719
- (void)updateView;	// 0x309267d5
- (void)viewDidAppear:(BOOL)view;	// 0x308dfd35
- (void)viewDidDisappear:(BOOL)view;	// 0x308e2ba1
- (void)viewWillAppear:(BOOL)view;	// 0x308de40d
- (void)viewWillDisappear:(BOOL)view;	// 0x308e2979
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30926691
@end
