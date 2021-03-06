//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSURL, VungleDeviceInformationProvider;

@interface VungleLogger : NSObject
{
    _Bool _paused;
    long long _loggingLevel;
    unsigned long long _maximumEntries;
    VungleDeviceInformationProvider *_deviceInformationProvider;
    id <VungleLoggerDelegate> _delegate;
    unsigned long long _numberOfEntries;
    NSString *_name;
    NSMutableArray *_messageBuffer;
    NSObject<OS_dispatch_queue> *_loggerQueue;
    unsigned long long _messageBufferSize;
}

- (void).cxx_destruct;
- (void)clearLogWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <VungleLoggerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VungleDeviceInformationProvider *deviceInformationProvider; // @synthesize deviceInformationProvider=_deviceInformationProvider;
@property(readonly, nonatomic) unsigned long long entryCount;
- (void)flush;
- (void)flushBuffer:(id)arg1;
- (id)initWithLoggingLevel:(long long)arg1 maximumEntries:(unsigned long long)arg2 name:(id)arg3 bufferSize:(unsigned long long)arg4;
@property(getter=isPaused, setter=setIsPaused:) _Bool paused; // @synthesize paused=_paused;
- (_Bool)kickstartWithError:(id *)arg1;
@property(readonly, copy, nonatomic) NSURL *localLogURL;
- (id)logFileURLWithLogName:(id)arg1;
- (void)logMessage:(id)arg1 level:(long long)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue; // @synthesize loggerQueue=_loggerQueue;
@property(nonatomic) long long loggingLevel; // @synthesize loggingLevel=_loggingLevel;
@property(nonatomic) unsigned long long maximumEntries; // @synthesize maximumEntries=_maximumEntries;
@property(retain, nonatomic) NSMutableArray *messageBuffer; // @synthesize messageBuffer=_messageBuffer;
@property(nonatomic) unsigned long long messageBufferSize; // @synthesize messageBufferSize=_messageBufferSize;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long numberOfEntries; // @synthesize numberOfEntries=_numberOfEntries;
- (_Bool)setupLogDirectoryStructure;
- (void)setupSerialQueue;

@end

