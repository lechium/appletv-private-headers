/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface PhotoController : BRDataQueryController {
	NSDictionary *_collectionsByType;	// 164 = 0xa4
	int _mode;	// 168 = 0xa8
	id _screenSaverSelectionBlock;	// 172 = 0xac
	id _photoSelectionBlock;	// 176 = 0xb0
}
@property(copy, nonatomic) id photoSelectionBlock;	// G=0x2873fd; S=0x287411; @synthesize=_photoSelectionBlock
@property(copy, nonatomic) id screenSaverSelectionBlock;	// G=0x2873d9; S=0x2873ed; @synthesize=_screenSaverSelectionBlock
- (id)initWithMode:(int)mode dataServerID:(id)anId;	// 0x285e0d
- (void).cxx_destruct;	// 0x287421
- (id)_BRMediaCollectionsForType:(id)type;	// 0x2876b9
- (void)_addButtonsToBrowser:(id)browser withCollection:(id)collection;	// 0x28794d
- (id)_collectionsByType;	// 0x287469
- (id)_iconWithName:(id)name;	// 0x2878ad
- (long)_numberOfItemsInSection:(long)section;	// 0x2877c9
- (void)_selectedScreenSaverCollection:(id)collection;	// 0x287add
- (id)collectionsForType:(id)type;	// 0x287371
- (BOOL)dataClientUpdated:(id)updated;	// 0x28603d
- (BOOL)dataQueryComplete:(id)complete;	// 0x2860ad
- (id)errorControlForQuery:(id)query;	// 0x2860cd
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x2866d5
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x287011
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x286a25
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x286695
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x286211
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2865b5
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x286615
- (id)newDataQuery;	// 0x285efd
- (long)numberOfSectionsInList:(id)list;	// 0x286575
// declared property getter: - (id)photoSelectionBlock;	// 0x2873fd
// declared property getter: - (id)screenSaverSelectionBlock;	// 0x2873d9
// declared property setter: - (void)setPhotoSelectionBlock:(id)block;	// 0x287411
// declared property setter: - (void)setScreenSaverSelectionBlock:(id)block;	// 0x2873ed
@end

