/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "BKSXPCCoding.h"
#import "BackBoardServices-Structs.h"

@class NSString;

@interface BKSApplicationDeactivationSettings : NSObject <NSCopying, BKSXPCCoding> {
	BOOL _animated;	// 4 = 0x4
	BOOL _underLock;	// 5 = 0x5
	BOOL _flip;	// 6 = 0x6
	BOOL _crossfade;	// 7 = 0x7
	NSString *_contextInfo;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL animated;	// G=0x330727e1; S=0x330727f1; @synthesize=_animated
@property(copy, nonatomic) NSString *contextInfo;	// G=0x33072861; S=0x33072875; @synthesize=_contextInfo
@property(assign, nonatomic) BOOL crossfade;	// G=0x33072841; S=0x33072851; @synthesize=_crossfade
@property(assign, nonatomic) BOOL flip;	// G=0x33072821; S=0x33072831; @synthesize=_flip
@property(assign, nonatomic) BOOL underLock;	// G=0x33072801; S=0x33072811; @synthesize=_underLock
- (id)initWithSettings:(id)settings zone:(NSZone *)zone;	// 0x33072385
- (id)initWithXPCDictionary:(id)xpcdictionary;	// 0x33072659
// declared property getter: - (BOOL)animated;	// 0x330727e1
// declared property getter: - (id)contextInfo;	// 0x33072861
- (id)copyWithZone:(NSZone *)zone;	// 0x3307261d
// declared property getter: - (BOOL)crossfade;	// 0x33072841
- (void)dealloc;	// 0x33072471
- (id)description;	// 0x330724bd
- (void)encodeWithXPCDictionary:(id)xpcdictionary;	// 0x33072725
// declared property getter: - (BOOL)flip;	// 0x33072821
// declared property setter: - (void)setAnimated:(BOOL)animated;	// 0x330727f1
// declared property setter: - (void)setContextInfo:(id)info;	// 0x33072875
// declared property setter: - (void)setCrossfade:(BOOL)crossfade;	// 0x33072851
// declared property setter: - (void)setFlip:(BOOL)flip;	// 0x33072831
// declared property setter: - (void)setUnderLock:(BOOL)lock;	// 0x33072811
// declared property getter: - (BOOL)underLock;	// 0x33072801
@end

