//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSTimer;

@interface TAGResourceLoaderScheduler : NSObject
{
    NSString *_containerId;
    id <TAGLoadCallback> _loadCallback;
    NSString *_ctfeServerAddress;
    NSString *_ctfeUrlPathAndQuery;
    NSString *_previousVersion;
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (void)cancelTimer;
- (void)close;
@property(readonly, copy) NSString *containerId; // @synthesize containerId=_containerId;
@property(copy) NSString *ctfeServerAddress; // @synthesize ctfeServerAddress=_ctfeServerAddress;
@property(copy) NSString *ctfeUrlPathAndQuery; // @synthesize ctfeUrlPathAndQuery=_ctfeUrlPathAndQuery;
- (id)initWithContainerId:(id)arg1;
- (void)loadAfterDelay:(double)arg1 withPreviousVersion:(id)arg2;
@property(retain) id <TAGLoadCallback> loadCallback; // @synthesize loadCallback=_loadCallback;
@property(copy) NSString *previousVersion; // @synthesize previousVersion=_previousVersion;
- (void)requestResource:(id)arg1;
- (void)scheduleTimerWithDelay:(double)arg1;
@property(retain) NSTimer *timer; // @synthesize timer=_timer;

@end

