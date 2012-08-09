/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "UIActivity.h"
#import "UINavigationControllerDelegate.h"
#import "UIImagePickerControllerDelegate.h"

@class UIImage, ABPeoplePickerNavigationController, UIImagePickerController;

@interface UIAssignToContactActivity : UIActivity <ABPeoplePickerNavigationControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
	void *_person;	// 8 = 0x8
	UIImage *_image;	// 12 = 0xc
	ABPeoplePickerNavigationController *_peoplePicker;	// 16 = 0x10
	UIImagePickerController *_imagePickerController;	// 20 = 0x14
}
@property(retain, nonatomic) UIImage *image;	// G=0x30675eb5; S=0x30675ec5; @synthesize=_image
@property(retain, nonatomic) UIImagePickerController *imagePickerController;	// G=0x30675ef5; S=0x30675f05; @synthesize=_imagePickerController
@property(retain, nonatomic) ABPeoplePickerNavigationController *peoplePicker;	// G=0x30675ed5; S=0x30675ee5; @synthesize=_peoplePicker
@property(assign, nonatomic) void *person;	// G=0x30675e95; S=0x30675ea5; @synthesize=_person
- (id)_activityImage;	// 0x306756c5
- (void)_cleanup;	// 0x306759c5
- (id)_embeddedActivityViewController;	// 0x306758d1
- (id)activityTitle;	// 0x30675739
- (id)activityType;	// 0x303a7bed
- (id)activityViewController;	// 0x3067594d
- (BOOL)canPerformWithActivityItems:(id)activityItems;	// 0x30675755
- (void)dealloc;	// 0x30675639
// declared property getter: - (id)image;	// 0x30675eb5
// declared property getter: - (id)imagePickerController;	// 0x30675ef5
- (void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;	// 0x30675c59
- (void)imagePickerControllerDidCancel:(id)imagePickerController;	// 0x30675e81
// declared property getter: - (id)peoplePicker;	// 0x30675ed5
- (BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void *)person;	// 0x30675a79
- (BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x30675c55
- (void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;	// 0x30675a65
// declared property getter: - (void *)person;	// 0x30675e95
- (void)prepareWithActivityItems:(id)activityItems;	// 0x30675779
// declared property setter: - (void)setImage:(id)image;	// 0x30675ec5
// declared property setter: - (void)setImagePickerController:(id)controller;	// 0x30675f05
// declared property setter: - (void)setPeoplePicker:(id)picker;	// 0x30675ee5
// declared property setter: - (void)setPerson:(void *)person;	// 0x30675ea5
@end
