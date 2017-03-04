//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface GADStatisticDictionary : NSObject
{
    NSMutableDictionary *_statistics;
    _Bool _allowDictionaryModification;
    _Bool _hasEnqueuedNotificationBlock;
    id <GADStatisticDictionaryDelegate> _delegate;
    NSLock *_delegateLock;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
- (void)addNumber:(id)arg1 toNumberForKey:(id)arg2 shouldNotifyDelegate:(_Bool)arg3;
- (void)addObject:(id)arg1 toArrayWithKey:(id)arg2 shouldNotifyDelegate:(_Bool)arg3;
@property(nonatomic) _Bool allowDictionaryModification; // @synthesize allowDictionaryModification=_allowDictionaryModification;
- (void)decrementNumberForKey:(id)arg1 shouldNotifyDelegate:(_Bool)arg2;
@property(nonatomic) __weak id <GADStatisticDictionaryDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSLock *delegateLock; // @synthesize delegateLock=_delegateLock;
- (id)description;
- (id)dictionary;
- (void)didFinishModifying;
- (void)dispatchAsyncShouldNotifyDelegate:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)enqueueNotificationBlock;
@property(nonatomic) _Bool hasEnqueuedNotificationBlock; // @synthesize hasEnqueuedNotificationBlock=_hasEnqueuedNotificationBlock;
- (void)incrementNumberForKey:(id)arg1 shouldNotifyDelegate:(_Bool)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithQueueLabel:(const char *)arg1 delegate:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void)setObject:(id)arg1 forKey:(id)arg2 shouldNotifyDelegate:(_Bool)arg3;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
