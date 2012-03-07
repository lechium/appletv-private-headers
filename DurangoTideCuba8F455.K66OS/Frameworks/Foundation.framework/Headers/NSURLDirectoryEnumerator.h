/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSDirectoryEnumerator.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {
@private
	CFURLEnumeratorRef _enumerator;	// 4 = 0x4
	id _errorHandler;	// 8 = 0x8
	BOOL shouldContinue;	// 12 = 0xc
}
@property(copy) id errorHandler;	// G=0x310506d5; S=0x310506ed; @synthesize=_errorHandler
- (id)initWithURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options errorHandler:(id)handler;	// 0x31050501
- (void)dealloc;	// 0x310505f5
- (id)directoryAttributes;	// 0x3104ef35
// declared property getter: - (id)errorHandler;	// 0x310506d5
- (id)fileAttributes;	// 0x3104ef31
- (void)finalize;	// 0x310505b9
- (unsigned)level;	// 0x310506bd
- (id)nextObject;	// 0x31050631
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x310506ed
- (void)skipDescendants;	// 0x310506a5
- (void)skipDescendents;	// 0x3104f769
@end
