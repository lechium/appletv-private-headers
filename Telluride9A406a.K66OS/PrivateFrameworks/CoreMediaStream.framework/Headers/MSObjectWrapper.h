/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@protocol NSObject, NSCoding;

@interface MSObjectWrapper : NSObject {
@private
	long long _size;	// 4 = 0x4
	long long _uniqueID;	// 12 = 0xc
	id<NSObject, NSCoding> _object;	// 20 = 0x14
	int _errorCount;	// 24 = 0x18
}
@property(assign, nonatomic) int errorCount;	// G=0x338a3461; S=0x338a3471; @synthesize=_errorCount
@property(readonly, assign) id<NSCoding> object;	// G=0x338a3451; @synthesize=_object
@property(assign, nonatomic) long long size;	// G=0x338a33f9; S=0x338a3411; @synthesize=_size
@property(assign, nonatomic) long long uniqueID;	// G=0x338a3425; S=0x338a343d; @synthesize=_uniqueID
+ (int)indexOfObject:(id)object inWrapperArray:(id)wrapperArray;	// 0x338a3199
+ (id)objectsFromWrappers:(id)wrappers;	// 0x338a3211
+ (id)objectsFromWrappers:(id)wrappers equalToObject:(id)object;	// 0x338a32f1
+ (id)wrapperWithObject:(id)object size:(long long)size;	// 0x338a308d
- (id)initWithObject:(id)object size:(long long)size;	// 0x338a30d5
- (void)dealloc;	// 0x338a314d
// declared property getter: - (int)errorCount;	// 0x338a3461
// declared property getter: - (id)object;	// 0x338a3451
// declared property setter: - (void)setErrorCount:(int)count;	// 0x338a3471
// declared property setter: - (void)setSize:(long long)size;	// 0x338a3411
// declared property setter: - (void)setUniqueID:(long long)anId;	// 0x338a343d
// declared property getter: - (long long)size;	// 0x338a33f9
// declared property getter: - (long long)uniqueID;	// 0x338a3425
@end

