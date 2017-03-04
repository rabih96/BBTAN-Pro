//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, VungleDeviceInformationProvider, VungleIDFVPermissionProvider, VungleNetworkManager, VunglePublisherInformation, VungleVDUIDProvider;

@interface VungleConfigController : NSObject
{
    unsigned char _streamingFlags;
    double _streamingRequestTimeout;
    double _streamingBufferTimeout;
    VunglePublisherInformation *_publisherInformation;
    id <VungleStreamingConfigurableDelegate> _delegate;
    NSURL *_URL;
    VungleNetworkManager *_networkManager;
    VungleVDUIDProvider *_VDUIDProvider;
    VungleDeviceInformationProvider *_deviceInformationProvider;
    VungleIDFVPermissionProvider *_IDFVPermissionProvider;
}

- (void).cxx_destruct;
@property(nonatomic) __weak VungleIDFVPermissionProvider *IDFVPermissionProvider; // @synthesize IDFVPermissionProvider=_IDFVPermissionProvider;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak VungleVDUIDProvider *VDUIDProvider; // @synthesize VDUIDProvider=_VDUIDProvider;
@property(nonatomic) __weak id <VungleStreamingConfigurableDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak VungleDeviceInformationProvider *deviceInformationProvider; // @synthesize deviceInformationProvider=_deviceInformationProvider;
- (void)fetchConfig;
- (void)fetchConfigWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)handleConfigDownload:(id)arg1;
- (id)initWithBaseURL:(id)arg1 networkManager:(id)arg2 VDUIDProvider:(id)arg3 IDFVPermissionProvider:(id)arg4 deviceInformationProvider:(id)arg5 delegate:(id)arg6;
- (_Bool)isValidConfigResponse:(id)arg1;
@property(nonatomic) __weak VungleNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
@property(copy, nonatomic) VunglePublisherInformation *publisherInformation; // @synthesize publisherInformation=_publisherInformation;
- (void)requestNextConfigWithDelay:(unsigned long long)arg1;
@property(nonatomic) double streamingBufferTimeout; // @synthesize streamingBufferTimeout=_streamingBufferTimeout;
@property unsigned char streamingFlags; // @synthesize streamingFlags=_streamingFlags;
@property(nonatomic) double streamingRequestTimeout; // @synthesize streamingRequestTimeout=_streamingRequestTimeout;
- (_Bool)shouldRequestStreamingAd;

@end
