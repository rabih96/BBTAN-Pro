//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayer;

@protocol GADVideoRendering <NSObject>
- (void)disableVideoPlaybackOptimization;
- (void)enableVideoPlaybackOptimization;
- (void)optimizeVideoForAdVisibility:(_Bool)arg1;
- (void)resetVideoPlaybackOptimization;
- (void)setUpWithPlayer:(AVPlayer *)arg1;
@end
