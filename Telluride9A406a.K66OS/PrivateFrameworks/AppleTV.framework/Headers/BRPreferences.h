/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface BRPreferences : NSObject {
@private
	NSString *_domain;	// 4 = 0x4
}
@property(readonly, retain) NSString *domain;	// G=0x3314af71; converted property
+ (id)sharedFrontRowPreferences;	// 0x3314b5a1
- (id)initWithDomain:(id)domain;	// 0x3314aecd
- (BOOL)boolForKey:(id)key;	// 0x3314b1f5
- (BOOL)boolForKey:(id)key withValueForMissingPrefs:(BOOL)missingPrefs;	// 0x3314b245
- (BOOL)canSetPreferencesForKey:(id)key;	// 0x3314b325
- (void)dealloc;	// 0x3314af25
- (id)descriptionForKey:(id)key;	// 0x3314b2dd
// converted property getter: - (id)domain;	// 0x3314af71
- (double)doubleForKey:(id)key;	// 0x3314b14d
- (double)doubleForKey:(id)key withValueForMissingPrefs:(double)missingPrefs;	// 0x3314b19d
- (float)floatForKey:(id)key;	// 0x3314b0ad
- (float)floatForKey:(id)key withValueForMissingPrefs:(float)missingPrefs;	// 0x3314b0fd
- (int)integerForKey:(id)key;	// 0x3314b00d
- (int)integerForKey:(id)key withValueForMissingPrefs:(int)missingPrefs;	// 0x3314b05d
- (BOOL)isLoggingEnabledForKey:(id)key;	// 0x3314b501
- (id)logFilePathsForKey:(id)key;	// 0x3314b531
- (id)objectForKey:(id)key;	// 0x3314afc5
- (BOOL)setBool:(BOOL)aBool forKey:(id)key;	// 0x3314b461
- (BOOL)setDouble:(double)aDouble forKey:(id)key;	// 0x3314b40d
- (BOOL)setFloat:(float)aFloat forKey:(id)key;	// 0x3314b3bd
- (BOOL)setInteger:(int)integer forKey:(id)key;	// 0x3314b36d
- (BOOL)setObject:(id)object forKey:(id)key;	// 0x3314b4b1
- (id)stringForKey:(id)key;	// 0x3314b295
- (void)syncNow;	// 0x3314af81
@end

