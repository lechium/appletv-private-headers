/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface _UISwitchArtStorage : NSObject {
@private
	CFDictionaryRef _switchImagesStorage;	// 4 = 0x4
}
+ (id)sharedArtStorage;	// 0x32f8d911
- (id)init;	// 0x32f8d959
- (id)backgroundImageForColor:(id)color;	// 0x32f8f1b1
- (void)dealloc;	// 0x33126165
- (id)labelImageForColor:(id)color;	// 0x32f8eba9
- (id)offImageForColor:(id)color;	// 0x32f8f655
- (id)onImageForColor:(id)color;	// 0x330510d9
- (void)registerForColor:(id)color;	// 0x32f8d9c5
- (void)setBackgroundImage:(id)image forColor:(id)color;	// 0x32f8f1fd
- (void)setLabelImage:(id)image forColor:(id)color;	// 0x32f8efc5
- (void)setOffImage:(id)image forColor:(id)color;	// 0x32f8f781
- (void)setOnImage:(id)image forColor:(id)color;	// 0x33051115
- (void)unregisterForColor:(id)color;	// 0x32f8fc8d
@end

