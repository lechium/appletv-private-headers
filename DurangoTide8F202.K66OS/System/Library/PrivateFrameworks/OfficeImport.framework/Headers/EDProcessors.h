/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDWorkbook, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDProcessors : NSObject {
@private
	EDWorkbook *mWorkbook;	// 4 = 0x4
	NSMutableArray *mProcessors;	// 8 = 0x8
}
- (id)initWithWorkbook:(id)workbook;	// 0x319dc241
- (void)addProcessorClass:(Class)aClass;	// 0x318ca18d
- (void)applyProcessorsWithSheet:(id)sheet;	// 0x318e5865
- (void)dealloc;	// 0x318f0bb1
- (bool)hasProcessors;	// 0x31ad3aa1
- (void)markObject:(id)object processor:(Class)processor;	// 0x318ccad9
- (void)removeAllObjects;	// 0x318ca16d
- (void)removeProcessorClass:(Class)aClass;	// 0x31ad3a15
@end

