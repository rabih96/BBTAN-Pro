//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADAdViewDelegate.h"
#import "GADClearcutCommandExecuting.h"

@class GADAdView, NSObject<OS_dispatch_queue>, NSString;

@interface GADClearcutAdViewCommandExecutor : NSObject <GADAdViewDelegate, GADClearcutCommandExecuting>
{
    GADAdView *_adView;
    _Bool _loaded;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

- (void).cxx_destruct;
- (void)adViewDidFinishLoad:(id)arg1;
- (void)asynchronouslyExecuteCommands:(id)arg1;
- (void)dealloc;
- (id)initWithScript:(id)arg1 baseURL:(id)arg2;
- (_Bool)isLoaded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
