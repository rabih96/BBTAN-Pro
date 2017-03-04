//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCachedURLResponse, NSData, NSDate, NSURL, NSURLResponse;

@interface GADCachedURLResponse : NSObject
{
    NSCachedURLResponse *_cachedURLResponse;
    NSDate *_expirationDate;
    NSURL *_destinationURL;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *data;
@property(copy, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)initWithResponse:(id)arg1 data:(id)arg2 expirationDate:(id)arg3 destinationURL:(id)arg4;
@property(readonly, copy, nonatomic) NSURLResponse *response;

@end

