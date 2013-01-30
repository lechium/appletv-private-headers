/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSArray, ATVDataQuery, BRControl, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SettingsChoosePhotosController : BRViewController {
	NSArray *_servers;	// 104 = 0x68
	BRControl *_cupidPreview;	// 108 = 0x6c
	ATVDataQuery *_cupidPreviewQuery;	// 112 = 0x70
	NSMutableDictionary *_itmsCollectionPreviewQueries;	// 116 = 0x74
	id _ntITMSConnection;	// 120 = 0x78
	NSMutableDictionary *_itmsCollectionPreviewResults;	// 124 = 0x7c
	NSArray *_sections;	// 128 = 0x80
}
@property(retain, nonatomic) NSMutableDictionary *itmsCollectionPreviewQueries;	// G=0xaec6d; S=0xaec7d; @synthesize=_itmsCollectionPreviewQueries
@property(retain, nonatomic) NSMutableDictionary *itmsCollectionPreviewResults;	// G=0xaecb5; S=0xaecc5; @synthesize=_itmsCollectionPreviewResults
@property(retain, nonatomic) id ntITMSConnection;	// G=0xaeca5; S=0xad475; @synthesize=_ntITMSConnection
@property(copy, nonatomic) NSArray *sections;	// G=0xaeced; S=0xaed01; @synthesize=_sections
- (id)init;	// 0xad2e9
- (void).cxx_destruct;	// 0xaed11
- (void)_configureSections;	// 0xaf905
- (void)_configureView;	// 0xafcc1
- (id)_cupidPreview;	// 0xb0c21
- (void)_dataServersChanged:(id)changed;	// 0xb0b9d
- (id)_filterAdhocScreensaverDictionary:(id)dictionary;	// 0xb0285
- (id)_filterAlbumArtScreensaverDictionary:(id)dictionary;	// 0xb07ed
- (void)_getPreviewForITMSCollectionID:(id)itmscollectionID completionHandler:(id)handler;	// 0xb1075
- (void)_handleAdhocPhotosSelection;	// 0xaeda9
- (void)_handleAppleDefaultPhotosSelection;	// 0xaee05
- (void)_handleComputersPhotosSelectionForServer:(id)server;	// 0xaf291
- (void)_handleCupidSelection;	// 0xaf3bd
- (void)_handleFeedMerchantSelectionForMerchant:(id)merchant;	// 0xaf785
- (void)_handleFlickrSelection;	// 0xaf581
- (void)_handleITMSMerchantSelectionWithCollectionID:(id)collectionID name:(id)name;	// 0xaeec9
- (int)_indexOfServerWithID:(id)anId;	// 0xb1909
- (BOOL)_isComputersSection:(id)section;	// 0xb08d9
- (BOOL)_isCupidSelected;	// 0xb0951
- (id)_servers;	// 0xb0b25
- (id)_titleForDictionary:(id)dictionary merchant:(id)merchant;	// 0xb19ed
- (id)_titleForServerAtIndex:(int)index;	// 0xb1885
- (void)dealloc;	// 0xad409
// declared property getter: - (id)itmsCollectionPreviewQueries;	// 0xaec6d
// declared property getter: - (id)itmsCollectionPreviewResults;	// 0xaecb5
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0xae061
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xae875
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xad839
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xad785
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0xad651
// declared property getter: - (id)ntITMSConnection;	// 0xaeca5
- (long)numberOfSectionsInList:(id)list;	// 0xad615
// declared property getter: - (id)sections;	// 0xaeced
// declared property setter: - (void)setItmsCollectionPreviewQueries:(id)queries;	// 0xaec7d
// declared property setter: - (void)setItmsCollectionPreviewResults:(id)results;	// 0xaecc5
// declared property setter: - (void)setNtITMSConnection:(id)connection;	// 0xad475
// declared property setter: - (void)setSections:(id)sections;	// 0xaed01
- (void)wasPopped;	// 0xad541
- (void)wasPushed;	// 0xad4ed
@end
