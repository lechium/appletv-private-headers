/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSJSONSerialization : NSObject {
@private
	void *reserved[6];	// 4 = 0x4
}
+ (id)JSONObjectWithData:(id)data options:(unsigned)options error:(id *)error;	// 0x35ec8581
+ (id)JSONObjectWithStream:(id)stream options:(unsigned)options error:(id *)error;	// 0x35ec8841
+ (id)allocWithZone:(NSZone *)zone;	// 0x35ec8349
+ (id)dataWithJSONObject:(id)jsonobject options:(unsigned)options error:(id *)error;	// 0x35ec8405
+ (BOOL)isValidJSONObject:(id)object;	// 0x35ec83d9
+ (int)writeJSONObject:(id)object toStream:(id)stream options:(unsigned)options error:(id *)error;	// 0x35ec8659
- (id)init;	// 0x35ec8391
@end

