//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADViewMonitorDelegate.h"

@class GADViewMonitor, NSDictionary, NSObject<OS_dispatch_queue>, NSString, UIView;

@interface GADActiveViewMonitor : NSObject <GADViewMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADViewMonitor *_viewMonitor;
    id <GADActiveViewMonitorDelegate> _delegate;
    struct CGRect _monitoredViewVisibleBounds;
    _Bool _monitoredViewVisible;
    NSString *_adFormat;
    NSDictionary *_activeViewConfiguration;
    UIView *_monitoredView;
}

- (void).cxx_destruct;
- (id)activeViewStateWithUnloadedFlag:(_Bool)arg1;
@property __weak id <GADActiveViewMonitorDelegate> delegate;
- (id)init;
- (id)initWithView:(id)arg1 adFormat:(id)arg2 activeViewConfiguration:(id)arg3;
@property(readonly, nonatomic) __weak UIView *monitoredView; // @synthesize monitoredView=_monitoredView;
- (void)sample;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)viewMonitorDidRefresh:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

