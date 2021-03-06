/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABPasteboardControl.h"

@class ABClippingImageView, UIImage, UIImageView;
@protocol ABPersonImageDataDelegate, ABStyleProvider;

@interface ABPersonImageView : ABPasteboardControl {
	void *_displayedPerson;	// 72 = 0x48
	UIImageView *_personImageView;	// 76 = 0x4c
	UIImageView *_editingImageView;	// 80 = 0x50
	ABClippingImageView *_emptyImageView;	// 84 = 0x54
	ABClippingImageView *_pasteboardMaskImageView;	// 88 = 0x58
	UIImage *_personImage;	// 92 = 0x5c
	UIImage *_wellBorderImage;	// 96 = 0x60
	BOOL _isEditing;	// 100 = 0x64
	BOOL _showLabel;	// 101 = 0x65
	BOOL _scalesContentToFit;	// 102 = 0x66
	BOOL _needsReflow;	// 103 = 0x67
	BOOL _needsReload;	// 104 = 0x68
	id<ABPersonImageDataDelegate> _imageDataDelegate;	// 108 = 0x6c
	BOOL _multiplePhotoBackdropEnabled;	// 112 = 0x70
	BOOL _shouldPickBestImage;	// 113 = 0x71
	BOOL _allowsEditing;	// 114 = 0x72
	id<ABStyleProvider> _styleProvider;	// 116 = 0x74
}
@property(assign, nonatomic) BOOL allowsEditing;	// G=0x37099f25; S=0x3705e691; @synthesize=_allowsEditing
@property(readonly, assign, nonatomic) UIImage *attributionImage;	// G=0x37097dfd; 
@property(readonly, assign, nonatomic) UIImage *backgroundImage;	// G=0x37097d49; 
@property(assign, nonatomic) void *displayedPerson;	// G=0x3709091d; S=0x3705e9d1; 
@property(readonly, retain) UIImageView *editingImageView;	// G=0x37097f05; converted property
@property(readonly, retain) ABClippingImageView *emptyImageView;	// G=0x37097fd5; converted property
@property(assign, nonatomic) id<ABPersonImageDataDelegate> imageDataDelegate;	// G=0x37099ee5; S=0x3705e639; @synthesize=_imageDataDelegate
@property(readonly, assign, nonatomic) UIImage *maskImage;	// G=0x37079965; 
@property(assign, nonatomic) BOOL multiplePhotoBackdropEnabled;	// G=0x37099ef5; S=0x37098ad9; @synthesize=_multiplePhotoBackdropEnabled
@property(readonly, assign, nonatomic) UIImage *overlayImage;	// G=0x37097d8d; 
@property(readonly, retain) ABClippingImageView *pasteboardMaskImageView;	// G=0x37098139; converted property
@property(readonly, retain) UIImageView *personImageView;	// G=0x37097e49; converted property
@property(assign, nonatomic) BOOL scalesContentToFit;	// G=0x37079b09; S=0x37099f15; @synthesize=_scalesContentToFit
@property(assign, nonatomic) BOOL shouldPickBestImage;	// G=0x37099f05; S=0x3705eff1; @synthesize=_shouldPickBestImage
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x3707984d; S=0x3705e521; @synthesize=_styleProvider
+ (id)newImageWithName:(id)name;	// 0x370799e9
+ (CGSize)sizeForOptimalPerformance;	// 0x37097c5d
- (id)initWithFrame:(CGRect)frame styleProvider:(id)provider;	// 0x37097cdd
- (void)_drawEditLabelInFrame:(CGRect)frame;	// 0x37098229
- (id)_newDictionaryWithImageData;	// 0x37098b51
- (id)_supportedPasteboardImageTypesIncludingCustomTypes:(BOOL)types;	// 0x37098f65
- (void)abMenuControllerWillHide;	// 0x37099091
- (void)abMenuControllerWillShow:(id)abMenuController;	// 0x3709901d
- (BOOL)abShouldShowMenu;	// 0x37098fc9
// declared property getter: - (BOOL)allowsEditing;	// 0x37099f25
// declared property getter: - (id)attributionImage;	// 0x37097dfd
// declared property getter: - (id)backgroundImage;	// 0x37097d49
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x370990b1
- (void)copy:(id)copy;	// 0x370991ad
- (id)copyDefaultImageForPerson:(void *)person;	// 0x370795dd
- (id)copyImageForPerson:(void *)person withFrameSize:(CGSize)frameSize operation:(id)operation cache:(id)cache;	// 0x37098925
- (void)dealloc;	// 0x37082f89
// declared property getter: - (void *)displayedPerson;	// 0x3709091d
// converted property getter: - (id)editingImageView;	// 0x37097f05
// converted property getter: - (id)emptyImageView;	// 0x37097fd5
- (id)framedPhoto;	// 0x37098485
- (BOOL)hasImageToDisplay;	// 0x37098b05
// declared property getter: - (id)imageDataDelegate;	// 0x37099ee5
- (void)layoutSubviews;	// 0x3707951d
// declared property getter: - (id)maskImage;	// 0x37079965
// declared property getter: - (BOOL)multiplePhotoBackdropEnabled;	// 0x37099ef5
// declared property getter: - (id)overlayImage;	// 0x37097d8d
- (void)paste:(id)paste;	// 0x370993c1
// converted property getter: - (id)pasteboardMaskImageView;	// 0x37098139
// converted property getter: - (id)personImageView;	// 0x37097e49
- (void)reflow;	// 0x37079699
- (void)reflowIfNeeded;	// 0x37079b19
- (void)reload;	// 0x37079571
- (void)reloadIfNeeded;	// 0x3707954d
// declared property getter: - (BOOL)scalesContentToFit;	// 0x37079b09
// declared property setter: - (void)setAllowsEditing:(BOOL)editing;	// 0x3705e691
// declared property setter: - (void)setDisplayedPerson:(void *)person;	// 0x3705e9d1
// declared property setter: - (void)setImageDataDelegate:(id)delegate;	// 0x3705e639
- (void)setIsEditing:(BOOL)editing animate:(BOOL)animate;	// 0x3707c319
// declared property setter: - (void)setMultiplePhotoBackdropEnabled:(BOOL)enabled;	// 0x37098ad9
- (void)setNeedsReflow;	// 0x37098ab9
- (void)setNeedsReload;	// 0x37068dbd
// declared property setter: - (void)setScalesContentToFit:(BOOL)fit;	// 0x37099f15
// declared property setter: - (void)setShouldPickBestImage:(BOOL)pickBestImage;	// 0x3705eff1
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x3705e521
// declared property getter: - (BOOL)shouldPickBestImage;	// 0x37099f05
// declared property getter: - (id)styleProvider;	// 0x3707984d
@end

