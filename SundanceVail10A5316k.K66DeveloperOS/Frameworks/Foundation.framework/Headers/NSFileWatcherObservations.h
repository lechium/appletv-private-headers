/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface NSFileWatcherObservations : NSObject {
@private
	BOOL _attributesChanged;	// 4 = 0x4
	BOOL _contentsChanged;	// 5 = 0x5
	BOOL _deleted;	// 6 = 0x6
	BOOL _moved;	// 7 = 0x7
	NSString *_lastObservedPath;	// 8 = 0x8
	BOOL _didResetURL;	// 12 = 0xc
	NSURL *_url;	// 16 = 0x10
}
- (id)initWithURL:(id)url;	// 0x31b1f909
- (void)addAttributeChange;	// 0x31b1f9c1
- (void)addContentsChange;	// 0x31b1f9d5
- (void)addDeletion;	// 0x31b1f9e9
- (void)addMoveToPath:(id)path;	// 0x31b1f9fd
- (void)addMoveToURL:(id)url;	// 0x31b1fa51
- (void)dealloc;	// 0x31b1f95d
- (void)notifyObserver:(id)observer;	// 0x31b1fa9d
@end

