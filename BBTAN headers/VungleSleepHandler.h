//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUserDefaults;

@interface VungleSleepHandler : NSObject
{
    NSUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
- (double)currentSleep;
- (id)getPreferenceValueForKey:(id)arg1;
- (id)initWithUserDefaults:(id)arg1;
- (_Bool)isSleepingWhenComparedToTimestamp:(double)arg1;
- (void)setPreferenceValue:(id)arg1 forKey:(id)arg2;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (double)sleepDiffFromTime:(double)arg1;
- (void)updateSleep:(double)arg1;

@end
