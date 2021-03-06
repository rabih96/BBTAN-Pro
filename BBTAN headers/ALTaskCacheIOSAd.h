//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALTaskCacheAd.h"

@class ALIOSAd;

@interface ALTaskCacheIOSAd : ALTaskCacheAd
{
    _Bool _loadAdImmediatelyOnStream;
}

- (id)cacheHTMLResource:(id)arg1 forPrefix:(id)arg2;
- (void)cacheHTMLResources;
- (id)cacheHTMLResources:(id)arg1;
- (void)cacheMuteImages;
- (void)cacheVideoIfNeeded;
@property(readonly, nonatomic) ALIOSAd *iOSAd; // @dynamic iOSAd;
@property(nonatomic) _Bool loadAdImmediatelyOnStream; // @synthesize loadAdImmediatelyOnStream=_loadAdImmediatelyOnStream;
- (void)run;

@end

