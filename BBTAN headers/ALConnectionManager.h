//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALLogManager, ALSdk;

@interface ALConnectionManager : NSObject
{
    ALSdk *sdk;
    ALLogManager *logger;
}

+ (double)defaultTimeoutForSdk:(id)arg1;
- (void).cxx_destruct;
- (void)get:(id)arg1;
- (void)get:(id)arg1 andNotify:(id)arg2;
- (void)get:(id)arg1 withTimeout:(double)arg2 andNotify:(id)arg3;
- (id)init;
- (id)initWithSdk:(id)arg1;
- (void)post:(id)arg1 withData:(id)arg2;
- (void)post:(id)arg1 withData:(id)arg2 andNotify:(id)arg3;
- (void)put:(id)arg1 withData:(id)arg2;
- (void)put:(id)arg1 withData:(id)arg2 andNotify:(id)arg3;
- (void)send:(id)arg1 andNotify:(id)arg2;
- (void)sendTo:(id)arg1 using:(id)arg2 andNotify:(id)arg3;
- (void)sendTo:(id)arg1 using:(id)arg2 data:(id)arg3 andNotify:(id)arg4;
- (void)sendTo:(id)arg1 using:(id)arg2 withTimeout:(double)arg3 andNotify:(id)arg4;

@end
