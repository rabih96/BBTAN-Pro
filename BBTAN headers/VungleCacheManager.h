//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, VungleAd;

@interface VungleCacheManager : NSObject
{
    NSString *_cachePath;
    id <VungleCacheManagerDelegate> _delegate;
    VungleAd *_lastBundle;
    VungleAd *_tempBundle;
    CDUnknownBlockType _responseBlock;
}

- (void).cxx_destruct;
- (id)adFromCampaignName:(id)arg1;
- (id)cacheContents;
@property(readonly, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
- (void)cleanCache;
- (void)cleanUpLocalBundleWithCampaign:(id)arg1;
- (void)clearCache;
- (id)createCacheDirectoryWithName:(id)arg1 error:(id *)arg2;
@property(nonatomic) __weak id <VungleCacheManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)deleteCacheDirectoryWithName:(id)arg1 error:(id *)arg2;
- (id)fullPathFromRelativeCachePath:(id)arg1;
- (id)getExpiredBundles;
- (id)initWithCacheDirectoryName:(id)arg1;
- (void)insertAd:(id)arg1;
- (_Bool)isCampaignCached:(id)arg1;
@property(retain, nonatomic) VungleAd *lastBundle; // @synthesize lastBundle=_lastBundle;
- (id)lastValidCachedBundle;
- (id)loadVungleAdWithCampaignID:(id)arg1;
- (void)markCampaign:(id)arg1 viewed:(_Bool)arg2 newExpire:(double)arg3;
- (void)reactToBundleStatusChangeWithBlock:(CDUnknownBlockType)arg1;
- (id)readyBundle;
- (void)removeBundleByCampaign:(id)arg1;
- (void)removeBundles:(id)arg1;
- (_Bool)removeCacheDirectory;
- (void)removeInvalidCachedBundlesAtPath:(id)arg1;
- (void)removeOldestBundle;
@property(copy, nonatomic) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
- (void)serializeAd:(id)arg1;
@property(retain, nonatomic) VungleAd *tempBundle; // @synthesize tempBundle=_tempBundle;
- (void)setupExpiryCleanupForBundle:(id)arg1;
- (void)updateCachedAd:(id)arg1;
- (void)updateLastBundle:(id)arg1;
- (void)updateLastBundleOnAdCompletion;

@end
