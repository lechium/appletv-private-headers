/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDTimeListNodeList, TSUNoCopyDictionary;

@interface PDAnimation : NSObject {
	PDTimeListNodeList *mTimeListNodeList;	// 4 = 0x4
	TSUNoCopyDictionary *mBuildMap;	// 8 = 0x8
}
@property(retain) id buildMap;	// G=0x34a82af5; S=0x34989009; converted property
+ (void)initialize;	// 0x3481c46d
- (id)init;	// 0x3481c5d1
- (id)addTimeListNodeList;	// 0x3493ca19
// converted property getter: - (id)buildMap;	// 0x34a82af5
- (void)dealloc;	// 0x34886381
// converted property setter: - (void)setBuildMap:(id)map;	// 0x34989009
- (id)timeListNodeList;	// 0x34a82ae5
@end

