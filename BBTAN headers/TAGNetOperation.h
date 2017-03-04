//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSError, NSMutableData, NSURLConnection, NSURLRequest, NSURLResponse;

@interface TAGNetOperation : NSOperation
{
    _Bool _isCancelled;
    _Bool _isExecuting;
    _Bool _isFinished;
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSMutableData *_data;
    NSError *_error;
    NSURLConnection *_connection;
    CDUnknownBlockType _completion;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)operationWithRequest:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (oneway void)cancel;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)finish;
@property(nonatomic, getter=isCancelled) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (_Bool)isConcurrent;
@property(nonatomic, getter=isExecuting) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic, getter=isFinished) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
- (oneway void)start;

@end
