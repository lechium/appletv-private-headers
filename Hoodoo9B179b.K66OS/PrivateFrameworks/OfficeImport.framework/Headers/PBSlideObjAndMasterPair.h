/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDSlide;

__attribute__((visibility("hidden")))
@interface PBSlideObjAndMasterPair : NSObject {
@private
	PDSlide *mSlide;	// 4 = 0x4
	int mMasterId;	// 8 = 0x8
}
+ (id)createPair:(id)pair masterId:(int)anId;	// 0x327bdc9d
- (void)dealloc;	// 0x327c00f1
- (int)masterId;	// 0x32950981
- (void)setSlide:(id)slide masterId:(int)anId;	// 0x327bdced
- (id)slide;	// 0x32950971
@end

