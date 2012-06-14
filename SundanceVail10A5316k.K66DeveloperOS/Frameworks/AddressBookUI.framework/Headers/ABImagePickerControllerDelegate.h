/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */


@class ABImagePickerController;

@protocol ABImagePickerControllerDelegate
@property(readonly, assign, nonatomic) ABImagePickerController *imagePicker;
@property(assign, nonatomic) BOOL popoverSizeUpdatesDisabled;
- (void)finishTearingDownImagePickerController;
// declared property getter: - (id)imagePicker;
- (void)imagePicker:(id)picker didDismissActionSheet:(id)sheet;
- (void)imagePicker:(id)picker pickedPhoto:(id)photo;
- (void)imagePicker:(id)picker presentActionSheet:(id)sheet;
- (id)imagePickerControllerViewControllerToPresentModal:(id)presentModal;
- (id)imagePickerControllerViewForApplyImageAnimation:(id)applyImageAnimation;
- (void)imagePickerWillBeRemoved:(id)imagePicker;
- (void)imagePickerWillBeShown:(id)imagePicker;
- (id)personImageView;
// declared property getter: - (BOOL)popoverSizeUpdatesDisabled;
- (void)removeImagePickerControllerFromUI;
- (id)selectedPeople;
// declared property setter: - (void)setPopoverSizeUpdatesDisabled:(BOOL)disabled;
- (void)showImageMenuForHelper:(id)helper;
- (id)styleProvider;
@end

