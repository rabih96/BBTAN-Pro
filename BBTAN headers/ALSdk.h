//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALAdService, ALConnectionManager, ALDataCollector, ALEventService, ALFileManager, ALLogManager, ALNativeAdService, ALPersistentPostbackManager, ALPostbackService, ALPreloadedAdManager, ALPreloadedNativeAdManager, ALSdkSettings, ALSettingsManager, ALStatsManager, ALTargetingData, ALTaskManager, NSString;

@interface ALSdk : NSObject
{
    _Bool _initializing;
    _Bool _enabled;
    _Bool _networkError;
    NSString *_sdkKey;
    ALSdkSettings *_settings;
    ALAdService *_adService;
    ALNativeAdService *_nativeAdService;
    ALPostbackService *_postbackService;
    ALEventService *_eventService;
    ALTargetingData *_targetingData;
    ALLogManager *_logManager;
    ALTaskManager *_taskManager;
    ALSettingsManager *_settingsManager;
    ALConnectionManager *_connectionManager;
    ALStatsManager *_statsManager;
    ALFileManager *_fileManager;
    ALPreloadedAdManager *_preloadedAdManager;
    ALPreloadedNativeAdManager *_preloadedNativeAdManager;
    ALDataCollector *_dataCollector;
    ALPersistentPostbackManager *_persistentPostbackManager;
}

+ (void)initialize;
+ (void)initializeSdk;
+ (id)loadSDKSettings;
+ (id)shared;
+ (id)sharedWithKey:(id)arg1;
+ (id)sharedWithKey:(id)arg1 settings:(id)arg2;
+ (id)version;
- (void).cxx_destruct;
@property(retain, nonatomic) ALAdService *adService; // @synthesize adService=_adService;
- (void)attemptInitialize;
- (_Bool)boolForKey:(long long)arg1;
@property(retain, nonatomic) ALConnectionManager *connectionManager; // @synthesize connectionManager=_connectionManager;
- (id)constraintsForKeys:(id)arg1 variableBindings:(id)arg2;
@property(retain, nonatomic) ALDataCollector *dataCollector; // @synthesize dataCollector=_dataCollector;
@property(retain, nonatomic) ALEventService *eventService; // @synthesize eventService=_eventService;
@property(retain, nonatomic) ALFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void)handleSdkUpdate;
- (id)initWithKey:(id)arg1 usingSettings:(id)arg2;
- (void)initializeSdk;
- (long long)integerForKey:(long long)arg1;
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(getter=isEnabledAndInitialized) _Bool enabledAndInitialized; // @dynamic enabledAndInitialized;
@property(getter=isInitializing) _Bool initializing; // @synthesize initializing=_initializing;
@property(getter=isNetworkError) _Bool networkError; // @synthesize networkError=_networkError;
@property(retain, nonatomic) ALLogManager *logManager; // @synthesize logManager=_logManager;
- (void)markInitialized:(_Bool)arg1;
- (void)markNetworkError;
@property(retain, nonatomic) ALNativeAdService *nativeAdService; // @synthesize nativeAdService=_nativeAdService;
- (id)numberForKey:(long long)arg1;
@property(retain, nonatomic) ALPersistentPostbackManager *persistentPostbackManager; // @synthesize persistentPostbackManager=_persistentPostbackManager;
@property(retain, nonatomic) ALPostbackService *postbackService; // @synthesize postbackService=_postbackService;
@property(retain, nonatomic) ALPreloadedAdManager *preloadedAdManager; // @synthesize preloadedAdManager=_preloadedAdManager;
@property(retain, nonatomic) ALPreloadedNativeAdManager *preloadedNativeAdManager; // @synthesize preloadedNativeAdManager=_preloadedNativeAdManager;
- (void)resetSdkState;
@property(retain, nonatomic) NSString *sdkKey; // @synthesize sdkKey=_sdkKey;
- (void)setPluginVersion:(id)arg1;
@property(retain, nonatomic) ALSdkSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) ALSettingsManager *settingsManager; // @synthesize settingsManager=_settingsManager;
@property(retain, nonatomic) ALStatsManager *statsManager; // @synthesize statsManager=_statsManager;
@property(retain, nonatomic) ALTargetingData *targetingData; // @synthesize targetingData=_targetingData;
@property(retain, nonatomic) ALTaskManager *taskManager; // @synthesize taskManager=_taskManager;
- (id)stringForKey:(long long)arg1;
- (double)timeIntervalForKey:(long long)arg1;

@end

