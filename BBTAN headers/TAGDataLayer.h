//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSCondition, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSRegularExpression;

@interface TAGDataLayer : NSObject
{
    _Bool _persistentStoreLoaded;
    NSDictionary *_dataLayer;
    NSMutableSet *_listeners;
    NSMutableDictionary *_model;
    NSRecursiveLock *_pushLock;
    NSMutableArray *_updateQueue;
    long long _pushDepth;
    id <TAGDataLayerPersistentStore> _persistentStore;
    NSCondition *_persistentStoreLoadingCondition;
    NSArray *_lifetimeKeyComponents;
    NSRegularExpression *_lifetimePattern;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)clearPersistentKeysWithPrefix:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dataLayer; // @synthesize dataLayer=_dataLayer;
- (id)expandKey:(id)arg1 value:(id)arg2;
- (id)flattenMap:(id)arg1;
- (void)flattenMapHelper:(id)arg1 keyPrefix:(id)arg2 accum:(id)arg3;
- (id)get:(id)arg1;
- (id)getLifetimeObject:(id)arg1;
- (id)getLifetimeValue:(id)arg1;
- (id)init;
- (id)initWithPersistentStore:(id)arg1;
@property(readonly) NSArray *lifetimeKeyComponents; // @synthesize lifetimeKeyComponents=_lifetimeKeyComponents;
@property(readonly) NSRegularExpression *lifetimePattern; // @synthesize lifetimePattern=_lifetimePattern;
@property(retain) NSMutableSet *listeners; // @synthesize listeners=_listeners;
- (void)loadSavedMaps;
- (void)mergeList:(id)arg1 intoList:(id)arg2;
- (void)mergeMap:(id)arg1 intoMap:(id)arg2;
@property(retain) NSMutableDictionary *model; // @synthesize model=_model;
- (void)notifyListeners:(id)arg1;
- (void)onKeyValuesLoaded:(id)arg1;
- (id)parseLifetime:(id)arg1;
@property(readonly) id <TAGDataLayerPersistentStore> persistentStore; // @synthesize persistentStore=_persistentStore;
@property _Bool persistentStoreLoaded; // @synthesize persistentStoreLoaded=_persistentStoreLoaded;
@property(readonly) NSCondition *persistentStoreLoadingCondition; // @synthesize persistentStoreLoadingCondition=_persistentStoreLoadingCondition;
- (void)processQueuedUpdates;
- (void)processUpdate:(id)arg1;
- (void)push:(id)arg1;
@property long long pushDepth; // @synthesize pushDepth=_pushDepth;
@property(retain) NSRecursiveLock *pushLock; // @synthesize pushLock=_pushLock;
- (void)pushValue:(id)arg1 forKey:(id)arg2;
- (void)pushWithoutWaitingForSaved:(id)arg1;
- (void)registerListener:(id)arg1;
- (void)savePersistentlyIfNeeded:(id)arg1;
@property(retain) NSMutableArray *updateQueue; // @synthesize updateQueue=_updateQueue;
- (void)unregisterListener:(id)arg1;

@end

