//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface VunglePublisherInformation : NSObject <NSCopying>
{
    NSString *_IFA;
    NSString *_identifierForVendor;
    NSString *_appID;
    NSString *_pluginName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *IFA; // @synthesize IFA=_IFA;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *identifierForVendor; // @synthesize identifierForVendor=_identifierForVendor;
- (id)init;
- (_Bool)isEqual:(id)arg1;
@property(copy, nonatomic) NSString *pluginName; // @synthesize pluginName=_pluginName;
- (id)toDictionary;

@end

