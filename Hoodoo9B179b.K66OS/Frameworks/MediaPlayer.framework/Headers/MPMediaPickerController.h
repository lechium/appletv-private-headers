/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIViewController.h> // Unknown library
#import "UIScrollViewDelegate.h"
#import "MediaPickerModalContextDelegate.h"

@class NSString, MPMediaPickerControllerInternal;
@protocol MPMediaPickerControllerDelegate;

@interface MPMediaPickerController : UIViewController <MediaPickerModalContextDelegate, UIScrollViewDelegate> {
@private
	MPMediaPickerControllerInternal *_internal;	// 156 = 0x9c
}
@property(assign, nonatomic) BOOL allowsPickingMultipleItems;	// G=0x3098f9e1; S=0x3098fa05; 
@property(assign, nonatomic) id<MPMediaPickerControllerDelegate> delegate;	// G=0x3098f921; S=0x3098f901; 
@property(readonly, assign, nonatomic) int mediaTypes;	// G=0x3098f8e1; 
@property(copy, nonatomic) NSString *prompt;	// G=0x3098f9c1; S=0x3098f941; 
+ (void)preheatMediaPicker;	// 0x3098fa71
- (id)init;	// 0x3098f495
- (id)initWithMediaTypes:(int)mediaTypes;	// 0x3098f4a9
- (void)_pickerDidCancel;	// 0x3098fa81
- (void)_pickerDidPickItems:(id)_picker;	// 0x3098fb55
// declared property getter: - (BOOL)allowsPickingMultipleItems;	// 0x3098f9e1
- (void)dealloc;	// 0x3098f559
// declared property getter: - (id)delegate;	// 0x3098f921
- (void)loadView;	// 0x3098f5bd
- (void)mediaPickerModalContext:(id)context didPickMediaItems:(id)items;	// 0x3098f8cd
// declared property getter: - (int)mediaTypes;	// 0x3098f8e1
- (void)modalContextDidDismiss:(id)modalContext withSuccess:(BOOL)success;	// 0x3098f8ad
// declared property getter: - (id)prompt;	// 0x3098f9c1
// declared property setter: - (void)setAllowsPickingMultipleItems:(BOOL)items;	// 0x3098fa05
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3098f901
// declared property setter: - (void)setPrompt:(id)prompt;	// 0x3098f941
- (void)viewDidUnload;	// 0x3098f849
@end

