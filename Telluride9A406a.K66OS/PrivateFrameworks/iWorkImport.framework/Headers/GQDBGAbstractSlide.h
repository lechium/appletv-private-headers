/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"

@class GQDBGSlideNumberPlaceholder, GQDBGTitlePlaceholder, GQDSStyle, GQDBGBodyPlaceholder, GQDBGObjectPlaceholder, GQDSStylesheet;

__attribute__((visibility("hidden")))
@interface GQDBGAbstractSlide : NSObject {
@private
	GQDSStylesheet *mStylesheet;	// 4 = 0x4
	GQDSStyle *mSlideStyle;	// 8 = 0x8
	GQDBGTitlePlaceholder *mTitlePlaceholder;	// 12 = 0xc
	GQDBGBodyPlaceholder *mBodyPlaceholder;	// 16 = 0x10
	GQDBGObjectPlaceholder *mObjectPlaceholder;	// 20 = 0x14
	GQDBGSlideNumberPlaceholder *mSlideNumberPlaceholder;	// 24 = 0x18
	BOOL mHidden;	// 28 = 0x1c
	char *mID;	// 32 = 0x20
	BOOL mCallGenerator;	// 36 = 0x24
}
- (char *)ID;	// 0x33bfc589
- (void)dealloc;	// 0x33bfc6d1
- (BOOL)isHidden;	// 0x33bfc579
- (int)readAttributesForSlide:(xmlTextReader *)slide;	// 0x33bfc665
- (id)slideStyle;	// 0x33bfc559
- (id)stylesheet;	// 0x33bfc569
@end

