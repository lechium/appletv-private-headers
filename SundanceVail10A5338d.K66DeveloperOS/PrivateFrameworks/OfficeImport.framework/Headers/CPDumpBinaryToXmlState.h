/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary;

@interface CPDumpBinaryToXmlState : NSObject {
	NSString *mCurrentFieldName;	// 4 = 0x4
	NSMutableDictionary *mFieldNameToValueMap;	// 8 = 0x8
}
- (id)init;	// 0x33c59415
- (void)cacheValueforCurrentField:(id)field;	// 0x33c5951d
- (void)dealloc;	// 0x33c59479
- (void)setCurrentField:(id)field;	// 0x33c594dd
- (id)valueForCurrentField;	// 0x33c5954d
- (id)valueForField:(id)field;	// 0x33c59579
@end

