//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUserDefaults, VungleNetworkManager;

@interface VungleNewRequestController : NSObject
{
    VungleNetworkManager *_networkManager;
    NSUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
- (void)handleNewRequestComplete:(id)arg1;
- (id)initWithNetworkManager:(id)arg1 userDefaults:(id)arg2;
@property(nonatomic) __weak VungleNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
- (void)sendNewRequestWithURL:(id)arg1 publisherInformation:(id)arg2;
- (void)sendNewRequestWithURL:(id)arg1 publisherInformation:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) __weak NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;

@end

