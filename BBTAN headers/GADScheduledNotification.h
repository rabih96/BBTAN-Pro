//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface GADScheduledNotification : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMutableDictionary *_notificationNamesAndTimers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)intervalStringForNotificationName:(id)arg1;
- (double)normalizedInterval:(double)arg1;
- (id)notificationNameForInterval:(double)arg1;
- (id)notificationNameForIntervalString:(id)arg1;
- (void)startTimerForNotification:(id)arg1 interval:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)stopObservingNotificationWithName:(id)arg1;

@end

