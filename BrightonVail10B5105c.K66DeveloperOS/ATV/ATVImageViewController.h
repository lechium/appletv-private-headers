/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class BRMerchant, BRImage;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVImageViewController : BRViewController {
	BOOL _waitingForImage;	// 104 = 0x68
	BRMerchant *_merchant;	// 108 = 0x6c
	BRImage *_image;	// 112 = 0x70
	id<BRImageProxy> _imageProxy;	// 116 = 0x74
}
@property(retain) BRImage *image;	// G=0x12bbb1; S=0x12bbc5; @synthesize=_image
@property(retain) id<BRImageProxy> imageProxy;	// G=0x12bbd5; S=0x12bbe9; @synthesize=_imageProxy
@property(retain) BRMerchant *merchant;	// G=0x12bb8d; S=0x12bba1; @synthesize=_merchant
- (id)initWithDictionary:(id)dictionary;	// 0x12b951
- (void)_imageLoadFailed:(id)failed;	// 0x12bcd5
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x12bbf9
- (void)_setWaitingForImage:(BOOL)image;	// 0x12bd95
- (void)dealloc;	// 0x12ba31
- (void)drawRect:(CGRect)rect;	// 0x12bad5
// declared property getter: - (id)image;	// 0x12bbb1
// declared property getter: - (id)imageProxy;	// 0x12bbd5
// declared property getter: - (id)merchant;	// 0x12bb8d
// declared property setter: - (void)setImage:(id)image;	// 0x12bbc5
// declared property setter: - (void)setImageProxy:(id)proxy;	// 0x12bbe9
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x12bba1
@end

