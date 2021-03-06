//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAssetResourceLoaderDelegate.h"

@class AVPlayerItem, AVURLAsset, GADGCacheURLLoader, NSMutableArray, NSString, NSURL;

@interface GADVideoLoader : NSObject <AVAssetResourceLoaderDelegate>
{
    NSURL *_sourceURL;
    GADGCacheURLLoader *_gcacheURLLoader;
    _Bool _hasNotifiedVideoLoadingStarted;
    _Bool _hasNotifiedVideoLoadingFailed;
    NSURL *_fileURL;
    NSString *_contentType;
    long long _contentLength;
    NSMutableArray *_pendingRequests;
    AVURLAsset *_cachedResourceAsset;
    _Bool _isObservingResourceCache;
    _Bool _hasBeenUsed;
    AVPlayerItem *_playerItem;
    id <GADVideoLoaderDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
@property(nonatomic) __weak id <GADVideoLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool hasBeenUsed; // @synthesize hasBeenUsed=_hasBeenUsed;
- (void)loadCacheFileURL:(id)arg1 withContentType:(id)arg2 contentLength:(long long)arg3;
- (void)loadGCacheURL:(id)arg1;
- (void)loadStandardURL:(id)arg1;
- (void)loadURL:(id)arg1;
- (void)notifyVideoLoaderDidStartLoadingURL:(id)arg1;
- (void)notifyVideoLoaderFailedToLoadURL:(id)arg1 withError:(id)arg2;
- (void)observeResourceCacheUpdates;
@property(readonly, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
- (_Bool)processAssetResourceLoadingRequest:(id)arg1 withError:(id *)arg2;
- (void)resourceCacheDidUpdateCacheNotification:(id)arg1;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)stopObservingResourceCacheUpdates;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

