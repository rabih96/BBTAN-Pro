//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCondition, NSString;

@interface UADSResolve : NSObject
{
    _Bool _canceled;
    NSString *_hostName;
    NSString *_address;
    NSCondition *_blockCondition;
    NSString *_error;
    NSString *_errorMessage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSCondition *blockCondition; // @synthesize blockCondition=_blockCondition;
- (void)cancel;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(retain, nonatomic) NSString *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
- (id)initWithHostName:(id)arg1;
- (void)openBlock;
- (void)resolve;

@end
