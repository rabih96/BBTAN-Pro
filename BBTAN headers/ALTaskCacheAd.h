//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALTask.h"

@class ALAd, ALFileManager, NSString;

@interface ALTaskCacheAd : ALTask
{
    ALAd *_ad;
    id <ALAdLoadDelegate> _adLoadDelegate;
    NSString *_videoURLString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ALAd *ad; // @synthesize ad=_ad;
@property(retain, nonatomic) id <ALAdLoadDelegate> adLoadDelegate; // @synthesize adLoadDelegate=_adLoadDelegate;
- (_Bool)cacheData:(id)arg1 forResourceName:(id)arg2 response:(id)arg3 error:(id)arg4;
- (id)cacheResource:(id)arg1;
- (void)callbackAdLoadSuccessIfNeeded;
@property(readonly) ALFileManager *fileManager; // @dynamic fileManager;
- (id)initWithSdk:(id)arg1 renderedAd:(id)arg2 videoURLString:(id)arg3 adLoadDelegate:(id)arg4;
- (_Bool)isResponseSuccess:(id)arg1;
- (_Bool)loadAndSaveResource:(id)arg1 forName:(id)arg2;
@property(copy, nonatomic) NSString *videoURLString; // @synthesize videoURLString=_videoURLString;

@end

