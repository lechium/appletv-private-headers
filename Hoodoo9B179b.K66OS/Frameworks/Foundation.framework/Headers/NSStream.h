/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSStream.h> // Unknown library


@interface NSStream (NSStream)
@property(assign) id delegate;	// G=0x310a0819; S=0x310a083d; converted property
- (void)close;	// 0x310a07f5
// converted property getter: - (id)delegate;	// 0x310a0819
- (void)open;	// 0x310a07d1
- (id)propertyForKey:(id)key;	// 0x310a0861
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x310a08cd
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x310a08a9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x310a083d
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x310a0885
- (id)streamError;	// 0x310a0915
- (unsigned)streamStatus;	// 0x310a08f1
@end

@interface NSStream (NSSocketStreamCreationExtensions)
+ (void)getStreamsToHost:(id)host port:(int)port inputStream:(id *)stream outputStream:(id *)stream4;	// 0x310a1349
@end

