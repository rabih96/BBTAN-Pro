//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADClearcutCommandExecuting.h"

@class GADVersionedCache, NSObject<OS_dispatch_queue>, NSString;

@interface GADClearcut : NSObject <GADClearcutCommandExecuting>
{
    id <GADClearcutCommandExecuting> _commandExecutor;
    GADVersionedCache *_versionedCache;
    _Bool _isUpdating;
    long long _clearcutID;
    NSString *_appUniqueID;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)asynchronouslyExecuteCommands:(id)arg1;
- (id)init;
- (_Bool)isLoaded;
- (id)nextUniqueID;
- (void)resetUpdateCheckingState;
- (void)updateCommandExecutorWithConfig:(id)arg1 script:(id)arg2;
- (void)updateIfNeeded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

