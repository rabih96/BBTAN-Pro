//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VungleSerialQueueProvider.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface VungleFileManagerQueueProvider : NSObject <VungleSerialQueueProvider>
{
    NSObject<OS_dispatch_queue> *_fileManagerQueue;
}

+ (id)sharedProvider;
- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *fileManagerQueue; // @synthesize fileManagerQueue=_fileManagerQueue;
- (id)init;
- (id)provideSerialQueue;
- (void)setupSerialQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

