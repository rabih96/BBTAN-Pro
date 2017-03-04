//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "VungleCacheable.h"

@class NSData, NSString, NSURL;

@interface VungleMRAIDAsset : NSObject <VungleCacheable, NSCoding>
{
    NSData *_data;
    NSString *_campaignID;
    unsigned long long _type;
    NSURL *_privateURL;
    NSURL *_privateRemoteURL;
    NSString *_privateReplacementKey;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *URL;
- (_Bool)URLisLocal;
@property(copy, nonatomic) NSString *campaignID; // @synthesize campaignID=_campaignID;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)expectedLocalCacheURL;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 MRAIDAd:(id)arg2;
- (id)initWithURL:(id)arg1 replacementKey:(id)arg2 campaignID:(id)arg3;
- (_Bool)isCached;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToMRAIDAsset:(id)arg1;
@property(retain, nonatomic) NSURL *privateRemoteURL; // @synthesize privateRemoteURL=_privateRemoteURL;
@property(retain, nonatomic) NSString *privateReplacementKey; // @synthesize privateReplacementKey=_privateReplacementKey;
@property(retain, nonatomic) NSURL *privateURL; // @synthesize privateURL=_privateURL;
@property(readonly, copy, nonatomic) NSURL *remoteURL;
@property(readonly, copy, nonatomic) NSString *replacementKey;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)storeInCacheWithError:(id *)arg1;
- (_Bool)verifyLocalAssetWithError:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
