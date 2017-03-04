//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADRequest.h"

@class NSArray, NSDictionary, NSString;

@interface DFPRequest : GADRequest
{
    NSString *_publisherProvidedID;
    NSArray *_categoryExclusions;
}

+ (void)updateCorrelator;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *categoryExclusions; // @synthesize categoryExclusions=_categoryExclusions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParameters:(id)arg1;
@property(copy, nonatomic) NSString *publisherProvidedID; // @synthesize publisherProvidedID=_publisherProvidedID;
- (id)threadSafeParameters;

// Remaining properties
@property(copy, nonatomic) NSDictionary *customTargeting; // @dynamic customTargeting;

@end
