/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABPickerViewControllerDelegate.h"
#import "ABImagePickerControllerDelegate.h"
#import <NSObject.h> // Unknown library

@class ABStyleProvider, ABPersonTableViewDataSource, ABPersonViewControllerHelper, ABImagePickerController;

@interface ABPersonPickersDelegate : NSObject <ABPickerViewControllerDelegate, ABImagePickerControllerDelegate> {
@private
	ABStyleProvider *_styleProvider;	// 4 = 0x4
	ABPersonTableViewDataSource *_dataSource;	// 8 = 0x8
	ABPersonViewControllerHelper *_helper;	// 12 = 0xc
	ABImagePickerController *_imagePicker;	// 16 = 0x10
}
@property(assign, nonatomic) ABPersonTableViewDataSource *dataSource;	// G=0x34cd3ff1; S=0x34cd4001; @synthesize=_dataSource
@property(assign, nonatomic) ABPersonViewControllerHelper *helper;	// G=0x34cd4011; S=0x34cd4021; @synthesize=_helper
@property(readonly, assign, nonatomic) ABImagePickerController *imagePicker;	// G=0x34cd4031; @synthesize=_imagePicker
@property(assign, nonatomic) BOOL popoverSizeUpdatesDisabled;	// G=0x34cd3ab1; S=0x34cd3ad9; 
@property(retain, nonatomic) ABStyleProvider *styleProvider;	// G=0x34cd3fd1; S=0x34cd3fe1; @synthesize=_styleProvider
- (id)_contentViewForPicker:(id)picker;	// 0x34cd2a75
- (void)_dismissCountryPicker:(id)picker afterSelectingItem:(id)item;	// 0x34cd311d
- (void)_dismissProfilesPicker:(id)picker afterSelectingItem:(id)item;	// 0x34cd3455
- (void)_dismissPropertyPicker:(id)picker afterSelectingItem:(id)item;	// 0x34cd3589
- (void)_dismissRingtonePicker:(id)picker afterSelectingItem:(id)item;	// 0x34cd2b95
- (id)_propertyGroupForPicker:(id)picker;	// 0x34cd2ad1
// declared property getter: - (id)dataSource;	// 0x34cd3ff1
- (void)dealloc;	// 0x34cd27c5
- (void)finishTearingDownImagePickerController;	// 0x34cd3b4d
// declared property getter: - (id)helper;	// 0x34cd4011
// declared property getter: - (id)imagePicker;	// 0x34cd4031
- (void)imagePicker:(id)picker didDismissActionSheet:(id)sheet;	// 0x34cd3fa1
- (void)imagePicker:(id)picker pickedPhoto:(id)photo;	// 0x34cd3a4d
- (void)imagePicker:(id)picker presentActionSheet:(id)sheet;	// 0x34cd3e91
- (id)imagePickerControllerViewControllerToPresentModal:(id)presentModal;	// 0x34cd3b05
- (id)imagePickerControllerViewForApplyImageAnimation:(id)applyImageAnimation;	// 0x34cd3a51
- (void)imagePickerWillBeRemoved:(id)imagePicker;	// 0x34cd3a49
- (void)imagePickerWillBeShown:(id)imagePicker;	// 0x34cd3a31
- (void)labelPickerViewController:(id)controller didDeleteLabel:(id)label;	// 0x34cd2a39
- (BOOL)labelPickerViewController:(id)controller shouldDismissAfterSelectingLabel:(id)label;	// 0x34cd2851
- (id)personImageView;	// 0x34cd3a09
- (BOOL)pickerViewController:(id)controller shouldDismissAfterSelectingItem:(id)item;	// 0x34cd36e9
- (BOOL)pickerViewControllerShouldDismissKeyboard:(id)pickerViewController;	// 0x34cd390d
// declared property getter: - (BOOL)popoverSizeUpdatesDisabled;	// 0x34cd3ab1
- (void)removeImagePickerControllerFromUI;	// 0x34cd3b2d
- (id)selectedPeople;	// 0x34cd3941
// declared property setter: - (void)setDataSource:(id)source;	// 0x34cd4001
// declared property setter: - (void)setHelper:(id)helper;	// 0x34cd4021
// declared property setter: - (void)setPopoverSizeUpdatesDisabled:(BOOL)disabled;	// 0x34cd3ad9
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x34cd3fe1
- (void)showImageMenuForHelper:(id)helper;	// 0x34cd3ba1
// declared property getter: - (id)styleProvider;	// 0x34cd3fd1
@end
