/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import "BulletinBoard-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;

@interface BBSound : NSObject <NSCopying, NSCoding> {
	int _soundType;	// 4 = 0x4
	unsigned long _systemSoundID;	// 8 = 0x8
	unsigned _soundBehavior;	// 12 = 0xc
	NSString *_audioCategory;	// 16 = 0x10
	NSString *_ringtoneName;	// 20 = 0x14
	BOOL _repeats;	// 24 = 0x18
	NSDictionary *_vibrationPattern;	// 28 = 0x1c
}
@property(copy, nonatomic) NSString *audioCategory;	// G=0x33570d95; S=0x33570da9; @synthesize=_audioCategory
@property(assign, nonatomic, getter=isRepeating) BOOL repeats;	// G=0x33570d55; S=0x33570d65; @synthesize=_repeats
@property(retain, nonatomic) NSString *ringtoneName;	// G=0x33570d35; S=0x33570d45; @synthesize=_ringtoneName
@property(assign, nonatomic) unsigned soundBehavior;	// G=0x33570d75; S=0x33570d85; @synthesize=_soundBehavior
@property(assign, nonatomic) int soundType;	// G=0x33570cd5; S=0x33570ce5; @synthesize=_soundType
@property(assign, nonatomic) unsigned long systemSoundID;	// G=0x33570cf5; S=0x33570d05; @synthesize=_systemSoundID
@property(retain, nonatomic) NSDictionary *vibrationPattern;	// G=0x33570d15; S=0x33570d25; @synthesize=_vibrationPattern
+ (id)_possiblyCachedAlertSoundForInitializedSound:(id)initializedSound;	// 0x335704c9
+ (id)alertSoundWithSystemSoundID:(unsigned long)systemSoundID;	// 0x33570465
- (id)initWithCoder:(id)coder;	// 0x33570831
- (id)initWithRingtone:(id)ringtone vibrationPattern:(id)pattern repeats:(BOOL)repeats;	// 0x335706ad
- (id)initWithRingtone:(id)ringtone vibrationPattern:(id)pattern repeats:(BOOL)repeats audioCategory:(id)category;	// 0x335706d1
- (id)initWithSystemSoundID:(unsigned long)systemSoundID behavior:(unsigned)behavior;	// 0x335705d5
- (id)initWithSystemSoundID:(unsigned long)systemSoundID behavior:(unsigned)behavior vibrationPattern:(id)pattern;	// 0x335705f9
- (BOOL)_isUniquableAlertSound;	// 0x335707e9
// declared property getter: - (id)audioCategory;	// 0x33570d95
- (id)copyWithZone:(NSZone *)zone;	// 0x33570821
- (void)dealloc;	// 0x3357077d
- (id)description;	// 0x33570b2d
- (void)encodeWithCoder:(id)coder;	// 0x335709e9
// declared property getter: - (BOOL)isRepeating;	// 0x33570d55
// declared property getter: - (id)ringtoneName;	// 0x33570d35
// declared property setter: - (void)setAudioCategory:(id)category;	// 0x33570da9
// declared property setter: - (void)setRepeats:(BOOL)repeats;	// 0x33570d65
// declared property setter: - (void)setRingtoneName:(id)name;	// 0x33570d45
// declared property setter: - (void)setSoundBehavior:(unsigned)behavior;	// 0x33570d85
// declared property setter: - (void)setSoundType:(int)type;	// 0x33570ce5
// declared property setter: - (void)setSystemSoundID:(unsigned long)anId;	// 0x33570d05
// declared property setter: - (void)setVibrationPattern:(id)pattern;	// 0x33570d25
// declared property getter: - (unsigned)soundBehavior;	// 0x33570d75
// declared property getter: - (int)soundType;	// 0x33570cd5
// declared property getter: - (unsigned long)systemSoundID;	// 0x33570cf5
// declared property getter: - (id)vibrationPattern;	// 0x33570d15
@end

