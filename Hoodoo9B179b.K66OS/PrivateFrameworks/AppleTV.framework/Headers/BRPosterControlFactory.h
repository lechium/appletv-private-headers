/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControlHeightFactory.h"
#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"

@class BRImage;

@interface BRPosterControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
@private
	BRImage *_defaultImage;	// 4 = 0x4
}
+ (id)factory;	// 0x302761bd
- (id)init;	// 0x302761f5
- (id)_posterForGridFromAsset:(id)asset currentControl:(id)control requestedBy:(id)by;	// 0x30276609
- (id)_posterForShelfFromAsset:(id)asset currentControl:(id)control requestedBy:(id)by;	// 0x30276655
- (id)_posterFromAsset:(id)asset currentControl:(id)control requestedBy:(id)by;	// 0x302766ad
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x3027627d
- (void)dealloc;	// 0x30276231
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x302764dd
- (void)setDefaultImage:(id)image;	// 0x302765c9
@end

