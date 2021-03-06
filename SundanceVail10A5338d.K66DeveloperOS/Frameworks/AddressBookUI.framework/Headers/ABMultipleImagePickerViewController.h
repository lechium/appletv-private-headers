/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UITableViewController.h> // Unknown library

@class NSMutableArray;
@protocol ABMultipleSourceImagePickerDelegate;

@interface ABMultipleImagePickerViewController : UITableViewController {
	NSMutableArray *_imageCellData;	// 200 = 0xc8
	unsigned _selectedImageIndex;	// 204 = 0xcc
	id<ABMultipleSourceImagePickerDelegate> _delegate;	// 208 = 0xd0
}
@property(assign, nonatomic) id<ABMultipleSourceImagePickerDelegate> delegate;	// G=0x370c779d; S=0x370c77ad; @synthesize=_delegate
- (id)initWithStyle:(int)style;	// 0x370c71d5
- (void)addImageData:(id)data title:(id)title isSelectedImage:(BOOL)image person:(void *)person;	// 0x370c72d1
- (void)dealloc;	// 0x370c7751
// declared property getter: - (id)delegate;	// 0x370c779d
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x370c7419
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x370c77ad
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x370c7445
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x370c7671
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x370c741d
- (void)viewDidLoad;	// 0x370c7231
@end

