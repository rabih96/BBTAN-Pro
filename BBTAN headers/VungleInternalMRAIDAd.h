//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VungleInterstitialMRAIDAd.h"

#import "NSCoding.h"
#import "VungleSerializableAd.h"
#import "VungleValidatableAd.h"

@class NSDictionary, NSMutableSet, NSSet, NSString, NSURL, VungleMRAIDAsset;

@interface VungleInternalMRAIDAd : VungleInterstitialMRAIDAd <VungleValidatableAd, NSCoding, VungleSerializableAd>
{
    NSString *_templateID;
    NSURL *_templateURL;
    NSDictionary *_templateReplacements;
    NSDictionary *_cacheableTemplateReplacements;
    NSDictionary *_TPAT;
    VungleMRAIDAsset *_templateAsset;
    NSMutableSet *_privateAssets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *TPAT; // @synthesize TPAT=_TPAT;
- (id)TPATForKey:(id)arg1;
- (id)adSerializationPath;
- (void)addTemplateAsset:(id)arg1;
- (void)appendAsset:(id)arg1;
- (void)appendAssets:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *assets;
- (id)buildAssets;
- (id)buildCacheableReplacementsDictionary;
- (id)buildDictionaryFromTPAT:(id)arg1;
- (id)buildNonCacheableReplacementsDictionary;
@property(copy, nonatomic) NSDictionary *cacheableTemplateReplacements; // @synthesize cacheableTemplateReplacements=_cacheableTemplateReplacements;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isDownloaded;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToVungleMRAIDAd:(id)arg1;
- (_Bool)isValid;
@property(retain, nonatomic) NSMutableSet *privateAssets; // @synthesize privateAssets=_privateAssets;
@property(retain, nonatomic) VungleMRAIDAsset *templateAsset; // @synthesize templateAsset=_templateAsset;
@property(copy, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
@property(copy, nonatomic) NSDictionary *templateReplacements; // @synthesize templateReplacements=_templateReplacements;
@property(copy, nonatomic) NSURL *templateURL; // @synthesize templateURL=_templateURL;
- (void)updateWithRequestAdBody:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

