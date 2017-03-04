//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TAGContainerCallback.h"

@class NSString, TAGContainerOpener;

@interface TAGWaitForNonDefaultRefresh : NSObject <TAGContainerCallback>
{
    TAGContainerOpener *_containerOpener;
}

- (void).cxx_destruct;
@property(retain) TAGContainerOpener *containerOpener; // @synthesize containerOpener=_containerOpener;
- (void)containerRefreshBegin:(id)arg1 refreshType:(int)arg2;
- (void)containerRefreshFailure:(id)arg1 failure:(int)arg2 refreshType:(int)arg3;
- (void)containerRefreshSuccess:(id)arg1 refreshType:(int)arg2;
- (id)initWithContainerOpener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
