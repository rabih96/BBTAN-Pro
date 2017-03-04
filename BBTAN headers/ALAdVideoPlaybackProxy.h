//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALAdVideoPlaybackDelegate.h"

@class NSString;

@interface ALAdVideoPlaybackProxy : NSObject <ALAdVideoPlaybackDelegate>
{
    id <ALAdVideoPlaybackDelegate> delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <ALAdVideoPlaybackDelegate> delegate; // @synthesize delegate;
- (id)initWithVideoPlaybackDelegate:(id)arg1;
- (void)videoPlaybackBeganInAd:(id)arg1;
- (void)videoPlaybackEndedInAd:(id)arg1 atPlaybackPercent:(id)arg2 fullyWatched:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

