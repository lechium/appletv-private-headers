/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UISwitchArtStorageValue : NSObject {
@private
	int _count;	// 4 = 0x4
	UIImage *_onImage;	// 8 = 0x8
	UIImage *_offImage;	// 12 = 0xc
	UIImage *_labelImage;	// 16 = 0x10
	UIImage *_backgroundColorImage;	// 20 = 0x14
}
@property(retain, nonatomic) UIImage *backgroundColorImage;	// G=0x3518a431; S=0x3518a481; @synthesize=_backgroundColorImage
@property(assign, nonatomic) int count;	// G=0x3518af4d; S=0x35188cd1; @synthesize=_count
@property(retain, nonatomic) UIImage *labelImage;	// G=0x35189e29; S=0x3518a249; @synthesize=_labelImage
@property(retain, nonatomic) UIImage *offImage;	// G=0x3518afe5; S=0x3518aa71; @synthesize=_offImage
@property(retain, nonatomic) UIImage *onImage;	// G=0x3524b779; S=0x3524b7b9; @synthesize=_onImage
// declared property getter: - (id)backgroundColorImage;	// 0x3518a431
// declared property getter: - (int)count;	// 0x3518af4d
- (void)dealloc;	// 0x3518af5d
// declared property getter: - (id)labelImage;	// 0x35189e29
// declared property getter: - (id)offImage;	// 0x3518afe5
// declared property getter: - (id)onImage;	// 0x3524b779
// declared property setter: - (void)setBackgroundColorImage:(id)image;	// 0x3518a481
// declared property setter: - (void)setCount:(int)count;	// 0x35188cd1
// declared property setter: - (void)setLabelImage:(id)image;	// 0x3518a249
// declared property setter: - (void)setOffImage:(id)image;	// 0x3518aa71
// declared property setter: - (void)setOnImage:(id)image;	// 0x3524b7b9
@end

