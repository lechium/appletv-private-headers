/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDCollection.h"


__attribute__((visibility("hidden")))
@interface EDStylesCollection : EDCollection {
@private
	unsigned mDefaultWorkbookStyleIndex;	// 8 = 0x8
}
@property(assign) unsigned defaultWorkbookStyleIndex;	// G=0x345c665d; S=0x34452d9d; converted property
- (id)init;	// 0x3444ca31
- (unsigned)addObject:(id)object;	// 0x34454335
- (id)defaultWorkbookStyle;	// 0x3445f8ad
// converted property getter: - (unsigned)defaultWorkbookStyleIndex;	// 0x345c665d
- (void)removeAllObjects;	// 0x345c666d
- (void)removeObjectAtIndex:(unsigned)index;	// 0x345c6699
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x345c6659
// converted property setter: - (void)setDefaultWorkbookStyleIndex:(unsigned)index;	// 0x34452d9d
@end

