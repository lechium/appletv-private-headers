/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import <NSObject.h> // Unknown library

@class GQDFilteredImage, GQDColor;

__attribute__((visibility("hidden")))
@interface GQDTexturedImageFill : NSObject <GQDNameMappable> {
@private
	int mTechnique;	// 4 = 0x4
	GQDColor *mColor;	// 8 = 0x8
	GQDFilteredImage *mFilteredImage;	// 12 = 0xc
}
@property(retain) id color;	// G=0x36c5336d; S=0x36c5341d; converted property
+ (const StateSpec *)stateForReading;	// 0x36c532ed
// converted property getter: - (id)color;	// 0x36c5336d
- (void)dealloc;	// 0x36c532f9
- (id)imageBinary;	// 0x36c5337d
- (void)invalidateFilteredImage;	// 0x36c533f1
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x36c5339d
// converted property setter: - (void)setColor:(id)color;	// 0x36c5341d
- (int)technique;	// 0x36c5335d
@end

