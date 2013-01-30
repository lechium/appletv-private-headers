/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <NSObject.h> // Unknown library

@class NSDate, NSMutableDictionary;

@interface MBDebugContext : NSObject {
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(retain, nonatomic) NSDate *simulatedDate;	// G=0x345cec79; S=0x345cec95; 
@property(readonly, assign, nonatomic) long time;	// G=0x345cec39; 
+ (id)defaultDebugContext;	// 0x345ceb31
- (id)init;	// 0x345ceb75
- (BOOL)boolForName:(id)name;	// 0x345cedfd
- (void)dealloc;	// 0x345cebed
- (id)description;	// 0x345ceff9
- (BOOL)eval:(id)eval;	// 0x345cefb5
- (int)intForName:(id)name;	// 0x345cee71
- (BOOL)isFlagSet:(id)set;	// 0x345ceccd
- (id)performSelectorForName:(id)name;	// 0x345ceeed
- (id)performSelectorForName:(id)name withObject:(id)object;	// 0x345cef49
- (void)removeValueForName:(id)name;	// 0x345ced71
- (void)setBool:(BOOL)aBool forName:(id)name;	// 0x345cedb1
- (void)setDelegate:(id)delegate andSelector:(SEL)selector forName:(id)name;	// 0x345cee99
- (void)setFlag:(id)flag;	// 0x345ced01
- (void)setInt:(int)int forName:(id)name;	// 0x345cee31
// declared property setter: - (void)setSimulatedDate:(id)date;	// 0x345cec95
- (void)setValue:(id)value forName:(id)name;	// 0x345ced51
// declared property getter: - (id)simulatedDate;	// 0x345cec79
// declared property getter: - (long)time;	// 0x345cec39
- (id)valueForName:(id)name;	// 0x345ced91
@end
