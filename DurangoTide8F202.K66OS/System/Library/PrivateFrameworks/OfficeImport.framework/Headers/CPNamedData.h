/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CPNamedData : NSObject {
@private
	NSData *mData;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0x31b6729d; @synthesize=mData
@property(readonly, assign, nonatomic) NSString *name;	// G=0x31b6728d; @synthesize=mName
+ (id)namedDataWithData:(id)data named:(id)named;	// 0x31b67379
- (id)initWithData:(id)data named:(id)named;	// 0x31b67309
// declared property getter: - (id)data;	// 0x31b6729d
- (void)dealloc;	// 0x31b672ad
// declared property getter: - (id)name;	// 0x31b6728d
@end

