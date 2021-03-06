//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, TAGDiskLoadCallback, TAGManager, TAGNetworkLoadCallback, TAGPLegacyRawProtoSupplementedResource, TAGResourceLoaderScheduler, TAGRuntime;

@interface TAGContainer : NSObject
{
    NSString *_ctfeServerAddress;
    _Bool _diskLoadFinished;
    int _resourceFormatVersion;
    NSString *_containerId;
    double _lastRefreshTime;
    id <TAGResourceStorage> _resourceStorage;
    TAGManager *_tagManager;
    NSString *_ctfeUrlPathAndQuery;
    unsigned long long _numTokens;
    TAGPLegacyRawProtoSupplementedResource *_lastLoadedSupplementedResource;
    TAGNetworkLoadCallback *_networkLoadCallback;
    TAGDiskLoadCallback *_diskLoadCallback;
    TAGResourceLoaderScheduler *_networkLoadScheduler;
    TAGRuntime *_runtime;
    NSMutableDictionary *_functionCallTagHandlers;
    NSMutableDictionary *_functionCallMacroHandlers;
    NSString *_resourceVersion;
    double _lastRefreshMethodCalledTime;
}

+ (int)maximumTokenCount;
+ (double)minimumRefreshPeriod;
+ (double)minimumRefreshPeriodInBurstMode;
+ (double)refreshPeriodOnFailure;
+ (double)refreshPeriodOnSuccess;
- (void).cxx_destruct;
- (_Bool)booleanForKey:(id)arg1;
- (void)close;
@property(readonly, copy, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
- (void)createInitialContainer;
@property(copy, nonatomic) NSString *ctfeServerAddress;
@property(copy, nonatomic) NSString *ctfeUrlPathAndQuery; // @synthesize ctfeUrlPathAndQuery=_ctfeUrlPathAndQuery;
- (double)currentTimeInMilliseconds;
@property(retain) TAGDiskLoadCallback *diskLoadCallback; // @synthesize diskLoadCallback=_diskLoadCallback;
@property _Bool diskLoadFinished; // @synthesize diskLoadFinished=_diskLoadFinished;
- (double)doubleForKey:(id)arg1;
- (void)evaluateTags:(id)arg1;
- (id)functionCallMacroHandlerForMacro:(id)arg1;
@property(retain) NSMutableDictionary *functionCallMacroHandlers; // @synthesize functionCallMacroHandlers=_functionCallMacroHandlers;
- (id)functionCallTagHandlerForTag:(id)arg1;
@property(retain) NSMutableDictionary *functionCallTagHandlers; // @synthesize functionCallTagHandlers=_functionCallTagHandlers;
- (id)initWithId:(id)arg1 tagManager:(id)arg2;
- (id)initWithId:(id)arg1 tagManager:(id)arg2 resourceStorage:(id)arg3;
- (long long)int64ForKey:(id)arg1;
- (_Bool)isDefault;
- (_Bool)isDefaultContainerRefreshMode;
@property(retain) TAGPLegacyRawProtoSupplementedResource *lastLoadedSupplementedResource; // @synthesize lastLoadedSupplementedResource=_lastLoadedSupplementedResource;
@property double lastRefreshMethodCalledTime; // @synthesize lastRefreshMethodCalledTime=_lastRefreshMethodCalledTime;
@property double lastRefreshTime; // @synthesize lastRefreshTime=_lastRefreshTime;
- (void)loadAfterDelay:(double)arg1;
- (void)loadWithCallback:(id)arg1;
- (void)loadWithCallback:(id)arg1 resourceLoaderScheduler:(id)arg2;
@property(retain) TAGNetworkLoadCallback *networkLoadCallback; // @synthesize networkLoadCallback=_networkLoadCallback;
@property(retain) TAGResourceLoaderScheduler *networkLoadScheduler; // @synthesize networkLoadScheduler=_networkLoadScheduler;
@property unsigned long long numTokens; // @synthesize numTokens=_numTokens;
- (void)refresh;
- (void)registerFunctionCallMacroHandler:(id)arg1 forMacro:(id)arg2;
- (void)registerFunctionCallTagHandler:(id)arg1 forTag:(id)arg2;
@property int resourceFormatVersion; // @synthesize resourceFormatVersion=_resourceFormatVersion;
@property(retain) id <TAGResourceStorage> resourceStorage; // @synthesize resourceStorage=_resourceStorage;
@property(copy) NSString *resourceVersion; // @synthesize resourceVersion=_resourceVersion;
@property(retain) TAGRuntime *runtime; // @synthesize runtime=_runtime;
- (void)saveResourceToDisk:(id)arg1;
- (void)setSupplementals:(id)arg1;
@property(retain) TAGManager *tagManager; // @synthesize tagManager=_tagManager;
- (void)setupEvaluatorsWithExpandedResource:(id)arg1;
- (void)setupEvaluatorsWithResource:(id)arg1;
- (id)stringForKey:(id)arg1;
- (_Bool)useAvailableTokenWithCurrentTime:(double)arg1;

@end

