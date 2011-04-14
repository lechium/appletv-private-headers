/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedTextTableDataSet : NSObject {
@private
	NSMutableArray *_rows;	// 4 = 0x4
	NSArray *_headerLabels;	// 8 = 0x8
}
@property(retain) NSArray *headerLabels;	// G=0x33729191; S=0x337291f1; @synthesize=_headerLabels
@property(readonly, assign) NSArray *rows;	// G=0x33728dcd; 
- (id)init;	// 0x33728f91
- (void)addRow:(id)row;	// 0x33729275
- (void)dealloc;	// 0x33728f35
// declared property getter: - (id)headerLabels;	// 0x33729191
// declared property getter: - (id)rows;	// 0x33728dcd
// declared property setter: - (void)setHeaderLabels:(id)labels;	// 0x337291f1
@end

