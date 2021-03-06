/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "UISearchDisplayDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "ABPickerViewController.h"

@class UISearchDisplayController, UILocalizedIndexedCollation, NSIndexPath, NSString, UITableView, NSArray, NSDictionary, UISearchBar;

@interface ABCountryPickerViewController : ABPickerViewController <UITableViewDelegate, UITableViewDataSource, UISearchDisplayDelegate, UISearchBarDelegate> {
	UITableView *_tableView;	// 224 = 0xe0
	UILocalizedIndexedCollation *_collation;	// 228 = 0xe4
	NSArray *_sections;	// 232 = 0xe8
	NSArray *_sectionIndexTitles;	// 236 = 0xec
	NSDictionary *_indexToSections;	// 240 = 0xf0
	UISearchBar *_searchBar;	// 244 = 0xf4
	UISearchDisplayController *_searchController;	// 248 = 0xf8
	NSArray *_filteredCountries;	// 252 = 0xfc
	NSString *_selectedCountryCode;	// 256 = 0x100
	NSIndexPath *_selectedIndexPath;	// 260 = 0x104
	NSArray *_allCountries;	// 264 = 0x108
}
@property(retain, nonatomic) NSString *selectedCountryCode;	// G=0x370a1681; S=0x370a1435; 
- (id)init;	// 0x370a11a1
- (void)_getRotationContentSettings:(XXStruct_3uUjXA *)settings;	// 0x370a214d
- (void)_setSelectedCountryCode:(id)code atPath:(id)path;	// 0x370a13c1
- (float)ab_heightToFitForViewInPopoverView;	// 0x370a2011
- (void)configureSections;	// 0x370a1691
- (void)dealloc;	// 0x370a1295
- (void)loadView;	// 0x370a1d51
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x370a22fd
- (void)reloadCountryCodes;	// 0x370a1a71
- (void)scrollToSearchFieldAnimated:(BOOL)searchFieldAnimated;	// 0x370a1cdd
- (void)searchBarSearchButtonClicked:(id)clicked;	// 0x370a2729
- (void)searchBarTextDidBeginEditing:(id)searchBarText;	// 0x370a2741
- (BOOL)searchDisplayController:(id)controller shouldReloadTableForSearchString:(id)searchString;	// 0x370a2765
- (void)searchDisplayControllerWillBeginSearch:(id)searchDisplayController;	// 0x370a2855
- (void)searchDisplayControllerWillEndSearch:(id)searchDisplayController;	// 0x370a2879
- (id)sectionIndexTitlesForTableView:(id)tableView;	// 0x370a2415
// declared property getter: - (id)selectedCountryCode;	// 0x370a1681
// declared property setter: - (void)setSelectedCountryCode:(id)code;	// 0x370a1435
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x370a2185
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x370a2539
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x370a2331
- (int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;	// 0x370a243d
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x370a2395
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x370a26a9
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x370a24bd
- (void)viewWillAppear:(BOOL)view;	// 0x370a2155
@end

