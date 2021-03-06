//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALSdk, NSMutableArray;

@interface ALPersistentPostbackManager : NSObject
{
    ALSdk *_sdk;
    NSObject *_queueLock;
    NSMutableArray *_postbackQueue;
    NSMutableArray *_stalledPostbacks;
}

- (void).cxx_destruct;
- (void)dequeuePostback:(id)arg1;
- (void)dispatchPostback:(id)arg1;
- (void)enqueuePostback:(id)arg1;
- (void)flushPostbackQueue;
- (void)flushStalledPostbacks;
- (void)handleStalledPostback:(id)arg1;
- (id)initWithSdk:(id)arg1;
- (id)loadQueue;
@property(retain, nonatomic) NSMutableArray *postbackQueue; // @synthesize postbackQueue=_postbackQueue;
@property(retain, nonatomic) NSObject *queueLock; // @synthesize queueLock=_queueLock;
@property(retain, nonatomic) ALSdk *sdk; // @synthesize sdk=_sdk;
@property(retain, nonatomic) NSMutableArray *stalledPostbacks; // @synthesize stalledPostbacks=_stalledPostbacks;
- (void)submitPostback:(id)arg1;
- (void)submitPostback:(id)arg1 body:(id)arg2;
- (void)writeQueue;

@end

