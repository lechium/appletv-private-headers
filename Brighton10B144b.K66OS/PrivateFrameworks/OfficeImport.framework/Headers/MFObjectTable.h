/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface MFObjectTable : NSObject {
	NSMutableArray *m_objects;	// 4 = 0x4
}
- (id)init;	// 0x348ca611
- (void)clear;	// 0x348ce1e1
- (void)dealloc;	// 0x348ce525
- (int)deleteObject:(unsigned)object;	// 0x349525c5
- (id)getObject:(unsigned)object;	// 0x34a62605
- (unsigned)insertPos;	// 0x34951d31
- (int)putObject:(id)object :(unsigned)arg2;	// 0x348cd8a9
- (int)selectInto:(int)into :(id)arg2;	// 0x348cdb35
- (int)size;	// 0x348cd44d
@end
