//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALSdkSettings.h"

@class NSMutableDictionary;

@interface ALInternalSdkSettings : ALSdkSettings
{
    NSMutableDictionary *overriddenSettings;
    id <ALLogListenerDelegate> listener;
}

- (void).cxx_destruct;
- (id)init;
@property(retain) id <ALLogListenerDelegate> listener; // @synthesize listener;
- (id)overriddenSettings;
- (void)putBool:(_Bool)arg1 forKey:(long long)arg2;
- (void)putInt:(int)arg1 forKey:(long long)arg2;
- (void)putLong:(long long)arg1 forKey:(long long)arg2;
- (void)putString:(id)arg1 forKey:(long long)arg2;

@end

